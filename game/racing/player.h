#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QFocusEvent>


class Player : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player(QObject * parent = 0);
signals:

public slots:

};

#endif // PLAYER_H
