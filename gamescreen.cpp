#include "gamescreen.h"
#include "ui_gamescreen.h"
#include "game/racing/racing.h"
#include "menuforgames.h"
#include <QPushButton>
#include <QFont>
#include <QPixmap>
#include <QPalette>

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

    connect(ui->toSleep, SIGNAL(clicked()),btn, SLOT(hide()));
    connect(ui->toWakeUp, SIGNAL(clicked()), btn, SLOT(show()));
    connect(this, SIGNAL(sendPlayer(QString)), ui->widget->getPet(), SLOT(setPlayer(QString)));
    connect(ui->widget->getPet(), SIGNAL(ageChange(qlonglong)), this, SLOT(setAge(qlonglong)));
    connect(ui->widget->getPet(), SIGNAL(death()), this, SLOT(gameOver()));
    connect(ui->toMainBtn, SIGNAL(clicked()), this, SLOT(mainWindow()));

    connect(ui->widget->getPet(), SIGNAL(need(QString)), this, SLOT(petNeeds(QString)));
    connect(ui->widget, SIGNAL(sendMes(QString)), this, SLOT(petNeeds(QString)));

    MenuForGames * miniGameMenu = new MenuForGames(NULL);
    connect(btn,SIGNAL(clicked()),miniGameMenu,SLOT(show()));
    connect(miniGameMenu,SIGNAL(addHappy(int)),ui->widget,SLOT(toPlay(int)));

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
    ui->birthLbl->setText(ui->widget->getPet()->getLife().toString("dd.MM.yyyy hh:mm"));
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
    ui->widget->createPet();
    ui->widget->getPet()->newGame(name);
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
