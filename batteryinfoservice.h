#ifndef BATTERYINFOSERVICE_H
#define BATTERYINFOSERVICE_H

#define INITGUID

#include <QTime>
#include <QTimer>
#include <QObject>
#include <windows.h>
#include <setupapi.h>
#include <batclass.h>
#include <devguid.h>
#include "powermode.h"
#include "batterytype.h"
#include <QElapsedTimer>
#include "batteryhealth.h"
#include "powersupplytype.h"

class BatteryInfoService : public QObject {
    Q_OBJECT

private:
    bool wasCharging;
    QTimer timer;
    QElapsedTimer dischargeTimer;

private:
    void updateBatteryChargeLevel(const SYSTEM_POWER_STATUS &systemPowerStatus);
    void updatePowerMode(const SYSTEM_POWER_STATUS &systemPowerStatus);
    void updateRemainingBatteryLifetime(const SYSTEM_POWER_STATUS &systemPowerStatus);
    void updatePowerSupplyType(const SYSTEM_POWER_STATUS &systemPowerStatus);
    void handleChargingStatus(const SYSTEM_POWER_STATUS &systemPowerStatus);
    void updateDischargeTime();

    QTime convertBatteryLifeTimeToQTime(DWORD batteryFullLifeTime);
    PowerSupplyType convertToPowerSupplyType(BYTE acLineStatus);
    PowerMode convertToPowerMode(BYTE reserved);
    BatteryType convertToBatteryType(const QString& batteryTypeStr);
    BatteryHealth convertToBatteryHealth(DWORD batteryHealthFlag);

    HDEVINFO GetBatteryDeviceHandle();
    HANDLE GetBatteryHandle(HDEVINFO hdev, SP_DEVICE_INTERFACE_DATA& did);
    bool GetBatteryTag(HANDLE hBattery, BATTERY_QUERY_INFORMATION& bqi);
    void fetchBatteryDetails(HANDLE hBattery, BATTERY_QUERY_INFORMATION& bqi);
    void fetchBatteryStatus(HANDLE hBattery, BATTERY_QUERY_INFORMATION& bqi);

public:
    explicit BatteryInfoService(QObject *parent = nullptr);

private slots:
    void fetchBatteryInfo();

signals:
    void batteryChargeLevelChanged(int level);
    void powerModeChanged(PowerMode mode);
    void remainingBatteryLifetimeChanged(const QTime& lifetime);
    void batteryDischargeTimeChanged(const QTime &time);
    void powerSupplyTypeChanged(PowerSupplyType type);
    void batteryTypeChanged(BatteryType type);
    void batteryMaxCapacityChanged(double capacity);
    void batteryCurrentCapacityChanged(double capacity);
    void batteryVoltageChanged(double voltage);
    void batteryHealthChanged(BatteryHealth health);
};


#endif // BATTERYINFOSERVICE_H
