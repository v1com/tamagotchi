#include "pointsbar.h"
#include <QPainter>
#include <QPaintEvent>

PointsBar::PointsBar(QWidget *parent) :
    QPushButton(parent)
{
    setFixedHeight(20);
    setFixedWidth(100);
   // setText(text);
    level = 100;
}

void PointsBar::paintEvent(QPaintEvent *pe)
{
    QPainter p(this);
    QString s = QString::number(level) + "%";
    p.setPen(Qt::black);
    p.setBrush(Qt::white);
    p.drawRect(0,0,100,20);
    p.setBrush(Qt::green);
    p.drawRect(0,0,level,20);
    p.drawText(40,10, s);
    update();
}

void PointsBar::setLevel(int lvl)
{
    level = lvl;
}
