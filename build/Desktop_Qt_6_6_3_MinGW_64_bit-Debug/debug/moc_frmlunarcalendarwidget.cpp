/****************************************************************************
** Meta object code from reading C++ file 'frmlunarcalendarwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../frmlunarcalendarwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmlunarcalendarwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSfrmLunarCalendarWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSfrmLunarCalendarWidgetENDCLASS = QtMocHelpers::stringData(
    "frmLunarCalendarWidget",
    "initForm",
    "",
    "on_cboxCalendarStyle_currentIndexChanged",
    "index",
    "on_cboxSelectType_currentIndexChanged",
    "on_cboxWeekNameFormat_currentIndexChanged",
    "on_ckShowLunar_stateChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSfrmLunarCalendarWidgetENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[23];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[41];
    char stringdata4[6];
    char stringdata5[38];
    char stringdata6[42];
    char stringdata7[28];
    char stringdata8[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSfrmLunarCalendarWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSfrmLunarCalendarWidgetENDCLASS_t qt_meta_stringdata_CLASSfrmLunarCalendarWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "frmLunarCalendarWidget"
        QT_MOC_LITERAL(23, 8),  // "initForm"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 40),  // "on_cboxCalendarStyle_currentI..."
        QT_MOC_LITERAL(74, 5),  // "index"
        QT_MOC_LITERAL(80, 37),  // "on_cboxSelectType_currentInde..."
        QT_MOC_LITERAL(118, 41),  // "on_cboxWeekNameFormat_current..."
        QT_MOC_LITERAL(160, 27),  // "on_ckShowLunar_stateChanged"
        QT_MOC_LITERAL(188, 4)   // "arg1"
    },
    "frmLunarCalendarWidget",
    "initForm",
    "",
    "on_cboxCalendarStyle_currentIndexChanged",
    "index",
    "on_cboxSelectType_currentIndexChanged",
    "on_cboxWeekNameFormat_currentIndexChanged",
    "on_ckShowLunar_stateChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSfrmLunarCalendarWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    1,   45,    2, 0x08,    2 /* Private */,
       5,    1,   48,    2, 0x08,    4 /* Private */,
       6,    1,   51,    2, 0x08,    6 /* Private */,
       7,    1,   54,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject frmLunarCalendarWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSfrmLunarCalendarWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSfrmLunarCalendarWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSfrmLunarCalendarWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<frmLunarCalendarWidget, std::true_type>,
        // method 'initForm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cboxCalendarStyle_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_cboxSelectType_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_cboxWeekNameFormat_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ckShowLunar_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void frmLunarCalendarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmLunarCalendarWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initForm(); break;
        case 1: _t->on_cboxCalendarStyle_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_cboxSelectType_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_cboxWeekNameFormat_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_ckShowLunar_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *frmLunarCalendarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmLunarCalendarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSfrmLunarCalendarWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int frmLunarCalendarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
