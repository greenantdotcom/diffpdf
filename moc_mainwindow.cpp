/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   29,   38,   38, 0x08,
      39,   38,   38,   38, 0x28,
      50,   29,   38,   38, 0x08,
      68,   38,   38,   38, 0x28,
      79,  102,   38,   38, 0x08,
     112,  102,   38,   38, 0x08,
     135,   38,   38,   38, 0x08,
     145,   38,   38,   38, 0x08,
     155,   38,   38,   38, 0x08,
     162,   38,   38,   38, 0x08,
     170,   38,   38,   38, 0x08,
     177,  205,   38,   38, 0x08,
     225,   38,   38,   38, 0x08,
     236,  253,   38,   38, 0x08,
     259,   38,   38,   38, 0x28,
     273,  320,   38,   38, 0x08,
     325,  320,   38,   38, 0x08,
     371,  320,   38,   38, 0x08,
     417,  320,   38,   38, 0x08,
     464,  493,   38,   38, 0x08,
     502,  493,   38,   38, 0x08,
     530,  493,   38,   38, 0x08,
     558,  493,   38,   38, 0x08,
     587,  493,   38,   38, 0x08,
     612,   38,   38,   38, 0x08,
     628,   38,   38,   38, 0x08,
     640,   38,   38,   38, 0x08,
     652,   38,   38,   38, 0x08,
     666,  685,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0setFile1(QString)\0filename\0"
    "\0setFile1()\0setFile2(QString)\0setFile2()\0"
    "setFiles1(QStringList)\0filenames\0"
    "setFiles2(QStringList)\0compare()\0"
    "options()\0save()\0about()\0help()\0"
    "initialize(QString,QString)\0"
    "filename1,filename2\0updateUi()\0"
    "updateViews(int)\0index\0updateViews()\0"
    "controlDockLocationChanged(Qt::DockWidgetArea)\0"
    "area\0actionDockLocationChanged(Qt::DockWidgetArea)\0"
    "zoningDockLocationChanged(Qt::DockWidgetArea)\0"
    "marginsDockLocationChanged(Qt::DockWidgetArea)\0"
    "controlTopLevelChanged(bool)\0floating\0"
    "actionTopLevelChanged(bool)\0"
    "zoningTopLevelChanged(bool)\0"
    "marginsTopLevelChanged(bool)\0"
    "logTopLevelChanged(bool)\0previousPages()\0"
    "nextPages()\0showZones()\0showMargins()\0"
    "setAMargin(QPoint)\0pos\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->setFile1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setFile1(); break;
        case 2: _t->setFile2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setFile2(); break;
        case 4: _t->setFiles1((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->setFiles2((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->compare(); break;
        case 7: _t->options(); break;
        case 8: _t->save(); break;
        case 9: _t->about(); break;
        case 10: _t->help(); break;
        case 11: _t->initialize((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->updateUi(); break;
        case 13: _t->updateViews((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->updateViews(); break;
        case 15: _t->controlDockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 16: _t->actionDockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 17: _t->zoningDockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 18: _t->marginsDockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 19: _t->controlTopLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->actionTopLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->zoningTopLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->marginsTopLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->logTopLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->previousPages(); break;
        case 25: _t->nextPages(); break;
        case 26: _t->showZones(); break;
        case 27: _t->showMargins(); break;
        case 28: _t->setAMargin((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
