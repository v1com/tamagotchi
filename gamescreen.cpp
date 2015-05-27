#include "gamescreen.h"
#include "ui_gamescreen.h"
#include "game/racing/racing.h"
#include "menuforgames.h"
#include <QPushButton>
#include <QFont>
#include <QPixmap>
#include <QPalette>
#include <QDesktopWidget>

GameScreen::GameScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameScreen)
{
    int DesctopWidth = QApplication::desktop()->width();
    int DesctopHeight = QApplication::desktop()->height();
    ui->setupUi(this);
    setLayout(ui->verticalLayout_6);
    resize(DesctopWidth,DesctopHeight);
    QFont font;
    font.setPointSize(17);
    QPushButton *btn = new QPushButton("Play", this);
    btn->setFont(font);
    ui->verticalLayout->addWidget(btn);
    ui->healthLvl->setLevel(ui->widget1->getPet()->getHealth());
    ui->energyLvl->setLevel(ui->widget1->getPet()->getEnergy());
    ui->happinessLvl->setLevel(ui->widget1->getPet()->getHealth());
    ui->satietyLvl->setLevel(ui->widget1->getPet()->getSatiety());
    ui->widget1->setFixedWidth(DesctopWidth-ui->toSleep->width());
    ui->toWakeUp->hide();


    connect(ui->toSleep, SIGNAL(clicked()),btn, SLOT(hide()));
    connect(ui->toWakeUp, SIGNAL(clicked()), btn, SLOT(show()));
    connect(this, SIGNAL(sendPlayer(QString)), ui->widget1->getPet(), SLOT(setPlayer(QString)));
    connect(ui->widget1->getPet(), SIGNAL(ageChange(qlonglong)), this, SLOT(setAge(qlonglong)));
    connect(ui->widget1->getPet(), SIGNAL(death()), this, SLOT(gameOver()));
    connect(ui->toMainBtn, SIGNAL(clicked()), this, SLOT(mainWindow()));

    connect(ui->widget1->getPet(), SIGNAL(need(QString)), this, SLOT(petNeeds(QString)));
    connect(ui->widget1, SIGNAL(sendMes(QString)), this, SLOT(petNeeds(QString)));

    MenuForGames * miniGameMenu = new MenuForGames(NULL);
    connect(btn,SIGNAL(clicked()),miniGameMenu,SLOT(show()));
    connect(miniGameMenu,SIGNAL(addHappy(int)),ui->widget1,SLOT(toPlay(int)));

    connect(ui->widget1->getPet(), SIGNAL(sleepSgn(int)), ui->toCure, SLOT(hide()));
    connect(ui->widget1->getPet(), SIGNAL(sleepSgn(int)), ui->toFeed, SLOT(hide()));
    connect(ui->widget1->getPet(), SIGNAL(sleepSgn(int)), ui->toWash, SLOT(hide()));
    connect(ui->widget1->getPet(), SIGNAL(sleepSgn(int)), btn, SLOT(hide()));
    connect(ui->widget1->getPet(), SIGNAL(sleepSgn(int)), ui->toSleep, SLOT(hide()));
    connect(ui->widget1->getPet(), SIGNAL(sleepSgn(int)), ui->toWakeUp, SLOT(show()));

    connect(ui->widget1->getPet(), SIGNAL(wakeupSgn(int)), ui->toCure, SLOT(show()));
    connect(ui->widget1->getPet(), SIGNAL(wakeupSgn(int)), ui->toFeed, SLOT(show()));
    connect(ui->widget1->getPet(), SIGNAL(wakeupSgn(int)), ui->toWash, SLOT(show()));
    connect(ui->widget1->getPet(), SIGNAL(wakeupSgn(int)), btn, SLOT(show()));
    connect(ui->widget1->getPet(), SIGNAL(wakeupSgn(int)), ui->toWakeUp, SLOT(hide()));
    connect(ui->widget1->getPet(), SIGNAL(wakeupSgn(int)), ui->toSleep, SLOT(show()));

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

void GameScreen::receivePlayer(QString name)
{
    emit sendPlayer(name);
    ui->birthLbl->setText(ui->widget1->getPet()->getLife().toString("dd.MM.yyyy hh:mm"));
    ui->birthLbl->update();
}

void GameScreen::setAge(qlonglong s)
{
    ui->ageLbl->setText(QString::number(s/1440) + " days " + QString::number(s/60) +
                        " hours " + QString::number(s - s/60 * 60) + " minutes");
    ui->ageLbl->update();
}

void GameScreen::newGame(QString name)
{
    ui->widget1->createPet();
    ui->widget1->getPet()->newGame(name);
}

void GameScreen::gameOver()
{
    emit toGameOver();
}

void GameScreen::mainWindow()
{
    emit toMainWindow();
}

void GameScreen::petNeeds(QString words)
{
    emit petSaid(words);
}
