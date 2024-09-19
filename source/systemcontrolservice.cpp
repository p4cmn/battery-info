#include "systemcontrolservice.h"
#include <windows.h>
#include <powrprof.h>

#pragma comment(lib, "PowrProf.lib")

SystemControlService::SystemControlService(QObject *parent)
    : QObject(parent) {}

void SystemControlService::enterSleepMode() {
    SetSuspendState(FALSE, FALSE, FALSE);
}

void SystemControlService::enterHibernateMode() {
    SetSuspendState(TRUE, FALSE, FALSE);
}


