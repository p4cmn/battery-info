#ifndef SYSTEMCONTROLSERVICE_H
#define SYSTEMCONTROLSERVICE_H

#include <QObject>

class SystemControlService : public QObject {
    Q_OBJECT

public:
    explicit SystemControlService(QObject *parent = nullptr);
    void enterSleepMode();
    void enterHibernateMode();
};

#endif // SYSTEMCONTROLSERVICE_H
