/****************************************************************************
** Meta object code from reading C++ file 'gamewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gamewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameWidget_t {
    QByteArrayData data[23];
    char stringdata[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameWidget_t qt_meta_stringdata_GameWidget = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 11),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 8),
QT_MOC_LITERAL(4, 33, 8),
QT_MOC_LITERAL(5, 42, 7),
QT_MOC_LITERAL(6, 50, 7),
QT_MOC_LITERAL(7, 58, 11),
QT_MOC_LITERAL(8, 70, 8),
QT_MOC_LITERAL(9, 79, 8),
QT_MOC_LITERAL(10, 88, 7),
QT_MOC_LITERAL(11, 96, 6),
QT_MOC_LITERAL(12, 103, 7),
QT_MOC_LITERAL(13, 111, 6),
QT_MOC_LITERAL(14, 118, 6),
QT_MOC_LITERAL(15, 125, 8),
QT_MOC_LITERAL(16, 134, 6),
QT_MOC_LITERAL(17, 141, 9),
QT_MOC_LITERAL(18, 151, 9),
QT_MOC_LITERAL(19, 161, 10),
QT_MOC_LITERAL(20, 172, 13),
QT_MOC_LITERAL(21, 186, 7),
QT_MOC_LITERAL(22, 194, 9)
    },
    "GameWidget\0chHealthSgn\0\0chHapSgn\0"
    "chSatSgn\0chEnSgn\0sendMes\0chHealthSlt\0"
    "chHapSlt\0chSatSlt\0chEnSlt\0toFeed\0"
    "toSleep\0toWash\0toCure\0toWakeUp\0toPlay\0"
    "toKillPet\0setRefuse\0setRefuses\0"
    "destroyRefuse\0Refuse*\0createPet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       3,    1,  117,    2, 0x06 /* Public */,
       4,    1,  120,    2, 0x06 /* Public */,
       5,    1,  123,    2, 0x06 /* Public */,
       6,    1,  126,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  129,    2, 0x0a /* Public */,
       8,    1,  132,    2, 0x0a /* Public */,
       9,    1,  135,    2, 0x0a /* Public */,
      10,    1,  138,    2, 0x0a /* Public */,
      11,    0,  141,    2, 0x0a /* Public */,
      12,    0,  142,    2, 0x0a /* Public */,
      13,    0,  143,    2, 0x0a /* Public */,
      14,    0,  144,    2, 0x0a /* Public */,
      15,    0,  145,    2, 0x0a /* Public */,
      16,    1,  146,    2, 0x0a /* Public */,
      17,    0,  149,    2, 0x0a /* Public */,
      18,    0,  150,    2, 0x0a /* Public */,
      19,    1,  151,    2, 0x0a /* Public */,
      20,    1,  154,    2, 0x0a /* Public */,
      22,    0,  157,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void,

       0        // eod
};

void GameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameWidget *_t = static_cast<GameWidget *>(_o);
        switch (_id) {
        case 0: _t->chHealthSgn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->chHapSgn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->chSatSgn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->chEnSgn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sendMes((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->chHealthSlt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->chHapSlt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->chSatSlt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->chEnSlt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toFeed(); break;
        case 10: _t->toSleep(); break;
        case 11: _t->toWash(); break;
        case 12: _t->toCure(); break;
        case 13: _t->toWakeUp(); break;
        case 14: _t->toPlay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->toKillPet(); break;
        case 16: _t->setRefuse(); break;
        case 17: _t->setRefuses((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->destroyRefuse((*reinterpret_cast< Refuse*(*)>(_a[1]))); break;
        case 19: _t->createPet(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Refuse* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameWidget::chHealthSgn)) {
                *result = 0;
            }
        }
        {
            typedef void (GameWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameWidget::chHapSgn)) {
                *result = 1;
            }
        }
        {
            typedef void (GameWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameWidget::chSatSgn)) {
                *result = 2;
            }
        }
        {
            typedef void (GameWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameWidget::chEnSgn)) {
                *result = 3;
            }
        }
        {
            typedef void (GameWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameWidget::sendMes)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject GameWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GameWidget.data,
      qt_meta_data_GameWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *GameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GameWidget.stringdata))
        return static_cast<void*>(const_cast< GameWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int GameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void GameWidget::chHealthSgn(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameWidget::chHapSgn(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GameWidget::chSatSgn(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GameWidget::chEnSgn(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GameWidget::sendMes(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
