#include "happiness.h"
#include <QDebug>

Happiness::Happiness(QObject *parent) :
    QObject(parent)
{
    happinessLevel = 100;
    speedHappiness = 10000;
    ptimer = new QTimer();
    connect(ptimer,SIGNAL(timeout()),this, SLOT(reductionHappiness()));
    ptimer->start(speedHappiness);
}

Happiness::~Happiness()
{

}

void Happiness::setHappiness(int points)
{
    happinessLevel = points;
    if(happinessLevel <= 0)
        happinessLevel = 0;
    emit changeLevel(happinessLevel);
}

int Happiness::getHappiness()
{
    return happinessLevel;
}

void Happiness::reductionHappiness()
{
     happinessLevel --;
     if(happinessLevel <= 0)
         happinessLevel = 0;
     emit changeLevel(happinessLevel);
     if(happinessLevel <= 80)
         emit factorPoints(2);
     else
         emit factorPoints(1);

  //   qDebug() << "Happiness: " << happinessLevel;
}

void Happiness::changeSpeed(int factor)
{
    ptimer->setInterval(speedHappiness*factor);
}
