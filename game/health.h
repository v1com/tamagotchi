#ifndef HEALTH_H
#define HEALTH_H

#include <QObject>
#include <QTimer>

class Health : public QObject
{
    Q_OBJECT
    int healthLevel;
    int speedDecrease;
    QTimer* ptimer;

public:
    explicit Health(QObject *parent = 0);
    ~Health();
    void setHealthLevel(int level);
    int getHealthLevel();

signals:
    void changeLevel(int);
    void death();

public slots:
    void reductionHealth();
    void upSpeed(float speed);
};

#endif // HEALTH_H
