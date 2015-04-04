#ifndef SATIETY_H
#define SATIETY_H

#include <QObject>
#include <QTimer>

class Satiety : public QObject
{
    Q_OBJECT
    int satietyLevel;
    int speedSatiety;
    QTimer* ptimer;
public:
    explicit Satiety(QObject *parent = 0);
    ~Satiety();
    void setSatiety(int level);
    int getSatiety();

signals:
    void satietyNow(float);
    void fullNow(int);
    void changeLevel(int);
public slots:
    void reductionSatiety();
    void changeSpeed(int factor);
};

#endif // SATIETY_H
