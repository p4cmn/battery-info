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
    emit chargeLevelChanged(level);
  }
}

void BatteryInfoModel::setVoltage(double voltage) {
  if (this->voltage != voltage) {
    this->voltage = voltage;
    emit voltageChanged(voltage);
  }
}

void BatteryInfoModel::setMaxCapacity(double capacity) {
  if (maxCapacity != capacity) {
    maxCapacity = capacity;
    emit maxCapacityChanged(capacity);
  }
}

void BatteryInfoModel::setBatteryType(BatteryType type) {
  if (batteryType != type) {
    batteryType = type;
    emit batteryTypeChanged(type);
  }
}

void BatteryInfoModel::setPowerMode(PowerMode mode) {
  if(powerMode != mode) {
    powerMode = mode;
    emit powerModeChanged(mode);
  }
}

void BatteryInfoModel::setDischargeTime(const QTime& time) {
  if(dischargeTime != time) {
    dischargeTime = time;
    emit dischargeTimeChanged(time);
  }
}

void BatteryInfoModel::setCurrentCapacity(double capacity) {
  if (currentCapacity != capacity) {
    currentCapacity = capacity;
    emit currentCapacityChanged(capacity);
  }
}

void BatteryInfoModel::setBatteryHealth(BatteryHealth health) {
  if (batteryHealth != health) {
    batteryHealth = health;
    emit batteryHealthChanged(health);
  }
}

void BatteryInfoModel::setRemainingBatteryLifetime(const QTime& lifetime) {
  if(remainingBatteryLifetime != lifetime) {
    remainingBatteryLifetime = lifetime;
    emit remainingBatteryLifetimeChanged(lifetime);
  }
}

void BatteryInfoModel::setPowerSupplyType(PowerSupplyType type) {
  if (powerSupplyType != type) {
    powerSupplyType = type;
    emit powerSupplyTypeChanged(type);
  }
}


