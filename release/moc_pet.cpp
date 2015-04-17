/****************************************************************************
** Meta object code from reading C++ file 'pet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../game/pet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pet_t {
    QByteArrayData data[34];
    char stringdata[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pet_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pet_t qt_meta_stringdata_Pet = {
    {
QT_MOC_LITERAL(0, 0, 3),
QT_MOC_LITERAL(1, 4, 11),
QT_MOC_LITERAL(2, 16, 0),
QT_MOC_LITERAL(3, 17, 8),
QT_MOC_LITERAL(4, 26, 8),
QT_MOC_LITERAL(5, 35, 7),
QT_MOC_LITERAL(6, 43, 8),
QT_MOC_LITERAL(7, 52, 9),
QT_MOC_LITERAL(8, 62, 9),
QT_MOC_LITERAL(9, 72, 5),
QT_MOC_LITERAL(10, 78, 5),
QT_MOC_LITERAL(11, 84, 9),
QT_MOC_LITERAL(12, 94, 4),
QT_MOC_LITERAL(13, 99, 11),
QT_MOC_LITERAL(14, 111, 8),
QT_MOC_LITERAL(15, 120, 8),
QT_MOC_LITERAL(16, 129, 7),
QT_MOC_LITERAL(17, 137, 4),
QT_MOC_LITERAL(18, 142, 6),
QT_MOC_LITERAL(19, 149, 4),
QT_MOC_LITERAL(20, 154, 5),
QT_MOC_LITERAL(21, 160, 6),
QT_MOC_LITERAL(22, 167, 4),
QT_MOC_LITERAL(23, 172, 4),
QT_MOC_LITERAL(24, 177, 9),
QT_MOC_LITERAL(25, 187, 6),
QT_MOC_LITERAL(26, 194, 9),
QT_MOC_LITERAL(27, 204, 9),
QT_MOC_LITERAL(28, 214, 8),
QT_MOC_LITERAL(29, 223, 7),
QT_MOC_LITERAL(30, 231, 12),
QT_MOC_LITERAL(31, 244, 15),
QT_MOC_LITERAL(32, 260, 7),
QT_MOC_LITERAL(33, 268, 11)
    },
    "Pet\0chHealthSgn\0\0chHapSgn\0chSatSgn\0"
    "chEnSgn\0sleepSgn\0wakeupSgn\0ageChange\0"
    "death\0birth\0count_ref\0need\0chHealthSlt\0"
    "chHapSlt\0chSatSlt\0chEnSlt\0feed\0points\0"
    "cure\0sleep\0wakeup\0wash\0play\0setFactor\0"
    "factor\0execution\0setPlayer\0lifeTime\0"
    "toDeath\0refuseExists\0refuseDestroyed\0"
    "newGame\0setConnects"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       3,    1,  167,    2, 0x06 /* Public */,
       4,    1,  170,    2, 0x06 /* Public */,
       5,    1,  173,    2, 0x06 /* Public */,
       6,    1,  176,    2, 0x06 /* Public */,
       7,    1,  179,    2, 0x06 /* Public */,
       8,    1,  182,    2, 0x06 /* Public */,
       9,    0,  185,    2, 0x06 /* Public */,
      10,    0,  186,    2, 0x06 /* Public */,
      11,    1,  187,    2, 0x06 /* Public */,
      12,    1,  190,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  193,    2, 0x0a /* Public */,
      14,    1,  196,    2, 0x0a /* Public */,
      15,    1,  199,    2, 0x0a /* Public */,
      16,    1,  202,    2, 0x0a /* Public */,
      17,    1,  205,    2, 0x0a /* Public */,
      19,    0,  208,    2, 0x0a /* Public */,
      20,    0,  209,    2, 0x0a /* Public */,
      21,    0,  210,    2, 0x0a /* Public */,
      22,    1,  211,    2, 0x0a /* Public */,
      23,    1,  214,    2, 0x0a /* Public */,
      24,    1,  217,    2, 0x0a /* Public */,
      26,    0,  220,    2, 0x0a /* Public */,
      27,    1,  221,    2, 0x0a /* Public */,
      28,    0,  224,    2, 0x0a /* Public */,
      29,    0,  225,    2, 0x0a /* Public */,
      30,    0,  226,    2, 0x0a /* Public */,
      31,    0,  227,    2, 0x0a /* Public */,
      32,    1,  228,    2, 0x0a /* Public */,
      33,    0,  231,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void Pet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Pet *_t = static_cast<Pet *>(_o);
        switch (_id) {
        case 0: _t->chHealthSgn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->chHapSgn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->chSatSgn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->chEnSgn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sleepSgn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->wakeupSgn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->ageChange((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 7: _t->death(); break;
        case 8: _t->birth(); break;
        case 9: _t->count_ref((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->need((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->chHealthSlt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->chHapSlt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->chSatSlt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->chEnSlt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->feed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->cure(); break;
        case 17: _t->sleep(); break;
        case 18: _t->wakeup(); break;
        case 19: _t->wash((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->play((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setFactor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->execution(); break;
        case 23: _t->setPlayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->lifeTime(); break;
        case 25: _t->toDeath(); break;
        case 26: _t->refuseExists(); break;
        case 27: _t->refuseDestroyed(); break;
        case 28: _t->newGame((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->setConnects(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Pet::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pet::chHealthSgn)) {
                *result = 0;
            }
        }
        {
            typedef void (Pet::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pet::chHapSgn)) {
                *result = 1;
            }
        }
        {
            typedef void (Pet::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pet::chSatSgn)) {
                *result = 2;
            }
        }
        {
            typedef void (Pet::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pet::chEnSgn)) {
                *result = 3;
            }
        }
        {
            typedef void (Pet::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pet::sleepSgn)) {
                *result = 4;
            }
        }
        {
            typedef void (Pet::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pet::wakeupSgn)) {
                *result = 5;
            }
        }
        {
            typedef void (Pet::*_t)(qlonglong );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pet::ageChange)) {
                *result = 6;
            }
        }
        {
            typedef void (Pet::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pet::death)) {
                *result = 7;
            }
        }
        {
            typedef void (Pet::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pet::birth)) {
                *result = 8;
            }
        }
        {
            typedef void (Pet::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pet::count_ref)) {
                *result = 9;
            }
        }
        {
            typedef void (Pet::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pet::need)) {
                *result = 10;
            }
        }
    }
}

const QMetaObject Pet::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Pet.data,
      qt_meta_data_Pet,  qt_static_metacall, 0, 0}
};


const QMetaObject *Pet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pet.stringdata))
        return static_cast<void*>(const_cast< Pet*>(this));
    return QWidget::qt_metacast(_clname);
}

int Pet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void Pet::chHealthSgn(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pet::chHapSgn(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Pet::chSatSgn(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Pet::chEnSgn(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Pet::sleepSgn(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Pet::wakeupSgn(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Pet::ageChange(qlonglong _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Pet::death()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void Pet::birth()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void Pet::count_ref(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Pet::need(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
