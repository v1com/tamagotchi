#ifndef SCOREFOOD_H
#define SCOREFOOD_H

#include <QGraphicsTextItem>
#include <QObject>

class scoreFood : public QGraphicsTextItem
{
    Q_OBJECT
private:
    int score;
public:
    scoreFood(QGraphicsTextItem * parent = 0);
    void increase();
    int getScore();
signals:
    void gameOver();
public slots:

};

#endif // SCOREFOOD_H
