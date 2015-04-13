#include "screencontroller.h"
#include <QDebug>
#include <QGridLayout>

ScreenController::ScreenController(QWidget *parent): QWidget(parent){

    au = new Authorization(this);
    go = new GameOver(this);
    layout = new QGridLayout(this);

 //   layout->addWidget(mw, 0, 0, 1, 1);
    layout->addWidget(au, 0, 0, 1, 1);
    layout->addWidget(go, 0, 0, 1, 1);

    connect(au, SIGNAL(toGame(QString)), this, SLOT(onGame(QString)));
    connect(go, SIGNAL(toNewGame()), this, SLOT(onNewGame()));
    connect(go, SIGNAL(toAuth()),this, SLOT(onAuth()));
    connect(au, SIGNAL(toGame(QString)), this, SLOT(setPlayer(QString)));

    onAuth();
}

void ScreenController::onAuth()
{
    au->show();
    go->hide();
//    if(gs != NULL)
//       gs->hide();
}

void ScreenController::onGame(QString name)
{
    gs = new GameScreen(this);
    connect(this, SIGNAL(player(QString)), gs, SLOT(receivePlayer(QString)));
    connect(gs, SIGNAL(toGameOver()), this, SLOT(onGameOver()));
    connect(gs, SIGNAL(toMainWindow()), this, SLOT(onMain()));
    qDebug()<<name;
    emit player(name);
    layout->addWidget(gs, 0, 0, 1, 1);
    au->hide();
    gs->show();
}

void ScreenController::setPlayer(QString name)
{
    currentPlayer = name;
}

void ScreenController::onNewGame()
{
    //if(gs != NULL)
    //    gs->deleteLater();
    gs = new GameScreen(this);
    connect(this, SIGNAL(newGame(QString)), gs, SLOT(newGame(QString)));
    connect(gs, SIGNAL(toMainWindow()), this, SLOT(onMain()));
    emit newGame(currentPlayer);
    layout->addWidget(gs, 0, 0, 1, 1);
    au->hide();
    go->hide();
    gs->show();
}

void ScreenController::onGameOver()
{
    go->show();
    gs->deleteLater();
    au->hide();
}

void ScreenController::onMain()
{
    au->show();
    gs->deleteLater();
}
