#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>
#include <QDebug>
#include <typeinfo>
#include "racing.h"

extern Racing * rc;

Enemy::Enemy(QObject * parent) :QObject(parent),QGraphicsPixmapItem()
{
    int posEnemy[3];

    posEnemy[0]=17;
    posEnemy[1]=121;
    posEnemy[2]=225;

    int random_number = posEnemy[rand() % 3];

    setPixmap(QPixmap(":/racing/Enemy.png"));
    setPos(random_number,-95);


    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(10);
}

int Enemy::getPositionX()
{
    return pos().x();
}

void Enemy::move()
{
    QList<QGraphicsItem *> colliding_item = collidingItems();
    for(int i=0,n=colliding_item.size();i<n;++i){
        if(typeid(*(colliding_item[i])) == typeid(Player)){
            //remove both
            scene()->removeItem(colliding_item[i]);
            scene()->removeItem(this);
            rc->close();
            return;
        }
    }

    setPos(x(),y()+2);
    if(pos().y() > 410){
        scene()->removeItem(this);
        delete this;
        rc->score->increase();
        return;
    }
}
