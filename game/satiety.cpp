#include "satiety.h"
#include <QDebug>

Satiety::Satiety(QObject *parent) :
    QObject(parent)
{
    satietyLevel = 100;
    speedSatiety = 60000;
    ptimer = new QTimer();
    connect(ptimer,SIGNAL(timeout()),this, SLOT(reductionSatiety()));
    ptimer->start(speedSatiety);

}

Satiety::~Satiety()
{

}

void Satiety::setSatiety(int level)
{
    satietyLevel = level;
}

int Satiety::getSatiety()
{
    return satietyLevel;
}

void Satiety::reductionSatiety()
{
    satietyLevel --;
    if(satietyLevel <= 0)
        satietyLevel = 0;
    emit changeLevel(satietyLevel);
 //   qDebug() << "Satiety: " << satietyLevel << "\n";
    if(satietyLevel <= 30)
        emit satietyNow(10);
}

void Satiety::changeSpeed(int factor)
{
    ptimer->setInterval(speedSatiety*factor);
}
