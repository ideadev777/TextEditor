/****************************************************************************
** Meta object code from reading C++ file 'cxcontentlabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cxcontentlabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cxcontentlabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CxContentLabel_t {
    QByteArrayData data[7];
    char stringdata[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CxContentLabel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CxContentLabel_t qt_meta_stringdata_CxContentLabel = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 13),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 16),
QT_MOC_LITERAL(4, 47, 4),
QT_MOC_LITERAL(5, 52, 2),
QT_MOC_LITERAL(6, 55, 3)
    },
    "CxContentLabel\0__showPreview\0\0"
    "QListWidgetItem*\0item\0on\0pnt\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CxContentLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x05,
       1,    2,   31,    2, 0x25,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::QPoint,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,

       0        // eod
};

void CxContentLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CxContentLabel *_t = static_cast<CxContentLabel *>(_o);
        switch (_id) {
        case 0: _t->__showPreview((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3]))); break;
        case 1: _t->__showPreview((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CxContentLabel::*_t)(QListWidgetItem * , bool , QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxContentLabel::__showPreview)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CxContentLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_CxContentLabel.data,
      qt_meta_data_CxContentLabel,  qt_static_metacall, 0, 0}
};


const QMetaObject *CxContentLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CxContentLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CxContentLabel.stringdata))
        return static_cast<void*>(const_cast< CxContentLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int CxContentLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CxContentLabel::__showPreview(QListWidgetItem * _t1, bool _t2, QPoint _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
