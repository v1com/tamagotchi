#include "menuforgames.h"
#include <QPushButton>
#include "game/racing/racing.h"
#include "game/feeding/feeding.h"
#include <QVBoxLayout>
#include <stdlib.h>
#include <time.h>

Racing * rc;
Feeding * fd;

MenuForGames::MenuForGames(QWidget *parent) :
    QWidget(parent)
{
    srand(time(NULL));
    QVBoxLayout * myLayout = new QVBoxLayout(this);
    myLayout->setMargin(0);
    setLayout(myLayout);


    QPushButton * racingBtn = new QPushButton("Racing",this);
    QPushButton * feedingBtn = new QPushButton("Feeding",this);
    QPushButton * exitBtn = new QPushButton("Return to tamagochi",this);


    myLayout->addWidget(racingBtn);
    myLayout->addWidget(feedingBtn);
    myLayout->addWidget(exitBtn);

    racingBtn->setFixedSize(300,100);
    feedingBtn->setFixedSize(300,100);
    exitBtn->setFixedSize(300,100);
    setFixedSize(300,300);


    connect(racingBtn,SIGNAL(clicked()),this,SLOT(newRacing()));
    connect(feedingBtn,SIGNAL(clicked()),this,SLOT(newFeeding()));
    connect(exitBtn,SIGNAL(clicked()),this,SLOT(close()));
    setFocusPolicy(Qt::ClickFocus);
}

void MenuForGames::newRacing()
{
    rc = new Racing();
    rc->show();
    rc->setFocus();
    rc->setAttribute(Qt::WA_DeleteOnClose);
    this->hide();
    connect(rc,SIGNAL(addHappy(int)),this,SLOT(addHappySgn(int)));
}

void MenuForGames::newFeeding()
{
    fd = new Feeding();
    fd->show();
    fd->setFocus();
    fd->setAttribute(Qt::WA_DeleteOnClose);
    this->hide();
    connect(fd,SIGNAL(addHappy(int)),this,SLOT(addHappySgn(int)));
}

void MenuForGames::addHappySgn(int points)
{
    emit addHappy(points);
}
