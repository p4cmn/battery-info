/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QProgressBar *chargeLevelProgressBar;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *headerFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *firstLabel;
    QFrame *valueFrame;
    QVBoxLayout *verticalLayout_3;
    QLabel *powerSupplyTypeLabel;
    QHBoxLayout *horizontalLayout_4;
    QFrame *headerFrame_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *headerFrame_2;
    QFrame *valueFrame_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *powerModelLabel;
    QHBoxLayout *horizontalLayout_3;
    QFrame *headerFrame_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *secondLabel;
    QFrame *valueFrame_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *remainingBatteryLifetimeLabel;
    QHBoxLayout *horizontalLayout_5;
    QFrame *headerFrame_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *headerFrame_4;
    QFrame *valueFrame_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *timeAfterPowerOffLabel;
    QHBoxLayout *horizontalLayout_7;
    QFrame *headerFrame_7;
    QVBoxLayout *verticalLayout_11;
    QLabel *label;
    QFrame *valueFrame_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *batteryTypeLabel;
    QHBoxLayout *horizontalLayout_8;
    QFrame *headerFrame_8;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_3;
    QFrame *valueFrame_6;
    QVBoxLayout *verticalLayout_12;
    QLabel *voltageLabel;
    QHBoxLayout *horizontalLayout_9;
    QFrame *headerFrame_9;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_6;
    QFrame *valueFrame_7;
    QVBoxLayout *verticalLayout_15;
    QLabel *maxBatteryCapLabel;
    QHBoxLayout *horizontalLayout_11;
    QFrame *headerFrame_10;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_7;
    QFrame *valueFrame_8;
    QVBoxLayout *verticalLayout_17;
    QLabel *curBatteryCapLabel;
    QHBoxLayout *horizontalLayout_10;
    QFrame *headerFrame_11;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_9;
    QFrame *valueFrame_9;
    QVBoxLayout *verticalLayout_18;
    QLabel *batteryHealthLabel;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *sleepButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *hibernateButton;
    QSpacerItem *horizontalSpacer_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(726, 802);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        chargeLevelProgressBar = new QProgressBar(centralwidget);
        chargeLevelProgressBar->setObjectName("chargeLevelProgressBar");
        chargeLevelProgressBar->setMinimumSize(QSize(120, 70));
        chargeLevelProgressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 \320\261\320\260\321\202\320\260\321\200\320\265\320\270 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    background-color: #E0E0E0; /* \320\244\320\276\320\275 \320\261\320\260\321\202\320\260\321\200\320\265\320\270 */\n"
"    text-align: center;        /* \320\242\320\265\320\272\321\201\321\202 \320\277\320\276 \321\206\320\265\320\275\321\202\321\200\321\203 */\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #00C853; /* \320\227\320\265\320\273\320\265\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \320\264\320\273\321\217 \320\267\320\260\321"
                        "\200\321\217\320\264\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 \320\267\320\260\321\200\321\217\320\264\320\260 */\n"
