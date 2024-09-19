#include "systemcontrolcontroller.h"

SystemControlController::SystemControlController(SystemControlService *service, MainWindow *view, QObject *parent)
    : QObject(parent), service(service), view(view) {
  connect(view, &MainWindow::onSleepButtonClicked, this, &SystemControlController::onSleepButtonClicked);
  connect(view, &MainWindow::onHibernateButtonClicked, this, &SystemControlController::onHibernateButtonClicked);
}

void SystemControlController::onSleepButtonClicked() {
    service->enterSleepMode();
}

void SystemControlController::onHibernateButtonClicked() {
    service->enterHibernateMode();
}
