#include "player.h"
#include <QKeyEvent>
#include <QDebug>

Player::Player(QObject * parent):QObject(parent),QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/racing/MyCar.png"));
    setPos(121,295);
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();
}
