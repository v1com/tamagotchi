#ifndef RACING_H
#define RACING_H

#include <QWidget>
#include "track.h"
#include "player.h"
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QTimer>
#include "enemy.h"
#include "score.h"

class Racing : public QGraphicsView
{
    Q_OBJECT
    Player * player;
    Track * scene;
public:
    Racing(QWidget *parent = 0);
    ~Racing();
    void keyPressEvent(QKeyEvent *event);
    Score * score;
signals:
    void addHappy(int);
public slots:
    void spawn();
};

#endif // RACING_H
