/****************************************************************************
** Meta object code from reading C++ file 'secondwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../secondwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'secondwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSsecondWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSsecondWidgetENDCLASS = QtMocHelpers::stringData(
    "secondWidget",
    "showOperationTime",
    "",
    "showRealTime",
    "showHistoryRoute",
    "showMain",
    "showCloth",
    "showHotPlace",
    "init_signal",
    "down_signal",
    "up_signal",
    "mousepress_signal",
    "on_operationTime_clicked",
    "on_realTime_clicked",
    "on_historyRoute_clicked",
    "on_hotPlace_clicked",
    "on_cloth_button_clicked",
    "receiveRealTime",
    "receiveOperationTime",
    "receivelogin",
    "receiveHistoryRoute",
    "receiveCloth",
    "receiveHotPlace",
    "receiveUsername",
    "data",
    "receiveWhiteFont",
    "receiveBlackFont",
    "on_changeButton_clicked",
    "checked",
    "on_searchButton_clicked",
    "on_exit_button_clicked",
    "eventFilter",
    "watched",
    "QEvent*",
    "event",
    "wheelEvent",
    "QWheelEvent*",
    "getDateTime",
    "on_time_toHotplace_clicked",
    "on_leastSta_clicked",
    "on_shortestDst_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSsecondWidgetENDCLASS_t {
    uint offsetsAndSizes[82];
    char stringdata0[13];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[17];
    char stringdata5[9];
    char stringdata6[10];
    char stringdata7[13];
    char stringdata8[12];
    char stringdata9[12];
    char stringdata10[10];
    char stringdata11[18];
    char stringdata12[25];
    char stringdata13[20];
    char stringdata14[24];
    char stringdata15[20];
    char stringdata16[24];
    char stringdata17[16];
    char stringdata18[21];
    char stringdata19[13];
    char stringdata20[20];
    char stringdata21[13];
    char stringdata22[16];
    char stringdata23[16];
    char stringdata24[5];
    char stringdata25[17];
    char stringdata26[17];
    char stringdata27[24];
    char stringdata28[8];
    char stringdata29[24];
    char stringdata30[23];
    char stringdata31[12];
    char stringdata32[8];
    char stringdata33[8];
    char stringdata34[6];
    char stringdata35[11];
    char stringdata36[13];
    char stringdata37[12];
    char stringdata38[27];
    char stringdata39[20];
    char stringdata40[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSsecondWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSsecondWidgetENDCLASS_t qt_meta_stringdata_CLASSsecondWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "secondWidget"
        QT_MOC_LITERAL(13, 17),  // "showOperationTime"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 12),  // "showRealTime"
        QT_MOC_LITERAL(45, 16),  // "showHistoryRoute"
        QT_MOC_LITERAL(62, 8),  // "showMain"
        QT_MOC_LITERAL(71, 9),  // "showCloth"
        QT_MOC_LITERAL(81, 12),  // "showHotPlace"
        QT_MOC_LITERAL(94, 11),  // "init_signal"
        QT_MOC_LITERAL(106, 11),  // "down_signal"
        QT_MOC_LITERAL(118, 9),  // "up_signal"
        QT_MOC_LITERAL(128, 17),  // "mousepress_signal"
        QT_MOC_LITERAL(146, 24),  // "on_operationTime_clicked"
        QT_MOC_LITERAL(171, 19),  // "on_realTime_clicked"
        QT_MOC_LITERAL(191, 23),  // "on_historyRoute_clicked"
        QT_MOC_LITERAL(215, 19),  // "on_hotPlace_clicked"
        QT_MOC_LITERAL(235, 23),  // "on_cloth_button_clicked"
        QT_MOC_LITERAL(259, 15),  // "receiveRealTime"
        QT_MOC_LITERAL(275, 20),  // "receiveOperationTime"
        QT_MOC_LITERAL(296, 12),  // "receivelogin"
        QT_MOC_LITERAL(309, 19),  // "receiveHistoryRoute"
        QT_MOC_LITERAL(329, 12),  // "receiveCloth"
        QT_MOC_LITERAL(342, 15),  // "receiveHotPlace"
        QT_MOC_LITERAL(358, 15),  // "receiveUsername"
        QT_MOC_LITERAL(374, 4),  // "data"
        QT_MOC_LITERAL(379, 16),  // "receiveWhiteFont"
        QT_MOC_LITERAL(396, 16),  // "receiveBlackFont"
        QT_MOC_LITERAL(413, 23),  // "on_changeButton_clicked"
        QT_MOC_LITERAL(437, 7),  // "checked"
        QT_MOC_LITERAL(445, 23),  // "on_searchButton_clicked"
        QT_MOC_LITERAL(469, 22),  // "on_exit_button_clicked"
        QT_MOC_LITERAL(492, 11),  // "eventFilter"
        QT_MOC_LITERAL(504, 7),  // "watched"
        QT_MOC_LITERAL(512, 7),  // "QEvent*"
        QT_MOC_LITERAL(520, 5),  // "event"
        QT_MOC_LITERAL(526, 10),  // "wheelEvent"
        QT_MOC_LITERAL(537, 12),  // "QWheelEvent*"
        QT_MOC_LITERAL(550, 11),  // "getDateTime"
        QT_MOC_LITERAL(562, 26),  // "on_time_toHotplace_clicked"
        QT_MOC_LITERAL(589, 19),  // "on_leastSta_clicked"
        QT_MOC_LITERAL(609, 22)   // "on_shortestDst_clicked"
    },
    "secondWidget",
    "showOperationTime",
    "",
    "showRealTime",
    "showHistoryRoute",
    "showMain",
    "showCloth",
    "showHotPlace",
    "init_signal",
    "down_signal",
    "up_signal",
    "mousepress_signal",
    "on_operationTime_clicked",
    "on_realTime_clicked",
    "on_historyRoute_clicked",
    "on_hotPlace_clicked",
    "on_cloth_button_clicked",
    "receiveRealTime",
    "receiveOperationTime",
    "receivelogin",
    "receiveHistoryRoute",
    "receiveCloth",
    "receiveHotPlace",
    "receiveUsername",
    "data",
    "receiveWhiteFont",
    "receiveBlackFont",
    "on_changeButton_clicked",
    "checked",
    "on_searchButton_clicked",
    "on_exit_button_clicked",
    "eventFilter",
    "watched",
    "QEvent*",
    "event",
    "wheelEvent",
    "QWheelEvent*",
    "getDateTime",
    "on_time_toHotplace_clicked",
    "on_leastSta_clicked",
    "on_shortestDst_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSsecondWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  212,    2, 0x06,    1 /* Public */,
       3,    0,  213,    2, 0x06,    2 /* Public */,
       4,    0,  214,    2, 0x06,    3 /* Public */,
       5,    0,  215,    2, 0x06,    4 /* Public */,
       6,    0,  216,    2, 0x06,    5 /* Public */,
       7,    0,  217,    2, 0x06,    6 /* Public */,
       8,    0,  218,    2, 0x06,    7 /* Public */,
       9,    0,  219,    2, 0x06,    8 /* Public */,
      10,    0,  220,    2, 0x06,    9 /* Public */,
      11,    0,  221,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  222,    2, 0x08,   11 /* Private */,
      13,    0,  223,    2, 0x08,   12 /* Private */,
      14,    0,  224,    2, 0x08,   13 /* Private */,
      15,    0,  225,    2, 0x08,   14 /* Private */,
      16,    0,  226,    2, 0x08,   15 /* Private */,
      17,    0,  227,    2, 0x08,   16 /* Private */,
      18,    0,  228,    2, 0x08,   17 /* Private */,
      19,    0,  229,    2, 0x08,   18 /* Private */,
      20,    0,  230,    2, 0x08,   19 /* Private */,
      21,    0,  231,    2, 0x08,   20 /* Private */,
      22,    0,  232,    2, 0x08,   21 /* Private */,
      23,    1,  233,    2, 0x08,   22 /* Private */,
      25,    0,  236,    2, 0x08,   24 /* Private */,
      26,    0,  237,    2, 0x08,   25 /* Private */,
      27,    1,  238,    2, 0x08,   26 /* Private */,
      29,    1,  241,    2, 0x08,   28 /* Private */,
      30,    0,  244,    2, 0x08,   30 /* Private */,
      31,    2,  245,    2, 0x08,   31 /* Private */,
      35,    1,  250,    2, 0x08,   34 /* Private */,
      37,    0,  253,    2, 0x08,   36 /* Private */,
      38,    0,  254,    2, 0x08,   37 /* Private */,
      39,    0,  255,    2, 0x08,   38 /* Private */,
      40,    0,  256,    2, 0x08,   39 /* Private */,

 // signals: parameters
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
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 33,   32,   34,
    QMetaType::Void, 0x80000000 | 36,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject secondWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSsecondWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSsecondWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSsecondWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<secondWidget, std::true_type>,
        // method 'showOperationTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showRealTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showHistoryRoute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showCloth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showHotPlace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'down_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'up_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mousepress_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_operationTime_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_realTime_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_historyRoute_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_hotPlace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cloth_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveRealTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveOperationTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receivelogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveHistoryRoute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveCloth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveHotPlace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveUsername'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'receiveWhiteFont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveBlackFont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_searchButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_exit_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eventFilter'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>,
        // method 'wheelEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWheelEvent *, std::false_type>,
        // method 'getDateTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_time_toHotplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_leastSta_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_shortestDst_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void secondWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<secondWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showOperationTime(); break;
        case 1: _t->showRealTime(); break;
        case 2: _t->showHistoryRoute(); break;
        case 3: _t->showMain(); break;
        case 4: _t->showCloth(); break;
        case 5: _t->showHotPlace(); break;
        case 6: _t->init_signal(); break;
        case 7: _t->down_signal(); break;
        case 8: _t->up_signal(); break;
        case 9: _t->mousepress_signal(); break;
        case 10: _t->on_operationTime_clicked(); break;
        case 11: _t->on_realTime_clicked(); break;
        case 12: _t->on_historyRoute_clicked(); break;
        case 13: _t->on_hotPlace_clicked(); break;
        case 14: _t->on_cloth_button_clicked(); break;
        case 15: _t->receiveRealTime(); break;
        case 16: _t->receiveOperationTime(); break;
        case 17: _t->receivelogin(); break;
        case 18: _t->receiveHistoryRoute(); break;
        case 19: _t->receiveCloth(); break;
        case 20: _t->receiveHotPlace(); break;
        case 21: _t->receiveUsername((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->receiveWhiteFont(); break;
        case 23: _t->receiveBlackFont(); break;
        case 24: _t->on_changeButton_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->on_searchButton_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->on_exit_button_clicked(); break;
        case 27: { bool _r = _t->eventFilter((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: _t->wheelEvent((*reinterpret_cast< std::add_pointer_t<QWheelEvent*>>(_a[1]))); break;
        case 29: _t->getDateTime(); break;
        case 30: _t->on_time_toHotplace_clicked(); break;
        case 31: _t->on_leastSta_clicked(); break;
        case 32: _t->on_shortestDst_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (secondWidget::*)();
            if (_t _q_method = &secondWidget::showOperationTime; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (secondWidget::*)();
            if (_t _q_method = &secondWidget::showRealTime; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (secondWidget::*)();
            if (_t _q_method = &secondWidget::showHistoryRoute; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (secondWidget::*)();
            if (_t _q_method = &secondWidget::showMain; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (secondWidget::*)();
            if (_t _q_method = &secondWidget::showCloth; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (secondWidget::*)();
            if (_t _q_method = &secondWidget::showHotPlace; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (secondWidget::*)();
            if (_t _q_method = &secondWidget::init_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (secondWidget::*)();
            if (_t _q_method = &secondWidget::down_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (secondWidget::*)();
            if (_t _q_method = &secondWidget::up_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (secondWidget::*)();
            if (_t _q_method = &secondWidget::mousepress_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject *secondWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *secondWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSsecondWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int secondWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void secondWidget::showOperationTime()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void secondWidget::showRealTime()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void secondWidget::showHistoryRoute()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void secondWidget::showMain()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void secondWidget::showCloth()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void secondWidget::showHotPlace()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void secondWidget::init_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void secondWidget::down_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void secondWidget::up_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void secondWidget::mousepress_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
