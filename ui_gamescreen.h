/********************************************************************************
** Form generated from reading UI file 'gamescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESCREEN_H
#define UI_GAMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <gamewidget.h>
#include <pointsbar.h>

QT_BEGIN_NAMESPACE

class Ui_GameScreen
{
public:
    GameWidget *widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    PointsBar *healthLvl;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    PointsBar *satietyLvl;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    PointsBar *happinessLvl;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    PointsBar *energyLvl;
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *toFeed;
    QPushButton *toSleep;
    QPushButton *toWakeUp;
    QPushButton *toWash;
    QPushButton *toCure;
    QLabel *label_5;
    QLabel *ageLbl;
    QPushButton *toMainBtn;
    QLabel *label_6;
    QLabel *birthLbl;

    void setupUi(QWidget *GameScreen)
    {
        if (GameScreen->objectName().isEmpty())
            GameScreen->setObjectName(QStringLiteral("GameScreen"));
        GameScreen->resize(601, 414);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameScreen->sizePolicy().hasHeightForWidth());
        GameScreen->setSizePolicy(sizePolicy);
        GameScreen->setAutoFillBackground(false);
        widget = new GameWidget(GameScreen);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(140, 90, 421, 231));
        widget->setMinimumSize(QSize(421, 231));
        horizontalLayoutWidget = new QWidget(GameScreen);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 30, 541, 52));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        healthLvl = new PointsBar(horizontalLayoutWidget);
        healthLvl->setObjectName(QStringLiteral("healthLvl"));

        verticalLayout_2->addWidget(healthLvl);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        satietyLvl = new PointsBar(horizontalLayoutWidget);
        satietyLvl->setObjectName(QStringLiteral("satietyLvl"));

        verticalLayout_5->addWidget(satietyLvl);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        happinessLvl = new PointsBar(horizontalLayoutWidget);
        happinessLvl->setObjectName(QStringLiteral("happinessLvl"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(happinessLvl->sizePolicy().hasHeightForWidth());
        happinessLvl->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(happinessLvl);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        energyLvl = new PointsBar(horizontalLayoutWidget);
        energyLvl->setObjectName(QStringLiteral("energyLvl"));

        verticalLayout_4->addWidget(energyLvl);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayoutWidget = new QWidget(GameScreen);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 90, 111, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toFeed = new QPushButton(verticalLayoutWidget);
        toFeed->setObjectName(QStringLiteral("toFeed"));
        toFeed->setFont(font);

        verticalLayout->addWidget(toFeed);

        toSleep = new QPushButton(verticalLayoutWidget);
        toSleep->setObjectName(QStringLiteral("toSleep"));
        toSleep->setFont(font);

        verticalLayout->addWidget(toSleep);

        toWakeUp = new QPushButton(verticalLayoutWidget);
        toWakeUp->setObjectName(QStringLiteral("toWakeUp"));
        toWakeUp->setEnabled(true);
        toWakeUp->setFont(font);

        verticalLayout->addWidget(toWakeUp);

        toWash = new QPushButton(verticalLayoutWidget);
        toWash->setObjectName(QStringLiteral("toWash"));
        toWash->setFont(font);

        verticalLayout->addWidget(toWash);

        toCure = new QPushButton(verticalLayoutWidget);
        toCure->setObjectName(QStringLiteral("toCure"));
        toCure->setFont(font);

        verticalLayout->addWidget(toCure);

        label_5 = new QLabel(GameScreen);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 350, 41, 21));
        label_5->setFont(font);
        ageLbl = new QLabel(GameScreen);
        ageLbl->setObjectName(QStringLiteral("ageLbl"));
        ageLbl->setGeometry(QRect(80, 350, 321, 21));
        ageLbl->setFont(font);
        toMainBtn = new QPushButton(GameScreen);
        toMainBtn->setObjectName(QStringLiteral("toMainBtn"));
        toMainBtn->setGeometry(QRect(430, 370, 131, 31));
        toMainBtn->setFont(font);
        label_6 = new QLabel(GameScreen);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 380, 41, 21));
        label_6->setFont(font);
        birthLbl = new QLabel(GameScreen);
        birthLbl->setObjectName(QStringLiteral("birthLbl"));
        birthLbl->setGeometry(QRect(80, 380, 161, 21));
        birthLbl->setFont(font);

        retranslateUi(GameScreen);
        QObject::connect(widget, SIGNAL(chEnSgn(int)), energyLvl, SLOT(setLevel(int)));
        QObject::connect(widget, SIGNAL(chHapSgn(int)), happinessLvl, SLOT(setLevel(int)));
        QObject::connect(widget, SIGNAL(chHealthSgn(int)), healthLvl, SLOT(setLevel(int)));
        QObject::connect(widget, SIGNAL(chSatSgn(int)), satietyLvl, SLOT(setLevel(int)));
        QObject::connect(toWash, SIGNAL(clicked()), widget, SLOT(toWash()));
        QObject::connect(toWakeUp, SIGNAL(clicked()), widget, SLOT(toWakeUp()));
        QObject::connect(toSleep, SIGNAL(clicked()), widget, SLOT(toSleep()));
        QObject::connect(toFeed, SIGNAL(clicked()), widget, SLOT(toFeed()));
        QObject::connect(toCure, SIGNAL(clicked()), widget, SLOT(toCure()));

        QMetaObject::connectSlotsByName(GameScreen);
    } // setupUi

    void retranslateUi(QWidget *GameScreen)
    {
        GameScreen->setWindowTitle(QApplication::translate("GameScreen", "Form", 0));
        healthLvl->setText(QApplication::translate("GameScreen", "PushButton", 0));
        label->setText(QApplication::translate("GameScreen", "Health", 0));
        satietyLvl->setText(QApplication::translate("GameScreen", "PushButton", 0));
        label_2->setText(QApplication::translate("GameScreen", "Satiety", 0));
        happinessLvl->setText(QApplication::translate("GameScreen", "PushButton", 0));
        label_3->setText(QApplication::translate("GameScreen", "Happiness", 0));
        energyLvl->setText(QApplication::translate("GameScreen", "PushButton", 0));
        label_4->setText(QApplication::translate("GameScreen", "Energy", 0));
        toFeed->setText(QApplication::translate("GameScreen", "Feed", 0));
        toSleep->setText(QApplication::translate("GameScreen", "Sleep", 0));
        toWakeUp->setText(QApplication::translate("GameScreen", "Wake up", 0));
        toWash->setText(QApplication::translate("GameScreen", "Wash", 0));
        toCure->setText(QApplication::translate("GameScreen", "Cure", 0));
        label_5->setText(QApplication::translate("GameScreen", "Age:", 0));
        ageLbl->setText(QString());
        toMainBtn->setText(QApplication::translate("GameScreen", "To main window", 0));
        label_6->setText(QApplication::translate("GameScreen", "Birth:", 0));
        birthLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameScreen: public Ui_GameScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESCREEN_H
