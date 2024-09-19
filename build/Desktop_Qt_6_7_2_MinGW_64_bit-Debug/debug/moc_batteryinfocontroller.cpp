/****************************************************************************
** Meta object code from reading C++ file 'batteryinfocontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../source/batteryinfocontroller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batteryinfocontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
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
struct qt_meta_stringdata_CLASSBatteryInfoControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSBatteryInfoControllerENDCLASS = QtMocHelpers::stringData(
    "BatteryInfoController",
    "updateChargeLevel",
    "",
    "level",
    "updatePowerMode",
    "PowerMode",
    "powerMode",
    "updateDischargeTime",
    "time",
    "updateRemainingBatteryLifetime",
    "lifetime",
    "updatePowerSupplyType",
    "PowerSupplyType",
    "type",
    "updateBatteryType",
    "BatteryType",
    "updateMaxCapacity",
    "capacity",
    "updateCurrentCapacity",
    "updateVoltage",
    "voltage",
    "updateBatteryHealth",
    "BatteryHealth",
    "health",
    "handleBatteryChargeLevelChange",
    "handlePowerModeChange",
    "handleDischargeTimeChange",
    "handleRemainingBatteryLifetimeChange",
    "handlePowerSupplyTypeChange",
    "handleBatteryTypeChange",
    "handleBatteryMaxCapacityChange",
    "handleBatteryCurrentCapacityChange",
    "handleBatteryVoltageChange",
    "handleBatteryHealthChange"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBatteryInfoControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  134,    2, 0x08,    1 /* Private */,
       4,    1,  137,    2, 0x08,    3 /* Private */,
       7,    1,  140,    2, 0x08,    5 /* Private */,
       9,    1,  143,    2, 0x08,    7 /* Private */,
      11,    1,  146,    2, 0x08,    9 /* Private */,
      14,    1,  149,    2, 0x08,   11 /* Private */,
      16,    1,  152,    2, 0x08,   13 /* Private */,
      18,    1,  155,    2, 0x08,   15 /* Private */,
      19,    1,  158,    2, 0x08,   17 /* Private */,
      21,    1,  161,    2, 0x08,   19 /* Private */,
      24,    1,  164,    2, 0x08,   21 /* Private */,
      25,    1,  167,    2, 0x08,   23 /* Private */,
      26,    1,  170,    2, 0x08,   25 /* Private */,
      27,    1,  173,    2, 0x08,   27 /* Private */,
      28,    1,  176,    2, 0x08,   29 /* Private */,
      29,    1,  179,    2, 0x08,   31 /* Private */,
      30,    1,  182,    2, 0x08,   33 /* Private */,
      31,    1,  185,    2, 0x08,   35 /* Private */,
      32,    1,  188,    2, 0x08,   37 /* Private */,
      33,    1,  191,    2, 0x08,   39 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QTime,    8,
    QMetaType::Void, QMetaType::QTime,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   13,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QTime,    8,
    QMetaType::Void, QMetaType::QTime,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   13,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

Q_CONSTINIT const QMetaObject BatteryInfoController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSBatteryInfoControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBatteryInfoControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBatteryInfoControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BatteryInfoController, std::true_type>,
        // method 'updateChargeLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updatePowerMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PowerMode, std::false_type>,
        // method 'updateDischargeTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'updateRemainingBatteryLifetime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'updatePowerSupplyType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PowerSupplyType, std::false_type>,
        // method 'updateBatteryType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BatteryType, std::false_type>,
        // method 'updateMaxCapacity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'updateCurrentCapacity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'updateVoltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'updateBatteryHealth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BatteryHealth, std::false_type>,
        // method 'handleBatteryChargeLevelChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'handlePowerModeChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PowerMode, std::false_type>,
        // method 'handleDischargeTimeChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'handleRemainingBatteryLifetimeChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'handlePowerSupplyTypeChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PowerSupplyType, std::false_type>,
        // method 'handleBatteryTypeChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BatteryType, std::false_type>,
        // method 'handleBatteryMaxCapacityChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'handleBatteryCurrentCapacityChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'handleBatteryVoltageChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'handleBatteryHealthChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BatteryHealth, std::false_type>
    >,
    nullptr
} };

void BatteryInfoController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatteryInfoController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateChargeLevel((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->updatePowerMode((*reinterpret_cast< std::add_pointer_t<PowerMode>>(_a[1]))); break;
        case 2: _t->updateDischargeTime((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 3: _t->updateRemainingBatteryLifetime((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 4: _t->updatePowerSupplyType((*reinterpret_cast< std::add_pointer_t<PowerSupplyType>>(_a[1]))); break;
        case 5: _t->updateBatteryType((*reinterpret_cast< std::add_pointer_t<BatteryType>>(_a[1]))); break;
        case 6: _t->updateMaxCapacity((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->updateCurrentCapacity((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->updateVoltage((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->updateBatteryHealth((*reinterpret_cast< std::add_pointer_t<BatteryHealth>>(_a[1]))); break;
        case 10: _t->handleBatteryChargeLevelChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->handlePowerModeChange((*reinterpret_cast< std::add_pointer_t<PowerMode>>(_a[1]))); break;
        case 12: _t->handleDischargeTimeChange((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 13: _t->handleRemainingBatteryLifetimeChange((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 14: _t->handlePowerSupplyTypeChange((*reinterpret_cast< std::add_pointer_t<PowerSupplyType>>(_a[1]))); break;
        case 15: _t->handleBatteryTypeChange((*reinterpret_cast< std::add_pointer_t<BatteryType>>(_a[1]))); break;
        case 16: _t->handleBatteryMaxCapacityChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 17: _t->handleBatteryCurrentCapacityChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 18: _t->handleBatteryVoltageChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 19: _t->handleBatteryHealthChange((*reinterpret_cast< std::add_pointer_t<BatteryHealth>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *BatteryInfoController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatteryInfoController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBatteryInfoControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BatteryInfoController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
