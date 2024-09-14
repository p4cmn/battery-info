#include <QApplication>
#include "mainwindow.h"
#include "BatteryInfoModel.h"
#include "BatteryInfoService.h"
#include "BatteryInfoController.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/icons/battery.ico"));

    BatteryInfoModel model;
    BatteryInfoService service;
    BatteryInfoController controller(&model, &service);

    MainWindow w(&model);

    // Скрываем окно при запуске
    w.setVisible(false);

    return a.exec();
}
