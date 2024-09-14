/****************************************************************************
** Meta object code from reading C++ file 'batteryinfomodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../batteryinfomodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batteryinfomodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSBatteryInfoModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSBatteryInfoModelENDCLASS = QtMocHelpers::stringData(
    "BatteryInfoModel",
    "dataUpdated",
    "",
    "setChargeLevel",
    "level",
    "setVoltage",
    "voltage",
    "setMaxCapacity",
    "capacity",
    "setBatteryType",
    "BatteryType",
    "type",
    "setPowerMode",
    "PowerMode",
    "powerMode",
    "setDischargeTime",
    "time",
    "setCurrentCapacity",
    "setBatteryHealth",
    "BatteryHealth",
    "health",
    "setPowerSupplyType",
    "PowerSupplyType",
    "setRemainingBatteryLifetime",
    "lifetime"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBatteryInfoModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   81,    2, 0x0a,    2 /* Public */,
       5,    1,   84,    2, 0x0a,    4 /* Public */,
       7,    1,   87,    2, 0x0a,    6 /* Public */,
       9,    1,   90,    2, 0x0a,    8 /* Public */,
      12,    1,   93,    2, 0x0a,   10 /* Public */,
      15,    1,   96,    2, 0x0a,   12 /* Public */,
      17,    1,   99,    2, 0x0a,   14 /* Public */,
      18,    1,  102,    2, 0x0a,   16 /* Public */,
      21,    1,  105,    2, 0x0a,   18 /* Public */,
      23,    1,  108,    2, 0x0a,   20 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QTime,   16,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   11,
    QMetaType::Void, QMetaType::QTime,   24,

       0        // eod
};

Q_CONSTINIT const QMetaObject BatteryInfoModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSBatteryInfoModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBatteryInfoModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBatteryInfoModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BatteryInfoModel, std::true_type>,
        // method 'dataUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setChargeLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setVoltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setMaxCapacity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setBatteryType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BatteryType, std::false_type>,
        // method 'setPowerMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PowerMode, std::false_type>,
        // method 'setDischargeTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'setCurrentCapacity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setBatteryHealth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BatteryHealth, std::false_type>,
        // method 'setPowerSupplyType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PowerSupplyType, std::false_type>,
        // method 'setRemainingBatteryLifetime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>
    >,
    nullptr
} };

void BatteryInfoModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatteryInfoModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataUpdated(); break;
        case 1: _t->setChargeLevel((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->setVoltage((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->setMaxCapacity((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->setBatteryType((*reinterpret_cast< std::add_pointer_t<BatteryType>>(_a[1]))); break;
        case 5: _t->setPowerMode((*reinterpret_cast< std::add_pointer_t<PowerMode>>(_a[1]))); break;
        case 6: _t->setDischargeTime((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 7: _t->setCurrentCapacity((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->setBatteryHealth((*reinterpret_cast< std::add_pointer_t<BatteryHealth>>(_a[1]))); break;
        case 9: _t->setPowerSupplyType((*reinterpret_cast< std::add_pointer_t<PowerSupplyType>>(_a[1]))); break;
        case 10: _t->setRemainingBatteryLifetime((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BatteryInfoModel::*)();
            if (_t _q_method = &BatteryInfoModel::dataUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *BatteryInfoModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatteryInfoModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBatteryInfoModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BatteryInfoModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void BatteryInfoModel::dataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
