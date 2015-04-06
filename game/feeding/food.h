#ifndef FOOD_H
#define FOOD_H

#include <QGraphicsPixmapItem>
#include <QTimer>
#include "feeding.h"

extern Feeding * fd;

class food : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit food(QObject *parent = 0);
    int getPositionX();
signals:
    void gameOver();
public slots:
    void move();
};

#endif // FOOD_H
