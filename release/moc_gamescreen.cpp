/****************************************************************************
** Meta object code from reading C++ file 'gamescreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gamescreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamescreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameScreen_t {
    QByteArrayData data[13];
    char stringdata[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameScreen_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameScreen_t qt_meta_stringdata_GameScreen = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 10),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 10),
QT_MOC_LITERAL(4, 34, 12),
QT_MOC_LITERAL(5, 47, 7),
QT_MOC_LITERAL(6, 55, 13),
QT_MOC_LITERAL(7, 69, 6),
QT_MOC_LITERAL(8, 76, 1),
QT_MOC_LITERAL(9, 78, 7),
QT_MOC_LITERAL(10, 86, 8),
QT_MOC_LITERAL(11, 95, 10),
QT_MOC_LITERAL(12, 106, 8)
    },
    "GameScreen\0sendPlayer\0\0toGameOver\0"
    "toMainWindow\0petSaid\0receivePlayer\0"
    "setAge\0s\0newGame\0gameOver\0mainWindow\0"
    "petNeeds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    0,   67,    2, 0x06 /* Public */,
       4,    0,   68,    2, 0x06 /* Public */,
       5,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   72,    2, 0x0a /* Public */,
       7,    1,   75,    2, 0x0a /* Public */,
       9,    1,   78,    2, 0x0a /* Public */,
      10,    0,   81,    2, 0x0a /* Public */,
      11,    0,   82,    2, 0x0a /* Public */,
      12,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void GameScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameScreen *_t = static_cast<GameScreen *>(_o);
        switch (_id) {
        case 0: _t->sendPlayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->toGameOver(); break;
        case 2: _t->toMainWindow(); break;
        case 3: _t->petSaid((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->receivePlayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setAge((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 6: _t->newGame((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->gameOver(); break;
        case 8: _t->mainWindow(); break;
        case 9: _t->petNeeds((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameScreen::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameScreen::sendPlayer)) {
                *result = 0;
            }
        }
        {
            typedef void (GameScreen::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameScreen::toGameOver)) {
                *result = 1;
            }
        }
        {
            typedef void (GameScreen::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameScreen::toMainWindow)) {
                *result = 2;
            }
        }
        {
            typedef void (GameScreen::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameScreen::petSaid)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject GameScreen::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GameScreen.data,
      qt_meta_data_GameScreen,  qt_static_metacall, 0, 0}
};


const QMetaObject *GameScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GameScreen.stringdata))
        return static_cast<void*>(const_cast< GameScreen*>(this));
    return QWidget::qt_metacast(_clname);
}

int GameScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GameScreen::sendPlayer(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameScreen::toGameOver()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GameScreen::toMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GameScreen::petSaid(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
