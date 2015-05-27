#include "feeding.h"
#include "food.h"
#include "scorefood.h"
#include <stdlib.h>
#include <QKeyEvent>
#include <QDesktopWidget>
#include <QApplication>
#include <QEvent>

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
}

Feeding::~Feeding()
{
    delete basket;
}

void Feeding::spawn()
{
    food * foodItm = new food(this);
    scene()->addItem(foodItm);
}
