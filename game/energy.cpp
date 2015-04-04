#include "energy.h"
#include <QDebug>
#include <QEventLoop>

Energy::Energy(QObject *parent) :
    QObject(parent)
{
    energyLevel = 100;
    speedEnergy = 10000;
    ptimer = new QTimer();
    connect(ptimer,SIGNAL(timeout()),this, SLOT(reductionEnergy()));
    ptimer->start(speedEnergy);

    wtimer = new QTimer();
    connect(wtimer, SIGNAL(timeout()),this, SLOT(recoveryEnergy()));
}

Energy::~Energy()
{

}

int Energy::getEnergyLevel()
{
    return energyLevel;
}

void Energy::setEnergyLevel(int points)
{
    energyLevel = points;
}

void Energy::reductionEnergy()
{
    if(wtimer->isActive()){
        wtimer->stop();
        ptimer->start(speedEnergy);
    }
    energyLevel --;
    if(energyLevel <= 0)
        energyLevel = 0;
    emit changeLevel(energyLevel);
    if(energyLevel <= 20)
        emit factorPoints(2);
    else
        emit factorPoints(1);

 //   qDebug() << "Energy: " << energyLevel;
}

void Energy::recoveryEnergy()
{
    if(ptimer->isActive()){
        ptimer->stop();
        wtimer->start(speedEnergy);
    }
    energyLevel ++;
    if(energyLevel >= 100)
        energyLevel = 100;
    emit changeLevel(energyLevel);
 //   qDebug() << "Energy: " << energyLevel;
}
