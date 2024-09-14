#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>
#include "batteryinfomodel.h"
#include "systemcontrolservice.h"
#include "systemcontrolcontroller.h"

namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow {
    Q_OBJECT

private:
    Ui::MainWindow* ui;
    BatteryInfoModel* model;
    SystemControlService* systemControlService;
    SystemControlController* systemControlController;
    QSystemTrayIcon* trayIcon;
    QMenu* trayMenu;

public:
    explicit MainWindow(BatteryInfoModel* sourceModel, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateView();
    void handleSleepButtonClicked();
    void handleHibernateButtonClicked();
    void quit();
    void toggleVisibility();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    void setupSystemTray();
    void updateChargeLevelProgressBar(int chargeLevel);
    void updatePowerMode(PowerMode powerMode);
    void updateRemainingBatteryLifetime(const QTime& lifetime);
    void updatePowerSupplyType(PowerSupplyType supplyType);
    void updateDischargeTime(const QTime& dischargeTime);
    void updateBatteryType(BatteryType type);
    void updateMaxCapacity(double capacity);
    void updateCurrentCapacity(double capacity);
    void updateVoltage(double voltage);
    void updateBatteryHealth(BatteryHealth health);
};

#endif // MAINWINDOW_H


