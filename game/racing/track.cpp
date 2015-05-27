#include "track.h"

Track::Track(QObject *parent) :
    QGraphicsScene(parent)
{
    key = true;
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(setBackground()));
    timer->start(40);
}

void Track::setBackground()
{
    if(key) setBackgroundBrush(QBrush(QImage(":/racing/trackbackground1.png")));
    else setBackgroundBrush(QBrush(QImage(":/racing/trackbackground2.png")));
    key = !key;
}
