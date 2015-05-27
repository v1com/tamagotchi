#include "feeding.h"
#include "food.h"
#include "scorefood.h"
#include <stdlib.h>
#include <QKeyEvent>
#include <QDesktopWidget>
#include <QApplication>
#include <QEvent>
#include <QMouseEvent>
#include "time.h"

Feeding::Feeding(QWidget *parent)
{
    QGraphicsScene * scene = new QGraphicsScene(NULL);
    scene->setSceneRect(0,0,800,480);
    setScene(scene);

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,480);

    setFocusPolicy(Qt::NoFocus);

    basket = new Basket(this);
    scene->addItem(basket);
    basket->setPos(400,400);
    basket->setFlag(QGraphicsItem::ItemIsFocusable);
    basket->setFocus();

    scene->setFocusItem(basket);
    scene->clearFocus();

    QTimer * spawnTimer = new QTimer(this);
    QObject::connect(spawnTimer,SIGNAL(timeout()),this,SLOT(spawn()));
    int spawnTime = 1500 + (rand() % 501);

    spawnTimer->start(spawnTime);

    score = new scoreFood();
    scene->addItem(score);

    scene->setBackgroundBrush(QBrush(QImage(":/feeding/backgroundPark1.png")));
    setAttribute(Qt::WA_AcceptTouchEvents);
    setMouseTracking(true);
    isPress = false;
    srand(time(NULL));
}

void Feeding::mousePressEvent(QMouseEvent *event)
{
    isPress=true;

        if(event->x()<300 && event->x()>0 && basket->pos().x() > 0)
        {
            basket->setPos(basket->x()-15,basket->y());
        }
        else if(event->x() <850 && event->x() >600 && basket->pos().x() < 700)
        {
            basket->setPos(basket->x()+15,basket->y());
        }

}

void Feeding::mouseMoveEvent(QMouseEvent *event)
{

    if(event->x()<300 && event->x()>0 && basket->pos().x() > 0)
    {
        basket->setPos(basket->x()-45,basket->y());
    }
    else if(event->x() <900 && event->x() >600 && basket->pos().x() < 700)
    {
        basket->setPos(basket->x()+45,basket->y());
    }
}

Feeding::~Feeding()
{

}

void Feeding::spawn()
{
    food * foodItm = new food(this);
    scene()->addItem(foodItm);
}
