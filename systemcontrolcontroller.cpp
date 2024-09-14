#include "systemcontrolcontroller.h"

SystemControlController::SystemControlController(SystemControlService *service, QObject *parent)
    : QObject(parent), service(service) {}

void SystemControlController::onSleepButtonClicked() {
    service->enterSleepMode();
}

void SystemControlController::onHibernateButtonClicked() {
    service->enterHibernateMode();
}
