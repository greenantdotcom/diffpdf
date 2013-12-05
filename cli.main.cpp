/*
    Copyright © 2008-13 Qtrac Ltd. All rights reserved.
    This program or module is free software: you can redistribute it
    and/or modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation, either version 2 of
    the License, or (at your option) any later version. This program is
    distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
    for more details.
*/

#include "mainwindow.hpp"
#include <QApplication>
#include <QIcon>
#include <QLibraryInfo>
#include <QLocale>
#include <QSettings>
#include <QTextCodec>
#include <QTextStream>
#include <QTranslator>
#include <QPrinter>
#include <QPainter>
#include <QLocale>
#include <QLineEdit>




#include "aboutform.hpp"
#include "generic.hpp"
#include "helpform.hpp"
#include "label.hpp"
#include "lineedit.hpp"
#include "optionsform.hpp"
#include "mainwindow.hpp"
#include "sequence_matcher.hpp"
#include "textitem.hpp"
#ifdef DEBUG
#include <QtDebug>
#endif
#include <QApplication>
#include <QBoxLayout>
#include <QCheckBox>
#include <QComboBox>
#include <QDir>
#include <QDockWidget>
#include <QEvent>
#include <QFileDialog>
#include <QGroupBox>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QPainter>
#include <QPixmapCache>
#include <QPlainTextEdit>
#include <QPrinter>
#include <QPushButton>
#include <QRadioButton>
#include <QScrollArea>
#include <QScrollBar>
#include <QSettings>
#include <QSpinBox>
#include <QSplitter>
#include <QTextStream>








typedef QSharedPointer<Poppler::Document> PdfDocument;

void saveAsPdf(const int start, const int end,
        const PdfDocument &pdf1, const PdfDocument &pdf2,
        const QString &header, const QString &saveFilename);

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QStringList args = app.arguments().mid(1);

    // Comparison mode
    /* TODO: HACKED TO ONLY DO WHAT WE WANT… */
	// InitialComparisonMode comparisonMode = static_cast<InitialComparisonMode>(settings.value("InitialComparisonMode", CompareWords).toInt());
	InitialComparisonMode comparisonMode = CompareAppearance;

	// Language
	QString language = QLocale::system().name();
    
    QString filename1;
    QString filename2;
	QString outputFilename;

    bool optionsOK = true;
    Debug debug = DebugOff;

    const QString LanguageOption = "--language=";
    const QString header = "Hello world - welcome to cli land";

    QTextStream out(stdout);

    foreach (const QString arg, args) {
        if (optionsOK && (arg == "--appearance" || arg == "-a"))
            comparisonMode = CompareAppearance;
        else if (optionsOK && (arg == "--characters" || arg == "-c"))
            comparisonMode = CompareCharacters;
        else if (optionsOK && (arg == "--words" || arg == "-w"))
            comparisonMode = CompareWords;
        else if (optionsOK && arg.startsWith(LanguageOption))
            language = arg.mid(LanguageOption.length());
        else if (optionsOK && (arg == "--help" || arg == "-h")) {
            out << "usage: diffpdf [options] [file1.pdf [file2.pdf]]\n\n"
                "A GUI program that compares two PDF files and shows "
                "their differences.\n"
                "\nThe files are optional and are normally set "
                "through the user interface.\n\n"
                "options:\n"
                "--help        -h   show this usage text and terminate "
                "(run the program without this option and press F1 for "
                "online help)\n"
                "--appearance  -a   set the initial comparison mode to "
                "Appearance\n"
                "--characters  -c   set the initial comparison mode to "
                "Characters\n"
                "--words       -w   set the initial comparison mode to "
                "Words\n"
                "--language=xx      set the program to use the given "
                "translation language, e.g., en for English, cz for "
                "Czech; English will be used if there is no translation "
                "available\n"
                "--debug=2          write the text fed to the sequence "
                "matcher into temporary files (e.g., /tmp/page1.txt "
                "etc.)\n"
                "--debug=3          as --debug=3 but also includes "
                "coordinates in y, x order\n"
                "\nRun the program without the --help option and click "
                "About to see copyright and license details\n"
                ;
            return 0;
        }
        else if (optionsOK && (arg == "--debug" || arg == "--debug=1" ||
                               arg == "--debug1"))
            ; // basic debug mode currently does nothing (did show zones)
        else if (optionsOK && (arg == "--debug=2" || arg == "--debug2"))
            debug = DebugShowTexts;
        else if (optionsOK && (arg == "--debug=3" || arg == "--debug3"))
            debug = DebugShowTextsAndYX;
        else if (optionsOK && arg == "--")
            optionsOK = false;
        else if (filename1.isEmpty() && arg.toLower().endsWith(".pdf"))
            filename1 = arg;
        else if (filename2.isEmpty() && arg.toLower().endsWith(".pdf"))
            filename2 = arg;
        else if (outputFilename.isEmpty() && arg.toLower().endsWith(".pdf"))
            outputFilename = arg;
        else
            out << "unrecognized argument '" << arg << "'\n";
    }

    if(filename1.isEmpty() || filename2.isEmpty() || outputFilename.isEmpty()){
    	out << "You must provide both the before/after files, and a path to the output file. Exiting…\n";

    	return 1;
    }

    PdfDocument pdf1(Poppler::Document::load(filename1));
    if (!pdf1){
    	out << "Could not load the first file<" << filename1 << ">. Exiting…\n";

    	return 20;
    }

    PdfDocument pdf2(Poppler::Document::load(filename2));
    if (!pdf2){
    	out << "Could not load the second file<" << filename2 << ">. Exiting…\n";

    	return 21;
    }
    
    out << pdf1->numPages() << " // " << pdf2->numPages() << "\n";

    int minIndex = 0;
    int maxIndex = std::max(pdf1->numPages(),pdf2->numPages());

    // // return 10;

    // out << "WOOT"  << "\n";;
    // out << filename1 << " / " << filename2 << " / " << outputFilename << "\n";;

	/*
	 *
	 */

	    // MainWindow window(debug, comparisonMode, filename1, filename2,
            // language.left(2)); // We want de not de_DE etc.

	MainWindow *window   = new MainWindow( DebugShowTexts, comparisonMode, filename1, filename2, "en" );
	window->saveFilename = outputFilename;
	window->savePages    = SaveBothPages;
	window->setFile1( filename1 );
	window->setFile2( filename2 );

    out << window->filename1LineEdit->text() << " / " << window->filename2LineEdit->text() << "\n";
    
	window->compare();

	window->saveAsPdf( minIndex, maxIndex, pdf1, pdf2, header );

    return 2;
}