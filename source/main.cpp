#include <QApplication>
#include "mainwindow.h"
#include "BatteryInfoModel.h"
#include "BatteryInfoService.h"
#include "systemcontrolservice.h"
#include "BatteryInfoController.h"
#include "systemcontrolcontroller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/icons/battery.ico"));

    BatteryInfoModel model;
    BatteryInfoService infoService;
    MainWindow view;
    BatteryInfoController infoController(&model, &infoService, &view);
    SystemControlService controlService;
    SystemControlController systemController(&controlService, &view);

    // Скрываем окно при запуске
    view.setVisible(false);

    return a.exec();
}
