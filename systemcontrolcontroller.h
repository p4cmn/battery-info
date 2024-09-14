#ifndef SYSTEMCONTROLCONTROLLER_H
#define SYSTEMCONTROLCONTROLLER_H

#include <QObject>
#include "systemcontrolservice.h"

class SystemControlController : public QObject {
    Q_OBJECT

private:
    SystemControlService *service;

public:
    explicit SystemControlController(SystemControlService *service, QObject *parent = nullptr);

public slots:
    void onSleepButtonClicked();
    void onHibernateButtonClicked();
};

#endif // SYSTEMCONTROLCONTROLLER_H
