#include "gamescreen.h"
#include "ui_gamescreen.h"
#include "game/racing/racing.h"
#include <QPushButton>
#include <QFont>
#include <QPixmap>
#include <QPalette>

extern Racing * rc;

GameScreen::GameScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameScreen)
{
    ui->setupUi(this);
    QFont font;
    font.setPointSize(12);
    QPushButton *btn = new QPushButton("Play", this);
    btn->setFont(font);
    ui->verticalLayout->addWidget(btn);
    ui->healthLvl->setLevel(ui->widget->getPet()->getHealth());
    ui->energyLvl->setLevel(ui->widget->getPet()->getEnergy());
    ui->happinessLvl->setLevel(ui->widget->getPet()->getHealth());
    ui->satietyLvl->setLevel(ui->widget->getPet()->getSatiety());

    ui->toWakeUp->hide();

    connect(btn, SIGNAL(clicked()),this,SLOT(newRacing()));

    connect(ui->toSleep, SIGNAL(clicked()),btn, SLOT(hide()));
    connect(ui->toWakeUp, SIGNAL(clicked()), btn, SLOT(show()));
    connect(this, SIGNAL(sendPlayer(QString)), ui->widget->getPet(), SLOT(setPlayer(QString)));
    connect(ui->widget->getPet(), SIGNAL(ageChange(qlonglong)), this, SLOT(setAge(qlonglong)));
    connect(ui->widget->getPet(), SIGNAL(death()), this, SLOT(gameOver()));

 /*   QPixmap pix;
    pix.load("H:\\img.jpg");
    QPalette pal;
    pal.setBrush(this->backgroundRole(), QBrush(pix));
    this->setPalette(pal);*/
}

GameScreen::~GameScreen()
{
    delete ui;
}

void GameScreen::newRacing()
{
    rc = new Racing();
    rc->show();
    rc->setFocus();
    rc->setAttribute(Qt::WA_DeleteOnClose);
    connect(rc,SIGNAL(addHappy(int)),ui->widget,SLOT(toPlay(int)));
    connect(rc,SIGNAL(destroyed()),this,SLOT(setVisible(bool)));
}

void GameScreen::deleteRacing()
{
    delete rc;
}

void GameScreen::receivePlayer(QString name)
{
    emit sendPlayer(name);
}

void GameScreen::setAge(qlonglong age)
{
    QString s = QString::number(age);
    ui->ageLbl->setText(s + " minutes");
    ui->ageLbl->update();
}

void GameScreen::newGame(QString name)
{
    ui->widget->createPet();
    ui->widget->getPet()->newGame(name);
}

void GameScreen::gameOver()
{
    emit toGameOver();
}
