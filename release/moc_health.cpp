/****************************************************************************
** Meta object code from reading C++ file 'health.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../game/health.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'health.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Health_t {
    QByteArrayData data[7];
    char stringdata[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Health_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Health_t qt_meta_stringdata_Health = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 11),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 5),
QT_MOC_LITERAL(4, 26, 15),
QT_MOC_LITERAL(5, 42, 7),
QT_MOC_LITERAL(6, 50, 5)
    },
    "Health\0changeLevel\0\0death\0reductionHealth\0"
    "upSpeed\0speed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Health[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   38,    2, 0x0a /* Public */,
       5,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    6,

       0        // eod
};

void Health::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Health *_t = static_cast<Health *>(_o);
        switch (_id) {
        case 0: _t->changeLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->death(); break;
        case 2: _t->reductionHealth(); break;
        case 3: _t->upSpeed((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Health::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Health::changeLevel)) {
                *result = 0;
            }
        }
        {
            typedef void (Health::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Health::death)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Health::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Health.data,
      qt_meta_data_Health,  qt_static_metacall, 0, 0}
};


const QMetaObject *Health::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Health::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Health.stringdata))
        return static_cast<void*>(const_cast< Health*>(this));
    return QObject::qt_metacast(_clname);
}

int Health::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Health::changeLevel(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Health::death()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
