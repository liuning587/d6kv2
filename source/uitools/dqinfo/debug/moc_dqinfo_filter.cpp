/****************************************************************************
** Meta object code from reading C++ file 'dqinfo_filter.h'
**
** Created: Fri Apr 7 09:20:34 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dqinfo_filter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dqinfo_filter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFilter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      23,    8,    8,    8, 0x08,
      38,    8,    8,    8, 0x08,
      45,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QFilter[] = {
    "QFilter\0\0onSelectAll()\0onSelectNone()\0"
    "onOk()\0onCancel()\0"
};

void QFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QFilter *_t = static_cast<QFilter *>(_o);
        switch (_id) {
        case 0: _t->onSelectAll(); break;
        case 1: _t->onSelectNone(); break;
        case 2: _t->onOk(); break;
        case 3: _t->onCancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QFilter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFilter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QFilter,
      qt_meta_data_QFilter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFilter))
        return static_cast<void*>(const_cast< QFilter*>(this));
    return QDialog::qt_metacast(_clname);
}

int QFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
