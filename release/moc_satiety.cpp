/****************************************************************************
** Meta object code from reading C++ file 'satiety.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../game/satiety.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'satiety.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Satiety_t {
    QByteArrayData data[8];
    char stringdata[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Satiety_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Satiety_t qt_meta_stringdata_Satiety = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 10),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 7),
QT_MOC_LITERAL(4, 28, 11),
QT_MOC_LITERAL(5, 40, 16),
QT_MOC_LITERAL(6, 57, 11),
QT_MOC_LITERAL(7, 69, 6)
    },
    "Satiety\0satietyNow\0\0fullNow\0changeLevel\0"
    "reductionSatiety\0changeSpeed\0factor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Satiety[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,
       4,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x0a /* Public */,
       6,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void Satiety::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Satiety *_t = static_cast<Satiety *>(_o);
        switch (_id) {
        case 0: _t->satietyNow((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->fullNow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->reductionSatiety(); break;
        case 4: _t->changeSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Satiety::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Satiety::satietyNow)) {
                *result = 0;
            }
        }
        {
            typedef void (Satiety::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Satiety::fullNow)) {
                *result = 1;
            }
        }
        {
            typedef void (Satiety::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Satiety::changeLevel)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Satiety::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Satiety.data,
      qt_meta_data_Satiety,  qt_static_metacall, 0, 0}
};


const QMetaObject *Satiety::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Satiety::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Satiety.stringdata))
        return static_cast<void*>(const_cast< Satiety*>(this));
    return QObject::qt_metacast(_clname);
}

int Satiety::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Satiety::satietyNow(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Satiety::fullNow(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Satiety::changeLevel(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
