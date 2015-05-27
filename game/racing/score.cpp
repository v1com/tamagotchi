#include "score.h"
#include <QFont>
#include "racing.h"

extern Racing * rc;

Score::Score(QGraphicsTextItem *parent):QGraphicsTextItem(parent)
{
    score = 0;
    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}

void Score::increase()
{
    score++;
    if( (score >= 1) && (score % 30 == 0) ){
        emit rc->addHappy(15);
    }
    setPlainText(QString("Score: ") + QString::number(score));
}

int Score::getScore()
{
    return score;
}

