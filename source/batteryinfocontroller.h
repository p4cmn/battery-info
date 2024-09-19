#ifndef BATTERYINFOCONTROLLER_H
#define BATTERYINFOCONTROLLER_H

#include <QTime>
#include <QObject>
#include "mainwindow.h"
#include "batteryinfomodel.h"
#include "batteryinfoservice.h"

class BatteryInfoController : public QObject
{
    Q_OBJECT

private:
    BatteryInfoModel *model;
    BatteryInfoService *service;
    MainWindow* view;

public:
    explicit BatteryInfoController(BatteryInfoModel *sourceModel, BatteryInfoService *sourceService, MainWindow* mainWindow, QObject *parent = nullptr);

private slots:
    //for view
    void updateChargeLevel(int level);
    void updatePowerMode(PowerMode powerMode);
    void updateDischargeTime(const QTime& time);
    void updateRemainingBatteryLifetime(const QTime& lifetime);
    void updatePowerSupplyType(PowerSupplyType type);
    void updateBatteryType(BatteryType type);
    void updateMaxCapacity(double capacity);
    void updateCurrentCapacity(double capacity);
    void updateVoltage(double voltage);
    void updateBatteryHealth(BatteryHealth health);
    //for model
    void handleBatteryChargeLevelChange(int level);
    void handlePowerModeChange(PowerMode powerMode);
    void handleDischargeTimeChange(const QTime& time);
    void handleRemainingBatteryLifetimeChange(const QTime& lifetime);
    void handlePowerSupplyTypeChange(PowerSupplyType type);
    void handleBatteryTypeChange(BatteryType type);
    void handleBatteryMaxCapacityChange(double capacity);
    void handleBatteryCurrentCapacityChange(double capacity);
    void handleBatteryVoltageChange(double voltage);
    void handleBatteryHealthChange(BatteryHealth health);
};

#endif // BATTERYINFOCONTROLLER_H
