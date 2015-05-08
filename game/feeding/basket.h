#ifndef BASKET_H
#define BASKET_H

#include <QGraphicsPixmapItem>

class Basket : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Basket(QObject *parent = 0);
signals:

public slots:

};

#endif // BASKET_H
