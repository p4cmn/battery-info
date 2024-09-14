#include "batteryinfocontroller.h"


BatteryInfoController::BatteryInfoController(BatteryInfoModel *sourceModel, BatteryInfoService *sourceService, QObject *parent)
  : QObject(parent), model(sourceModel), service(sourceService){
    connect(service, &BatteryInfoService::batteryChargeLevelChanged, this, &BatteryInfoController::handleBatteryChargeLevelChange);
    connect(service, &BatteryInfoService::powerModeChanged, this, &BatteryInfoController::handlePowerModeChange);
    connect(service, &BatteryInfoService::batteryDischargeTimeChanged, this, &BatteryInfoController::handleDischargeTimeChange);
    connect(service, &BatteryInfoService::remainingBatteryLifetimeChanged, this, &BatteryInfoController::handleRemainingBatteryLifetimeChange);
    connect(service, &BatteryInfoService::powerSupplyTypeChanged, this, &BatteryInfoController::handlePowerSupplyTypeChange);
    connect(service, &BatteryInfoService::batteryTypeChanged, this, &BatteryInfoController::handleBatteryTypeChange);
    connect(service, &BatteryInfoService::batteryMaxCapacityChanged, this, &BatteryInfoController::handleBatteryMaxCapacityChange);
    connect(service, &BatteryInfoService::batteryCurrentCapacityChanged, this, &BatteryInfoController::handleBatteryCurrentCapacityChange);
    connect(service, &BatteryInfoService::batteryVoltageChanged, this, &BatteryInfoController::handleBatteryVoltageChange);
    connect(service, &BatteryInfoService::batteryHealthChanged, this, &BatteryInfoController::handleBatteryHealthChange);
}

void BatteryInfoController::handleBatteryChargeLevelChange(int level) {
    model->setChargeLevel(level);
}

void BatteryInfoController::handlePowerModeChange(PowerMode powerSavingMode) {
    model->setPowerMode(powerSavingMode);
}

void BatteryInfoController::handleDischargeTimeChange(const QTime &time) {
    model->setDischargeTime(time);
}

void BatteryInfoController::handleRemainingBatteryLifetimeChange(const QTime& lifetime) {
    model->setRemainingBatteryLifetime(lifetime);
}

void BatteryInfoController::handlePowerSupplyTypeChange(PowerSupplyType type) {
    model->setPowerSupplyType(type);
}

void BatteryInfoController::handleBatteryTypeChange(BatteryType type) {
    model->setBatteryType(type);
}

void BatteryInfoController::handleBatteryMaxCapacityChange(double capacity) {
    model->setMaxCapacity(capacity);
}

void BatteryInfoController::handleBatteryCurrentCapacityChange(double capacity) {
    model->setCurrentCapacity(capacity);
}

void BatteryInfoController::handleBatteryVoltageChange(double voltage) {
    model->setVoltage(voltage);
}

void BatteryInfoController::handleBatteryHealthChange(BatteryHealth health) {
    model->setBatteryHealth(health);
}
