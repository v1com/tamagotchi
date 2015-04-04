#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <QObject>

class Score : public QGraphicsTextItem
{
    Q_OBJECT
private:
    int score;
public:
    Score(QGraphicsTextItem * parent = 0);
    void increase();
    int getScore();
signals:
    void gameOver();
public slots:

};

#endif // SCORE_H
