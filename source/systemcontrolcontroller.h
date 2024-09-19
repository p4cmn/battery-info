#ifndef SYSTEMCONTROLCONTROLLER_H
#define SYSTEMCONTROLCONTROLLER_H

#include <QObject>
#include "mainwindow.h"
#include "systemcontrolservice.h"

class SystemControlController : public QObject {
    Q_OBJECT

private:
    SystemControlService *service;
    MainWindow *view;

public:
    explicit SystemControlController(SystemControlService *service, MainWindow* view, QObject *parent = nullptr);

public slots:
    void onSleepButtonClicked();
    void onHibernateButtonClicked();
};

#endif // SYSTEMCONTROLCONTROLLER_H
