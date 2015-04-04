#include "player.h"
#include <QKeyEvent>
#include <QDebug>

Player::Player(QObject * parent):QObject(parent),QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/racing/MyCar.png"));
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
        if(pos().x() > 60)
        setPos(x()-104,y());
    }
    else if(event->key() == Qt::Key_Right){
        if(pos().x() < 200)
        setPos(x()+104,y());
    }
}
