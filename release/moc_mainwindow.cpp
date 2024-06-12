/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "showRoutePlanning",
    "",
    "sendUsername",
    "on_login_clicked",
    "on_signup_clicked",
    "on_signup_ready_clicked",
    "receiveOperationTime",
    "receiveRoutePlanning",
    "receiveHistoryRoute",
    "receiveRealTime",
    "receiveHotPlace",
    "receiveCloth",
    "back_to_login",
    "on_signuptologin_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[17];
    char stringdata5[18];
    char stringdata6[24];
    char stringdata7[21];
    char stringdata8[21];
    char stringdata9[20];
    char stringdata10[16];
    char stringdata11[16];
    char stringdata12[13];
    char stringdata13[14];
    char stringdata14[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 17),  // "showRoutePlanning"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 12),  // "sendUsername"
        QT_MOC_LITERAL(43, 16),  // "on_login_clicked"
        QT_MOC_LITERAL(60, 17),  // "on_signup_clicked"
        QT_MOC_LITERAL(78, 23),  // "on_signup_ready_clicked"
        QT_MOC_LITERAL(102, 20),  // "receiveOperationTime"
        QT_MOC_LITERAL(123, 20),  // "receiveRoutePlanning"
        QT_MOC_LITERAL(144, 19),  // "receiveHistoryRoute"
        QT_MOC_LITERAL(164, 15),  // "receiveRealTime"
        QT_MOC_LITERAL(180, 15),  // "receiveHotPlace"
        QT_MOC_LITERAL(196, 12),  // "receiveCloth"
        QT_MOC_LITERAL(209, 13),  // "back_to_login"
        QT_MOC_LITERAL(223, 24)   // "on_signuptologin_clicked"
    },
    "MainWindow",
    "showRoutePlanning",
    "",
    "sendUsername",
    "on_login_clicked",
    "on_signup_clicked",
    "on_signup_ready_clicked",
    "receiveOperationTime",
    "receiveRoutePlanning",
    "receiveHistoryRoute",
    "receiveRealTime",
    "receiveHotPlace",
    "receiveCloth",
    "back_to_login",
    "on_signuptologin_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    1 /* Public */,
       3,    1,   93,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   96,    2, 0x08,    4 /* Private */,
       5,    0,   97,    2, 0x08,    5 /* Private */,
       6,    0,   98,    2, 0x08,    6 /* Private */,
       7,    0,   99,    2, 0x08,    7 /* Private */,
       8,    0,  100,    2, 0x08,    8 /* Private */,
       9,    0,  101,    2, 0x08,    9 /* Private */,
      10,    0,  102,    2, 0x08,   10 /* Private */,
      11,    0,  103,    2, 0x08,   11 /* Private */,
      12,    0,  104,    2, 0x08,   12 /* Private */,
      13,    0,  105,    2, 0x08,   13 /* Private */,
      14,    0,  106,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'showRoutePlanning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendUsername'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_login_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signup_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signup_ready_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveOperationTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveRoutePlanning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveHistoryRoute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveRealTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveHotPlace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveCloth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'back_to_login'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signuptologin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showRoutePlanning(); break;
        case 1: _t->sendUsername((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_login_clicked(); break;
        case 3: _t->on_signup_clicked(); break;
        case 4: _t->on_signup_ready_clicked(); break;
        case 5: _t->receiveOperationTime(); break;
        case 6: _t->receiveRoutePlanning(); break;
        case 7: _t->receiveHistoryRoute(); break;
        case 8: _t->receiveRealTime(); break;
        case 9: _t->receiveHotPlace(); break;
        case 10: _t->receiveCloth(); break;
        case 11: _t->back_to_login(); break;
        case 12: _t->on_signuptologin_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::showRoutePlanning; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::sendUsername; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::showRoutePlanning()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::sendUsername(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
