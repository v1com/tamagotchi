#ifndef ENERGY_H
#define ENERGY_H

#include <QObject>
#include <QTimer>

class Energy : public QObject
{
    Q_OBJECT
    int energyLevel;
    int speedEnergy;
    QTimer* ptimer;
    QTimer* wtimer;
public:
    explicit Energy(QObject *parent = 0);
    ~Energy();
    int getEnergyLevel();
    void setEnergyLevel(int points);

signals:
    void changeLevel(int);
    void factorPoints(int);

public slots:
    void reductionEnergy();
    void recoveryEnergy();

};

#endif // ENERGY_H

