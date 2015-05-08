#ifndef HAPPINESS_H
#define HAPPINESS_H

#include <QObject>
#include <QTimer>

class Happiness : public QObject
{
    Q_OBJECT
    int happinessLevel;
    int speedHappiness;
    QTimer* ptimer;
public:
    explicit Happiness(QObject *parent = 0);
    ~Happiness();
    void setHappiness(int points);
    int getHappiness();
signals:
    void factorPoints (int);
    void changeLevel(int);
public slots:
    void reductionHappiness();
    void changeSpeed(int factor);
};

#endif // HAPPINESS_H
