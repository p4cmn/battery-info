#ifndef BATTERYINFOMODEL_H
#define BATTERYINFOMODEL_H

#include <QTime>
#include <QObject>
#include "powermode.h"
#include "batterytype.h"
#include "batteryhealth.h"
#include "powersupplytype.h"

class BatteryInfoModel: public QObject {
  Q_OBJECT

private:
  double voltage;
  int chargeLevel;
  double maxCapacity;
  PowerMode powerMode;
  QTime dischargeTime;
  double currentCapacity;
  BatteryType batteryType;
  QTime remainingBatteryLifetime;
  BatteryHealth batteryHealth;
  PowerSupplyType powerSupplyType;

public:
  explicit BatteryInfoModel(QObject* parent = nullptr);
  double getVoltage() const;
  int getChargeLevel() const;
  double getMaxCapacity() const;
  PowerMode getPowerMode() const;
  QTime getDischargeTime() const;
  double getCurrentCapacity() const;
  BatteryType getBatteryType() const;
  BatteryHealth getBatteryHealth() const;
  QTime getRemainingBatteryLifetime() const;
  PowerSupplyType getPowerSupplyType() const;

signals:

  void voltageChanged(double voltage);
  void chargeLevelChanged(int chargeLevel);
  void maxCapacityChanged(double capacity);
  void powerModeChanged(PowerMode mode);
  void dischargeTimeChanged(const QTime& time);
  void currentCapacityChanged(double capacity);
  void batteryTypeChanged(BatteryType type);
  void batteryHealthChanged(BatteryHealth health);
  void remainingBatteryLifetimeChanged(const QTime& lifetime);
  void powerSupplyTypeChanged(PowerSupplyType type);

public:
  void setChargeLevel(int level);
  void setVoltage(double voltage);
  void setMaxCapacity(double capacity);
  void setBatteryType(BatteryType type);
  void setPowerMode(PowerMode powerMode);
  void setDischargeTime(const QTime& time);
  void setCurrentCapacity(double capacity);
  void setBatteryHealth(BatteryHealth health);
  void setPowerSupplyType(PowerSupplyType type);
  void setRemainingBatteryLifetime(const QTime& lifetime);
};

#endif // BATTERYINFOMODEL_H

