#ifndef FEEDING_H
#define FEEDING_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "basket.h"
#include "scorefood.h"

class Feeding : public QGraphicsView
{
    Basket * basket;
    bool isPress;
    Q_OBJECT
public:
    explicit Feeding(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    ~Feeding();
    scoreFood * score;
signals:
    void addHappy(int);
public slots:
    void spawn();
};

#endif //FEEDING_H