"    margin: 2px;               /* \320\236\321\202\321\201\321\202\321\203\320\277 \320\262\320\275\321\203\321\202\321\200\320\270 \321\200\320\260\320\274\320\272\320\270 \320\261\320\260\321\202\320\260\321\200\320\265\320\270 */\n"
"}\n"
"\n"
""));
        chargeLevelProgressBar->setValue(24);

        horizontalLayout->addWidget(chargeLevelProgressBar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        headerFrame = new QFrame(centralwidget);
        headerFrame->setObjectName("headerFrame");
        headerFrame->setStyleSheet(QString::fromUtf8("#headerFrame {\n"
"    background-color: #E0E0E0; /* \320\241\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\320\274\320\270 */\n"
"}\n"
""));
        headerFrame->setFrameShape(QFrame::Shape::StyledPanel);
        headerFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(headerFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        firstLabel = new QLabel(headerFrame);
        firstLabel->setObjectName("firstLabel");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setKerning(true);
        firstLabel->setFont(font);
        firstLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        firstLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_2->addWidget(firstLabel);


        horizontalLayout_2->addWidget(headerFrame);

        valueFrame = new QFrame(centralwidget);
        valueFrame->setObjectName("valueFrame");
        valueFrame->setStyleSheet(QString::fromUtf8("#valueFrame{\n"
"    background-color: #F5F5F5; /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 1px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\264\320\273\321\217 \321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217 */\n"
"}\n"
""));
        valueFrame->setFrameShape(QFrame::Shape::StyledPanel);
        valueFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(valueFrame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        powerSupplyTypeLabel = new QLabel(valueFrame);
        powerSupplyTypeLabel->setObjectName("powerSupplyTypeLabel");
        powerSupplyTypeLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_3->addWidget(powerSupplyTypeLabel);


        horizontalLayout_2->addWidget(valueFrame);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        headerFrame_5 = new QFrame(centralwidget);
        headerFrame_5->setObjectName("headerFrame_5");
        headerFrame_5->setStyleSheet(QString::fromUtf8("#headerFrame_5 {\n"
"    background-color: #E0E0E0; /* \320\241\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\320\274\320\270 */\n"
"}\n"
""));
        headerFrame_5->setFrameShape(QFrame::Shape::StyledPanel);
        headerFrame_5->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(headerFrame_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        headerFrame_2 = new QLabel(headerFrame_5);
        headerFrame_2->setObjectName("headerFrame_2");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        headerFrame_2->setFont(font1);
        headerFrame_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_6->addWidget(headerFrame_2);


        horizontalLayout_4->addWidget(headerFrame_5);

        valueFrame_2 = new QFrame(centralwidget);
        valueFrame_2->setObjectName("valueFrame_2");
        valueFrame_2->setStyleSheet(QString::fromUtf8("#valueFrame_2{\n"
"    background-color: #F5F5F5; /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 1px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\264\320\273\321\217 \321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217 */\n"
"}\n"
""));
        valueFrame_2->setFrameShape(QFrame::Shape::StyledPanel);
        valueFrame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_7 = new QVBoxLayout(valueFrame_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        powerModelLabel = new QLabel(valueFrame_2);
        powerModelLabel->setObjectName("powerModelLabel");
        powerModelLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_7->addWidget(powerModelLabel);


        horizontalLayout_4->addWidget(valueFrame_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        headerFrame_3 = new QFrame(centralwidget);
        headerFrame_3->setObjectName("headerFrame_3");
        headerFrame_3->setStyleSheet(QString::fromUtf8("#headerFrame_3 {\n"
"    background-color: #E0E0E0; /* \320\241\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\320\274\320\270 */\n"
"}\n"
""));
        headerFrame_3->setFrameShape(QFrame::Shape::StyledPanel);
        headerFrame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(headerFrame_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        secondLabel = new QLabel(headerFrame_3);
        secondLabel->setObjectName("secondLabel");
        secondLabel->setFont(font1);
        secondLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_4->addWidget(secondLabel);


        horizontalLayout_3->addWidget(headerFrame_3);

        valueFrame_3 = new QFrame(centralwidget);
        valueFrame_3->setObjectName("valueFrame_3");
        valueFrame_3->setStyleSheet(QString::fromUtf8("#valueFrame_3 {\n"
"    background-color: #F5F5F5; /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 1px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\264\320\273\321\217 \321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217 */\n"
"}\n"
""));
        valueFrame_3->setFrameShape(QFrame::Shape::StyledPanel);
        valueFrame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(valueFrame_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        remainingBatteryLifetimeLabel = new QLabel(valueFrame_3);
        remainingBatteryLifetimeLabel->setObjectName("remainingBatteryLifetimeLabel");
        remainingBatteryLifetimeLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_5->addWidget(remainingBatteryLifetimeLabel);


        horizontalLayout_3->addWidget(valueFrame_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        headerFrame_6 = new QFrame(centralwidget);
        headerFrame_6->setObjectName("headerFrame_6");
        headerFrame_6->setStyleSheet(QString::fromUtf8("#headerFrame_6{\n"
"    background-color: #E0E0E0; /* \320\241\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\320\274\320\270 */\n"
"}\n"
""));
        headerFrame_6->setFrameShape(QFrame::Shape::StyledPanel);
        headerFrame_6->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_8 = new QVBoxLayout(headerFrame_6);
        verticalLayout_8->setObjectName("verticalLayout_8");
        headerFrame_4 = new QLabel(headerFrame_6);
        headerFrame_4->setObjectName("headerFrame_4");
        headerFrame_4->setFont(font1);
        headerFrame_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_8->addWidget(headerFrame_4);


        horizontalLayout_5->addWidget(headerFrame_6);

        valueFrame_4 = new QFrame(centralwidget);
        valueFrame_4->setObjectName("valueFrame_4");
        valueFrame_4->setStyleSheet(QString::fromUtf8("#valueFrame_4 {\n"
"    background-color: #F5F5F5; /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 1px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\264\320\273\321\217 \321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217 */\n"
"}\n"
""));
        valueFrame_4->setFrameShape(QFrame::Shape::StyledPanel);
        valueFrame_4->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_9 = new QVBoxLayout(valueFrame_4);
        verticalLayout_9->setObjectName("verticalLayout_9");
        timeAfterPowerOffLabel = new QLabel(valueFrame_4);
        timeAfterPowerOffLabel->setObjectName("timeAfterPowerOffLabel");
        timeAfterPowerOffLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_9->addWidget(timeAfterPowerOffLabel);


        horizontalLayout_5->addWidget(valueFrame_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        headerFrame_7 = new QFrame(centralwidget);
        headerFrame_7->setObjectName("headerFrame_7");
        headerFrame_7->setStyleSheet(QString::fromUtf8("#headerFrame_7{\n"
"    background-color: #E0E0E0; /* \320\241\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\320\274\320\270 */\n"
"}"));
        headerFrame_7->setFrameShape(QFrame::Shape::StyledPanel);
        headerFrame_7->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_11 = new QVBoxLayout(headerFrame_7);
        verticalLayout_11->setObjectName("verticalLayout_11");
        label = new QLabel(headerFrame_7);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_11->addWidget(label);


        horizontalLayout_7->addWidget(headerFrame_7);

        valueFrame_5 = new QFrame(centralwidget);
        valueFrame_5->setObjectName("valueFrame_5");
        valueFrame_5->setStyleSheet(QString::fromUtf8("#valueFrame_5 {\n"
"    background-color: #F5F5F5; /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 1px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\264\320\273\321\217 \321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217 */\n"
"}\n"
""));
        valueFrame_5->setFrameShape(QFrame::Shape::StyledPanel);
        valueFrame_5->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_10 = new QVBoxLayout(valueFrame_5);
        verticalLayout_10->setObjectName("verticalLayout_10");
        batteryTypeLabel = new QLabel(valueFrame_5);
        batteryTypeLabel->setObjectName("batteryTypeLabel");
        batteryTypeLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_10->addWidget(batteryTypeLabel);


        horizontalLayout_7->addWidget(valueFrame_5);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        headerFrame_8 = new QFrame(centralwidget);
        headerFrame_8->setObjectName("headerFrame_8");
        headerFrame_8->setStyleSheet(QString::fromUtf8("#headerFrame_8{\n"
"    background-color: #E0E0E0; /* \320\241\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\320\274\320\270 */\n"
"}"));
        headerFrame_8->setFrameShape(QFrame::Shape::StyledPanel);
        headerFrame_8->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_13 = new QVBoxLayout(headerFrame_8);
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_3 = new QLabel(headerFrame_8);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_13->addWidget(label_3);


        horizontalLayout_8->addWidget(headerFrame_8);

        valueFrame_6 = new QFrame(centralwidget);
        valueFrame_6->setObjectName("valueFrame_6");
        valueFrame_6->setStyleSheet(QString::fromUtf8("#valueFrame_6 {\n"
"    background-color: #F5F5F5; /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 1px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\264\320\273\321\217 \321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217 */\n"
"}\n"
""));
        valueFrame_6->setFrameShape(QFrame::Shape::StyledPanel);
        valueFrame_6->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_12 = new QVBoxLayout(valueFrame_6);
        verticalLayout_12->setObjectName("verticalLayout_12");
        voltageLabel = new QLabel(valueFrame_6);
        voltageLabel->setObjectName("voltageLabel");
        voltageLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_12->addWidget(voltageLabel);


        horizontalLayout_8->addWidget(valueFrame_6);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        headerFrame_9 = new QFrame(centralwidget);
        headerFrame_9->setObjectName("headerFrame_9");
        headerFrame_9->setStyleSheet(QString::fromUtf8("#headerFrame_9{\n"
"    background-color: #E0E0E0; /* \320\241\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\320\274\320\270 */\n"
"}"));
        headerFrame_9->setFrameShape(QFrame::Shape::StyledPanel);
        headerFrame_9->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_14 = new QVBoxLayout(headerFrame_9);
        verticalLayout_14->setObjectName("verticalLayout_14");
        label_6 = new QLabel(headerFrame_9);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_14->addWidget(label_6);


        horizontalLayout_9->addWidget(headerFrame_9);

        valueFrame_7 = new QFrame(centralwidget);
        valueFrame_7->setObjectName("valueFrame_7");
        valueFrame_7->setStyleSheet(QString::fromUtf8("#valueFrame_7 {\n"
"    background-color: #F5F5F5; /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 1px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\264\320\273\321\217 \321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217 */\n"
"}\n"
""));
        valueFrame_7->setFrameShape(QFrame::Shape::StyledPanel);
        valueFrame_7->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_15 = new QVBoxLayout(valueFrame_7);
        verticalLayout_15->setObjectName("verticalLayout_15");
        maxBatteryCapLabel = new QLabel(valueFrame_7);
        maxBatteryCapLabel->setObjectName("maxBatteryCapLabel");
        maxBatteryCapLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_15->addWidget(maxBatteryCapLabel);


        horizontalLayout_9->addWidget(valueFrame_7);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        headerFrame_10 = new QFrame(centralwidget);
        headerFrame_10->setObjectName("headerFrame_10");
        headerFrame_10->setStyleSheet(QString::fromUtf8("#headerFrame_10{\n"
"    background-color: #E0E0E0; /* \320\241\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\320\274\320\270 */\n"
"}"));
        headerFrame_10->setFrameShape(QFrame::Shape::StyledPanel);
        headerFrame_10->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_16 = new QVBoxLayout(headerFrame_10);
        verticalLayout_16->setObjectName("verticalLayout_16");
        label_7 = new QLabel(headerFrame_10);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_16->addWidget(label_7);


        horizontalLayout_11->addWidget(headerFrame_10);

        valueFrame_8 = new QFrame(centralwidget);
        valueFrame_8->setObjectName("valueFrame_8");
        valueFrame_8->setStyleSheet(QString::fromUtf8("#valueFrame_8 {\n"
"    background-color: #F5F5F5; /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 1px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\264\320\273\321\217 \321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217 */\n"
"}\n"
""));
        valueFrame_8->setFrameShape(QFrame::Shape::StyledPanel);
        valueFrame_8->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_17 = new QVBoxLayout(valueFrame_8);
        verticalLayout_17->setObjectName("verticalLayout_17");
        curBatteryCapLabel = new QLabel(valueFrame_8);
        curBatteryCapLabel->setObjectName("curBatteryCapLabel");
        curBatteryCapLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_17->addWidget(curBatteryCapLabel);


        horizontalLayout_11->addWidget(valueFrame_8);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        headerFrame_11 = new QFrame(centralwidget);
        headerFrame_11->setObjectName("headerFrame_11");
        headerFrame_11->setStyleSheet(QString::fromUtf8("#headerFrame_11{\n"
"    background-color: #E0E0E0; /* \320\241\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\320\274\320\270 */\n"
"}"));
        headerFrame_11->setFrameShape(QFrame::Shape::StyledPanel);
        headerFrame_11->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_19 = new QVBoxLayout(headerFrame_11);
        verticalLayout_19->setObjectName("verticalLayout_19");
        label_9 = new QLabel(headerFrame_11);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_19->addWidget(label_9);


        horizontalLayout_10->addWidget(headerFrame_11);

        valueFrame_9 = new QFrame(centralwidget);
        valueFrame_9->setObjectName("valueFrame_9");
        valueFrame_9->setStyleSheet(QString::fromUtf8("#valueFrame_9 {\n"
"    background-color: #F5F5F5; /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 1px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    margin: 5px 0;             /* \320\222\320\275\320\265\321\210\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \320\264\320\273\321\217 \321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217 */\n"
"}\n"
""));
        valueFrame_9->setFrameShape(QFrame::Shape::StyledPanel);
        valueFrame_9->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_18 = new QVBoxLayout(valueFrame_9);
        verticalLayout_18->setObjectName("verticalLayout_18");
        batteryHealthLabel = new QLabel(valueFrame_9);
        batteryHealthLabel->setObjectName("batteryHealthLabel");
        batteryHealthLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
""));

        verticalLayout_18->addWidget(batteryHealthLabel);


        horizontalLayout_10->addWidget(valueFrame_9);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        sleepButton = new QPushButton(centralwidget);
        sleepButton->setObjectName("sleepButton");
        sleepButton->setFont(font1);
        sleepButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00C853; /* \320\227\320\265\320\273\320\265\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260, \320\272\320\260\320\272 \321\203 \320\267\320\260\321\200\321\217\320\264\320\260 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201-\320\261\320\260\321\200\320\260 */\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260, \320\272\320\260\320\272 \321\203 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201-\320\261\320\260\321\200\320\260 */\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260, \321\207\321\202\320\276\320\261\321\213 \321\201\320\276\321\207\320\265\321\202\320\260\321\202\321\214\321\201\321\217 \321\201 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321"
                        "\201-\320\261\320\260\321\200\320\276\320\274 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213, \320\272\320\260\320\272 \321\203 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201-\320\261\320\260\321\200\320\260 */\n"
"    padding: 8px 16px;         /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #66BB6A; /* \320\221\320\276\320\273\320\265\320\265 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \320\267\320\265\320\273\320\265\320"
                        "\275\321\213\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #388E3C; /* \320\242\320\265\320\274\320\275\320\276-\320\267\320\265\320\273\320\265\320\275\321\213\320\271 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1565C0; /* \320\242\320\265\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1; /* \320\221\320\276\320\273\320\265\320\265 \321\202\320\265\320\274\320\275\321\213\320\271 \321\201\320\270\320\275\320\270\320\271 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));

        horizontalLayout_6->addWidget(sleepButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        hibernateButton = new QPushButton(centralwidget);
        hibernateButton->setObjectName("hibernateButton");
        hibernateButton->setFont(font1);
        hibernateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00C853; /* \320\227\320\265\320\273\320\265\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260, \320\272\320\260\320\272 \321\203 \320\267\320\260\321\200\321\217\320\264\320\260 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201-\320\261\320\260\321\200\320\260 */\n"
"    color: #000000;            /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260, \320\272\320\260\320\272 \321\203 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201-\320\261\320\260\321\200\320\260 */\n"
"    border: 2px solid #000000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260, \321\207\321\202\320\276\320\261\321\213 \321\201\320\276\321\207\320\265\321\202\320\260\321\202\321\214\321\201\321\217 \321\201 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321"
                        "\201-\320\261\320\260\321\200\320\276\320\274 */\n"
"    border-radius: 5px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213, \320\272\320\260\320\272 \321\203 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201-\320\261\320\260\321\200\320\260 */\n"
"    padding: 8px 16px;         /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 12pt;           /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    font-weight: bold;         /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #66BB6A; /* \320\221\320\276\320\273\320\265\320\265 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \320\267\320\265\320\273\320\265\320"
                        "\275\321\213\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #388E3C; /* \320\242\320\265\320\274\320\275\320\276-\320\267\320\265\320\273\320\265\320\275\321\213\320\271 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1565C0; /* \320\242\320\265\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1; /* \320\221\320\276\320\273\320\265\320\265 \321\202\320\265\320\274\320\275\321\213\320\271 \321\201\320\270\320\275\320\270\320\271 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));

        horizontalLayout_6->addWidget(hibernateButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Battery Information", nullptr));
        firstLabel->setText(QCoreApplication::translate("MainWindow", "Energy consumption type:", nullptr));
        powerSupplyTypeLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        headerFrame_2->setText(QCoreApplication::translate("MainWindow", "Power saving mode:", nullptr));
        powerModelLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        secondLabel->setText(QCoreApplication::translate("MainWindow", "Time until full discharge:", nullptr));
        remainingBatteryLifetimeLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        headerFrame_4->setText(QCoreApplication::translate("MainWindow", "Time after discharging:", nullptr));
        timeAfterPowerOffLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Battery type:", nullptr));
        batteryTypeLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Voltage:", nullptr));
        voltageLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Design battery capacity:", nullptr));
        maxBatteryCapLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Current battery capacity:", nullptr));
        curBatteryCapLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Battery health:", nullptr));
        batteryHealthLabel->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        sleepButton->setText(QCoreApplication::translate("MainWindow", "sleep", nullptr));
        hibernateButton->setText(QCoreApplication::translate("MainWindow", "huibernate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
