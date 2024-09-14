#include "batteryinfomodel.h"

BatteryInfoModel::BatteryInfoModel(QObject *parent)
    : QObject(parent),
    voltage(0.0),
    chargeLevel(0),
    maxCapacity(0.0),
    powerMode(PowerMode::Undefined),
    dischargeTime({0, 0, 0}),
    currentCapacity(0.0),
    batteryType(BatteryType::Undefined),
    remainingBatteryLifetime({0, 0, 0}),
    batteryHealth(BatteryHealth::Undefined),
    powerSupplyType(PowerSupplyType::Undefined)
{}

double BatteryInfoModel::getVoltage() const {
    return voltage;
}

int BatteryInfoModel::getChargeLevel() const {
    return chargeLevel;
}

double BatteryInfoModel::getMaxCapacity() const {
    return maxCapacity;
}

PowerMode BatteryInfoModel::getPowerMode() const {
    return powerMode;
}

QTime BatteryInfoModel::getDischargeTime() const {
    return dischargeTime;
}

double BatteryInfoModel::getCurrentCapacity() const {
    return currentCapacity;
}

BatteryType BatteryInfoModel::getBatteryType() const {
    return batteryType;
}

BatteryHealth BatteryInfoModel::getBatteryHealth() const {
    return batteryHealth;
}

QTime BatteryInfoModel::getRemainingBatteryLifetime() const {
    return remainingBatteryLifetime;
}

PowerSupplyType BatteryInfoModel::getPowerSupplyType() const {
    return powerSupplyType;
}

void BatteryInfoModel::setChargeLevel(int level) {
    if(chargeLevel != level) {
        chargeLevel = level;
        emit dataUpdated();
    }
}

void BatteryInfoModel::setVoltage(double voltage) {
    if (this->voltage != voltage) {
        this->voltage = voltage;
        emit dataUpdated();
    }
}

void BatteryInfoModel::setMaxCapacity(double capacity) {
    if (maxCapacity != capacity) {
        maxCapacity = capacity;
        emit dataUpdated();
    }
}

void BatteryInfoModel::setBatteryType(BatteryType type) {
    if (batteryType != type) {
        batteryType = type;
        emit dataUpdated();
    }
}

void BatteryInfoModel::setPowerMode(PowerMode mode) {
    if(powerMode != mode) {
        powerMode = mode;
        emit dataUpdated();
    }
}

void BatteryInfoModel::setDischargeTime(const QTime& time) {
    if(dischargeTime != time) {
        dischargeTime = time;
        emit dataUpdated();
    }
}

void BatteryInfoModel::setCurrentCapacity(double capacity) {
    if (currentCapacity != capacity) {
        currentCapacity = capacity;
        emit dataUpdated();
    }
}

void BatteryInfoModel::setBatteryHealth(BatteryHealth health) {
    if (batteryHealth != health) {
        batteryHealth = health;
        emit dataUpdated();
    }
}

void BatteryInfoModel::setRemainingBatteryLifetime(const QTime& lifetime) {
    if(remainingBatteryLifetime != lifetime) {
        remainingBatteryLifetime = lifetime;
        emit dataUpdated();
    }
}

void BatteryInfoModel::setPowerSupplyType(PowerSupplyType type) {
    if (powerSupplyType != type) {
        powerSupplyType = type;
        emit dataUpdated();
    }
}

