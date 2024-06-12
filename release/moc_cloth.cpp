/****************************************************************************
** Meta object code from reading C++ file 'cloth.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cloth.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cloth.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSclothENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSclothENDCLASS = QtMocHelpers::stringData(
    "cloth",
    "showMain",
    "",
    "showRoutePlanning",
    "showRealTime",
    "showOperationTime",
    "showHistoryTime",
    "showHotPlace",
    "blackfont",
    "whitefont",
    "on_exit_button_clicked",
    "receiveUsername",
    "data",
    "receiveRoutePlanning",
    "receiveHistoryRoute",
    "receiveOperationTime",
    "receiveRealTime",
    "receiveHotPlace",
    "receiveBlackFont",
    "receiveWhiteFont",
    "on_routePlanning_clicked",
    "on_realTime_clicked",
    "on_historyRoute_clicked",
    "on_operationTime_clicked",
    "on_hotPlace_clicked",
    "on_skin1_clicked",
    "on_skin1_2_clicked",
    "on_skin1_3_clicked",
    "on_skin1_4_clicked",
    "on_skin1_8_clicked",
    "on_skin1_7_clicked",
    "on_skin1_6_clicked",
    "on_skin1_5_clicked",
    "on_skin1_12_clicked",
    "on_skin1_11_clicked",
    "on_skin1_10_clicked",
    "on_skin1_9_clicked",
    "on_head_clicked",
    "on_head_2_clicked",
    "on_head_3_clicked",
    "on_head_4_clicked",
    "on_head_5_clicked",
    "on_head_6_clicked",
    "on_head_9_clicked",
    "on_head_7_clicked",
    "on_head_8_clicked",
    "on_head_12_clicked",
    "on_head_10_clicked",
    "on_head_11_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSclothENDCLASS_t {
    uint offsetsAndSizes[98];
    char stringdata0[6];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[13];
    char stringdata5[18];
    char stringdata6[16];
    char stringdata7[13];
    char stringdata8[10];
    char stringdata9[10];
    char stringdata10[23];
    char stringdata11[16];
    char stringdata12[5];
    char stringdata13[21];
    char stringdata14[20];
    char stringdata15[21];
    char stringdata16[16];
    char stringdata17[16];
    char stringdata18[17];
    char stringdata19[17];
    char stringdata20[25];
    char stringdata21[20];
    char stringdata22[24];
    char stringdata23[25];
    char stringdata24[20];
    char stringdata25[17];
    char stringdata26[19];
    char stringdata27[19];
    char stringdata28[19];
    char stringdata29[19];
    char stringdata30[19];
    char stringdata31[19];
    char stringdata32[19];
    char stringdata33[20];
    char stringdata34[20];
    char stringdata35[20];
    char stringdata36[19];
    char stringdata37[16];
    char stringdata38[18];
    char stringdata39[18];
    char stringdata40[18];
    char stringdata41[18];
    char stringdata42[18];
    char stringdata43[18];
    char stringdata44[18];
    char stringdata45[18];
    char stringdata46[19];
    char stringdata47[19];
    char stringdata48[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSclothENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSclothENDCLASS_t qt_meta_stringdata_CLASSclothENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "cloth"
        QT_MOC_LITERAL(6, 8),  // "showMain"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 17),  // "showRoutePlanning"
        QT_MOC_LITERAL(34, 12),  // "showRealTime"
        QT_MOC_LITERAL(47, 17),  // "showOperationTime"
        QT_MOC_LITERAL(65, 15),  // "showHistoryTime"
        QT_MOC_LITERAL(81, 12),  // "showHotPlace"
        QT_MOC_LITERAL(94, 9),  // "blackfont"
        QT_MOC_LITERAL(104, 9),  // "whitefont"
        QT_MOC_LITERAL(114, 22),  // "on_exit_button_clicked"
        QT_MOC_LITERAL(137, 15),  // "receiveUsername"
        QT_MOC_LITERAL(153, 4),  // "data"
        QT_MOC_LITERAL(158, 20),  // "receiveRoutePlanning"
        QT_MOC_LITERAL(179, 19),  // "receiveHistoryRoute"
        QT_MOC_LITERAL(199, 20),  // "receiveOperationTime"
        QT_MOC_LITERAL(220, 15),  // "receiveRealTime"
        QT_MOC_LITERAL(236, 15),  // "receiveHotPlace"
        QT_MOC_LITERAL(252, 16),  // "receiveBlackFont"
        QT_MOC_LITERAL(269, 16),  // "receiveWhiteFont"
        QT_MOC_LITERAL(286, 24),  // "on_routePlanning_clicked"
        QT_MOC_LITERAL(311, 19),  // "on_realTime_clicked"
        QT_MOC_LITERAL(331, 23),  // "on_historyRoute_clicked"
        QT_MOC_LITERAL(355, 24),  // "on_operationTime_clicked"
        QT_MOC_LITERAL(380, 19),  // "on_hotPlace_clicked"
        QT_MOC_LITERAL(400, 16),  // "on_skin1_clicked"
        QT_MOC_LITERAL(417, 18),  // "on_skin1_2_clicked"
        QT_MOC_LITERAL(436, 18),  // "on_skin1_3_clicked"
        QT_MOC_LITERAL(455, 18),  // "on_skin1_4_clicked"
        QT_MOC_LITERAL(474, 18),  // "on_skin1_8_clicked"
        QT_MOC_LITERAL(493, 18),  // "on_skin1_7_clicked"
        QT_MOC_LITERAL(512, 18),  // "on_skin1_6_clicked"
        QT_MOC_LITERAL(531, 18),  // "on_skin1_5_clicked"
        QT_MOC_LITERAL(550, 19),  // "on_skin1_12_clicked"
        QT_MOC_LITERAL(570, 19),  // "on_skin1_11_clicked"
        QT_MOC_LITERAL(590, 19),  // "on_skin1_10_clicked"
        QT_MOC_LITERAL(610, 18),  // "on_skin1_9_clicked"
        QT_MOC_LITERAL(629, 15),  // "on_head_clicked"
        QT_MOC_LITERAL(645, 17),  // "on_head_2_clicked"
        QT_MOC_LITERAL(663, 17),  // "on_head_3_clicked"
        QT_MOC_LITERAL(681, 17),  // "on_head_4_clicked"
        QT_MOC_LITERAL(699, 17),  // "on_head_5_clicked"
        QT_MOC_LITERAL(717, 17),  // "on_head_6_clicked"
        QT_MOC_LITERAL(735, 17),  // "on_head_9_clicked"
        QT_MOC_LITERAL(753, 17),  // "on_head_7_clicked"
        QT_MOC_LITERAL(771, 17),  // "on_head_8_clicked"
        QT_MOC_LITERAL(789, 18),  // "on_head_12_clicked"
        QT_MOC_LITERAL(808, 18),  // "on_head_10_clicked"
        QT_MOC_LITERAL(827, 18)   // "on_head_11_clicked"
    },
    "cloth",
    "showMain",
    "",
    "showRoutePlanning",
    "showRealTime",
    "showOperationTime",
    "showHistoryTime",
    "showHotPlace",
    "blackfont",
    "whitefont",
    "on_exit_button_clicked",
    "receiveUsername",
    "data",
    "receiveRoutePlanning",
    "receiveHistoryRoute",
    "receiveOperationTime",
    "receiveRealTime",
    "receiveHotPlace",
    "receiveBlackFont",
    "receiveWhiteFont",
    "on_routePlanning_clicked",
    "on_realTime_clicked",
    "on_historyRoute_clicked",
    "on_operationTime_clicked",
    "on_hotPlace_clicked",
    "on_skin1_clicked",
    "on_skin1_2_clicked",
    "on_skin1_3_clicked",
    "on_skin1_4_clicked",
    "on_skin1_8_clicked",
    "on_skin1_7_clicked",
    "on_skin1_6_clicked",
    "on_skin1_5_clicked",
    "on_skin1_12_clicked",
    "on_skin1_11_clicked",
    "on_skin1_10_clicked",
    "on_skin1_9_clicked",
    "on_head_clicked",
    "on_head_2_clicked",
    "on_head_3_clicked",
    "on_head_4_clicked",
    "on_head_5_clicked",
    "on_head_6_clicked",
    "on_head_9_clicked",
    "on_head_7_clicked",
    "on_head_8_clicked",
    "on_head_12_clicked",
    "on_head_10_clicked",
    "on_head_11_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSclothENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  290,    2, 0x06,    1 /* Public */,
       3,    0,  291,    2, 0x06,    2 /* Public */,
       4,    0,  292,    2, 0x06,    3 /* Public */,
       5,    0,  293,    2, 0x06,    4 /* Public */,
       6,    0,  294,    2, 0x06,    5 /* Public */,
       7,    0,  295,    2, 0x06,    6 /* Public */,
       8,    0,  296,    2, 0x06,    7 /* Public */,
       9,    0,  297,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  298,    2, 0x08,    9 /* Private */,
      11,    1,  299,    2, 0x08,   10 /* Private */,
      13,    0,  302,    2, 0x08,   12 /* Private */,
      14,    0,  303,    2, 0x08,   13 /* Private */,
      15,    0,  304,    2, 0x08,   14 /* Private */,
      16,    0,  305,    2, 0x08,   15 /* Private */,
      17,    0,  306,    2, 0x08,   16 /* Private */,
      18,    0,  307,    2, 0x08,   17 /* Private */,
      19,    0,  308,    2, 0x08,   18 /* Private */,
      20,    0,  309,    2, 0x08,   19 /* Private */,
      21,    0,  310,    2, 0x08,   20 /* Private */,
      22,    0,  311,    2, 0x08,   21 /* Private */,
      23,    0,  312,    2, 0x08,   22 /* Private */,
      24,    0,  313,    2, 0x08,   23 /* Private */,
      25,    0,  314,    2, 0x08,   24 /* Private */,
      26,    0,  315,    2, 0x08,   25 /* Private */,
      27,    0,  316,    2, 0x08,   26 /* Private */,
      28,    0,  317,    2, 0x08,   27 /* Private */,
      29,    0,  318,    2, 0x08,   28 /* Private */,
      30,    0,  319,    2, 0x08,   29 /* Private */,
      31,    0,  320,    2, 0x08,   30 /* Private */,
      32,    0,  321,    2, 0x08,   31 /* Private */,
      33,    0,  322,    2, 0x08,   32 /* Private */,
      34,    0,  323,    2, 0x08,   33 /* Private */,
      35,    0,  324,    2, 0x08,   34 /* Private */,
      36,    0,  325,    2, 0x08,   35 /* Private */,
      37,    0,  326,    2, 0x08,   36 /* Private */,
      38,    0,  327,    2, 0x08,   37 /* Private */,
      39,    0,  328,    2, 0x08,   38 /* Private */,
      40,    0,  329,    2, 0x08,   39 /* Private */,
      41,    0,  330,    2, 0x08,   40 /* Private */,
      42,    0,  331,    2, 0x08,   41 /* Private */,
      43,    0,  332,    2, 0x08,   42 /* Private */,
      44,    0,  333,    2, 0x08,   43 /* Private */,
      45,    0,  334,    2, 0x08,   44 /* Private */,
      46,    0,  335,    2, 0x08,   45 /* Private */,
      47,    0,  336,    2, 0x08,   46 /* Private */,
      48,    0,  337,    2, 0x08,   47 /* Private */,

 // signals: parameters
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
    QMetaType::Void, QMetaType::QString,   12,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject cloth::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSclothENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSclothENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSclothENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<cloth, std::true_type>,
        // method 'showMain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showRoutePlanning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showRealTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showOperationTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showHistoryTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showHotPlace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'blackfont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'whitefont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveUsername'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'receiveRoutePlanning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveHistoryRoute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveOperationTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveRealTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveHotPlace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveBlackFont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveWhiteFont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_routePlanning_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_realTime_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_historyRoute_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_operationTime_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_hotPlace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_8_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_7_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_12_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_11_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_10_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_skin1_9_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_9_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_7_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_8_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_12_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_10_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_head_11_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void cloth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cloth *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showMain(); break;
        case 1: _t->showRoutePlanning(); break;
        case 2: _t->showRealTime(); break;
        case 3: _t->showOperationTime(); break;
        case 4: _t->showHistoryTime(); break;
        case 5: _t->showHotPlace(); break;
        case 6: _t->blackfont(); break;
        case 7: _t->whitefont(); break;
        case 8: _t->on_exit_button_clicked(); break;
        case 9: _t->receiveUsername((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->receiveRoutePlanning(); break;
        case 11: _t->receiveHistoryRoute(); break;
        case 12: _t->receiveOperationTime(); break;
        case 13: _t->receiveRealTime(); break;
        case 14: _t->receiveHotPlace(); break;
        case 15: _t->receiveBlackFont(); break;
        case 16: _t->receiveWhiteFont(); break;
        case 17: _t->on_routePlanning_clicked(); break;
        case 18: _t->on_realTime_clicked(); break;
        case 19: _t->on_historyRoute_clicked(); break;
        case 20: _t->on_operationTime_clicked(); break;
        case 21: _t->on_hotPlace_clicked(); break;
        case 22: _t->on_skin1_clicked(); break;
        case 23: _t->on_skin1_2_clicked(); break;
        case 24: _t->on_skin1_3_clicked(); break;
        case 25: _t->on_skin1_4_clicked(); break;
        case 26: _t->on_skin1_8_clicked(); break;
        case 27: _t->on_skin1_7_clicked(); break;
        case 28: _t->on_skin1_6_clicked(); break;
        case 29: _t->on_skin1_5_clicked(); break;
        case 30: _t->on_skin1_12_clicked(); break;
        case 31: _t->on_skin1_11_clicked(); break;
        case 32: _t->on_skin1_10_clicked(); break;
        case 33: _t->on_skin1_9_clicked(); break;
        case 34: _t->on_head_clicked(); break;
        case 35: _t->on_head_2_clicked(); break;
        case 36: _t->on_head_3_clicked(); break;
        case 37: _t->on_head_4_clicked(); break;
        case 38: _t->on_head_5_clicked(); break;
        case 39: _t->on_head_6_clicked(); break;
        case 40: _t->on_head_9_clicked(); break;
        case 41: _t->on_head_7_clicked(); break;
        case 42: _t->on_head_8_clicked(); break;
        case 43: _t->on_head_12_clicked(); break;
        case 44: _t->on_head_10_clicked(); break;
        case 45: _t->on_head_11_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (cloth::*)();
            if (_t _q_method = &cloth::showMain; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (cloth::*)();
            if (_t _q_method = &cloth::showRoutePlanning; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (cloth::*)();
            if (_t _q_method = &cloth::showRealTime; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (cloth::*)();
            if (_t _q_method = &cloth::showOperationTime; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (cloth::*)();
            if (_t _q_method = &cloth::showHistoryTime; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (cloth::*)();
            if (_t _q_method = &cloth::showHotPlace; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (cloth::*)();
            if (_t _q_method = &cloth::blackfont; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (cloth::*)();
            if (_t _q_method = &cloth::whitefont; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *cloth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cloth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSclothENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cloth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 46;
    }
    return _id;
}

// SIGNAL 0
void cloth::showMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void cloth::showRoutePlanning()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void cloth::showRealTime()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void cloth::showOperationTime()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void cloth::showHistoryTime()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void cloth::showHotPlace()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void cloth::blackfont()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void cloth::whitefont()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
