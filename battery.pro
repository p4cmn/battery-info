QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

LIBS += -lPowrprof -lsetupapi

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    batteryinfocontroller.cpp \
    batteryinfomodel.cpp \
    batteryinfoservice.cpp \
    main.cpp \
    mainwindow.cpp \
    systemcontrolcontroller.cpp \
    systemcontrolservice.cpp

HEADERS += \
  batteryhealth.h \
  batteryinfocontroller.h \
  batteryinfomodel.h \
  batteryinfoservice.h \
  batterytype.h \
  mainwindow.h \
  powermode.h \
  powersupplytype.h \
  systemcontrolcontroller.h \
  systemcontrolservice.h

FORMS += \
  mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
  README.md \
  applicationIcon.rc \
  battery.ico

RESOURCES += \
  resources.qrc

RC_FILE += applicationIcon.rc

