#include "food.h"
#include <stdlib.h>
#include <typeinfo>
#include "basket.h"
#include <QGraphicsScene>
#include <QString>
#include <time.h>

food::food(QObject *parent):QObject(parent),QGraphicsPixmapItem()
{
    QString foodItm[15];

    foodItm[0] = ":/feeding/apple22.png";
    foodItm[1] = ":/feeding/apple33.png";
    foodItm[2] = ":/feeding/apple44.png";

    foodItm[3] = ":/feeding/banana23.png";
    foodItm[4] = ":/feeding/banana34.png";
    foodItm[5] = ":/feeding/banana45.png";

    foodItm[6] = ":/feeding/cherry25.png";
    foodItm[7] = ":/feeding/cherry33.png";
    foodItm[8] = ":/feeding/cherry41.png";

    foodItm[9] = ":/feeding/pear23.png";
    foodItm[10] = ":/feeding/pear34.png";
    foodItm[11] = ":/feeding/pear45.png";

    foodItm[12] = ":/feeding/strawberry20.png";
    foodItm[13] = ":/feeding/strawberry30.png";
    foodItm[14] = ":/feeding/strawberry40.png";

    srand(time(NULL));
    int numberItem = rand() % 15;
    int posItem = rand() % 580;

    setPixmap(QPixmap(foodItm[numberItem]));
    setPos(posItem,0);

    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    int speedItem = 10 + (rand() % 5);
    timer->start(speedItem);
}

void food::move()
{
    QList<QGraphicsItem *> colliding_item = collidingItems();
    for(int i=0,n=colliding_item.size();i<n;++i){
        if(typeid(*(colliding_item[i])) == typeid(Basket)){
            fd->score->increase();
            scene()->removeItem(this);
            delete this;
        }
    }

    setPos(x(),y()+2);

    if(pos().y() > 480){
        scene()->removeItem(this);
        delete this;
        fd->close();
        return;
    }
}
