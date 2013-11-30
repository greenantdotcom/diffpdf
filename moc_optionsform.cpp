/****************************************************************************
** Meta object code from reading C++ file 'optionsform.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "optionsform.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsform.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionsForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   29,   35,   35, 0x08,
      36,   29,   35,   35, 0x08,
      58,   29,   35,   35, 0x08,
      78,   35,   35,   35, 0x08,
      95,   35,   35,   35, 0x08,
     106,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OptionsForm[] = {
    "OptionsForm\0updateColor(int)\0index\0\0"
    "updateBrushStyle(int)\0updatePenStyle(int)\0"
    "updateSwatches()\0updateUi()\0accept()\0"
};

void OptionsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptionsForm *_t = static_cast<OptionsForm *>(_o);
        switch (_id) {
        case 0: _t->updateColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateBrushStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updatePenStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateSwatches(); break;
        case 4: _t->updateUi(); break;
        case 5: _t->accept(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OptionsForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OptionsForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OptionsForm,
      qt_meta_data_OptionsForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionsForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsForm))
        return static_cast<void*>(const_cast< OptionsForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int OptionsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
