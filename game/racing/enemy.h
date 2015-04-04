#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QList>
#include "racing.h"

class Enemy : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(QObject * parent = 0);
    int getPositionX();
signals:
    void gameOver();
public slots:
    void move();
};

#endif // ENEMY_H
