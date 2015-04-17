/****************************************************************************
** Meta object code from reading C++ file 'screencontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../screencontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screencontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScreenController_t {
    QByteArrayData data[19];
    char stringdata[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenController_t qt_meta_stringdata_ScreenController = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 6),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 7),
QT_MOC_LITERAL(4, 33, 6),
QT_MOC_LITERAL(5, 40, 6),
QT_MOC_LITERAL(6, 47, 9),
QT_MOC_LITERAL(7, 57, 9),
QT_MOC_LITERAL(8, 67, 10),
QT_MOC_LITERAL(9, 78, 6),
QT_MOC_LITERAL(10, 85, 11),
QT_MOC_LITERAL(11, 97, 7),
QT_MOC_LITERAL(12, 105, 17),
QT_MOC_LITERAL(13, 123, 33),
QT_MOC_LITERAL(14, 157, 6),
QT_MOC_LITERAL(15, 164, 17),
QT_MOC_LITERAL(16, 182, 18),
QT_MOC_LITERAL(17, 201, 12),
QT_MOC_LITERAL(18, 214, 11)
    },
    "ScreenController\0player\0\0newGame\0"
    "onAuth\0onGame\0setPlayer\0onNewGame\0"
    "onGameOver\0onMain\0changeEvent\0QEvent*\0"
    "trayIconActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason\0trayActionExecute\0setTrayIconActions\0"
    "showTrayIcon\0showMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   90,    2, 0x0a /* Public */,
       5,    1,   91,    2, 0x0a /* Public */,
       6,    1,   94,    2, 0x0a /* Public */,
       7,    0,   97,    2, 0x0a /* Public */,
       8,    0,   98,    2, 0x0a /* Public */,
       9,    0,   99,    2, 0x0a /* Public */,
      10,    1,  100,    2, 0x0a /* Public */,
      12,    1,  103,    2, 0x0a /* Public */,
      15,    0,  106,    2, 0x0a /* Public */,
      16,    0,  107,    2, 0x0a /* Public */,
      17,    0,  108,    2, 0x0a /* Public */,
      18,    1,  109,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void ScreenController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenController *_t = static_cast<ScreenController *>(_o);
        switch (_id) {
        case 0: _t->player((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->newGame((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onAuth(); break;
        case 3: _t->onGame((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setPlayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->onNewGame(); break;
        case 6: _t->onGameOver(); break;
        case 7: _t->onMain(); break;
        case 8: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 9: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 10: _t->trayActionExecute(); break;
        case 11: _t->setTrayIconActions(); break;
        case 12: _t->showTrayIcon(); break;
        case 13: _t->showMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScreenController::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScreenController::player)) {
                *result = 0;
            }
        }
        {
            typedef void (ScreenController::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScreenController::newGame)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ScreenController::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ScreenController.data,
      qt_meta_data_ScreenController,  qt_static_metacall, 0, 0}
};


const QMetaObject *ScreenController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenController.stringdata))
        return static_cast<void*>(const_cast< ScreenController*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ScreenController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ScreenController::player(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScreenController::newGame(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
