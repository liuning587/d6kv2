/****************************************************************************
** Meta object code from reading C++ file 'title_frame.h'
**
** Created: Fri Apr 7 09:20:43 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../title_frame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'title_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Title_frame[] = {

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
      13,   12,   12,   12, 0x08,
      31,   12,   12,   12, 0x08,
      49,   12,   12,   12, 0x08,
      69,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Title_frame[] = {
    "Title_frame\0\0slot_min_widget()\0"
    "slot_max_widget()\0slot_close_widget()\0"
    "slot_about_dlg()\0"
};

void Title_frame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Title_frame *_t = static_cast<Title_frame *>(_o);
        switch (_id) {
        case 0: _t->slot_min_widget(); break;
        case 1: _t->slot_max_widget(); break;
        case 2: _t->slot_close_widget(); break;
        case 3: _t->slot_about_dlg(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Title_frame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Title_frame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Title_frame,
      qt_meta_data_Title_frame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Title_frame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Title_frame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Title_frame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Title_frame))
        return static_cast<void*>(const_cast< Title_frame*>(this));
    return QFrame::qt_metacast(_clname);
}

int Title_frame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
