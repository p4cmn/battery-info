#include "batteryinfocontroller.h"


BatteryInfoController::BatteryInfoController(BatteryInfoModel *sourceModel, BatteryInfoService *sourceService, MainWindow* mainWindow, QObject *parent)
    : QObject(parent), model(sourceModel), service(sourceService), view(mainWindow){

    //for view
    connect(model, &BatteryInfoModel::chargeLevelChanged, this, &BatteryInfoController::updateChargeLevel);
    connect(model, &BatteryInfoModel::powerModeChanged, this, &BatteryInfoController::updatePowerMode);
    connect(model, &BatteryInfoModel::dischargeTimeChanged, this, &BatteryInfoController::updateDischargeTime);
    connect(model, &BatteryInfoModel::remainingBatteryLifetimeChanged, this, &BatteryInfoController::updateRemainingBatteryLifetime);
    connect(model, &BatteryInfoModel::powerSupplyTypeChanged, this, &BatteryInfoController::updatePowerSupplyType);
    connect(model, &BatteryInfoModel::batteryTypeChanged, this, &BatteryInfoController::updateBatteryType);
    connect(model, &BatteryInfoModel::maxCapacityChanged, this, &BatteryInfoController::updateMaxCapacity);
    connect(model, &BatteryInfoModel::currentCapacityChanged, this, &BatteryInfoController::updateCurrentCapacity);
    connect(model, &BatteryInfoModel::voltageChanged, this, &BatteryInfoController::updateVoltage);
    connect(model, &BatteryInfoModel::batteryHealthChanged, this, &BatteryInfoController::updateBatteryHealth);
    //for model
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

void BatteryInfoController::updateChargeLevel(int level) {
    view->updateChargeLevelProgressBar(level);
}

void BatteryInfoController::updatePowerMode(PowerMode powerMode) {
    view->updatePowerMode(powerMode);
}

void BatteryInfoController::updateDischargeTime(const QTime& time) {
    view->updateDischargeTime(time);
}

void BatteryInfoController::updateRemainingBatteryLifetime(const QTime& lifetime) {
    view->updateRemainingBatteryLifetime(lifetime);
}

void BatteryInfoController::updatePowerSupplyType(PowerSupplyType type) {
    view->updatePowerSupplyType(type);
}

void BatteryInfoController::updateBatteryType(BatteryType type) {
    view->updateBatteryType(type);
}

void BatteryInfoController::updateMaxCapacity(double capacity) {
    view->updateMaxCapacity(capacity);
}

void BatteryInfoController::updateCurrentCapacity(double capacity) {
    view->updateCurrentCapacity(capacity);
}

void BatteryInfoController::updateVoltage(double voltage) {
    view->updateVoltage(voltage);
}

void BatteryInfoController::updateBatteryHealth(BatteryHealth health) {
    view->updateBatteryHealth(health);
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
