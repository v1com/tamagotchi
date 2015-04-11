#include "basket.h"
#include <QKeyEvent>

Basket::Basket(QObject * parent):QObject(parent),QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/feeding/basket.png"));
}

