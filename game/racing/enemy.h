#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QList>
#include "racing.h"
#include <QApplication>
#include <QDesktopWidget>

class Enemy : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
    float _speed;
public:
    Enemy(float speed,QObject * parent = 0);
    int getPositionX();
signals:
    void gameOver();
public slots:
    void move();
};

#endif // ENEMY_H
