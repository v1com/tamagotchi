#include "health.h"
#include <QDebug>
#include <QTimerEvent>

Health::Health(QObject *parent) :
    QObject(parent)
{
    healthLevel = 100;
    speedDecrease = 360000;
    ptimer = new QTimer(this);
    connect(ptimer,SIGNAL(timeout()),SLOT(reductionHealth()));
    ptimer->start(speedDecrease);
}

Health::~Health()
{

}

void Health::setHealthLevel(int level)
{
    healthLevel = level;
}

int Health::getHealthLevel()
{
    return healthLevel;
}

void Health::reductionHealth()
{
    healthLevel --;
    emit changeLevel(healthLevel);
    if(healthLevel <= 0)
    {
        healthLevel = 0;
        qDebug()<<"Pet is dead now!";
        emit death();
        ptimer->stop();
        return;
    }
//    qDebug()<<"Health: "<<healthLevel;
}

void Health::upSpeed(float speed)
{
    speedDecrease = int(speedDecrease/speed);
    if(speedDecrease <= 10000)
        speedDecrease = 10000;
    if(speedDecrease >= 360000)
        speedDecrease = 360000;
    ptimer->setInterval(speedDecrease);
    qDebug() <<"New interval: " << speedDecrease;
}

