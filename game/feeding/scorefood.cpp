#include "scoreFood.h"
#include <QFont>
#include "feeding.h"

extern Feeding * fd;

scoreFood::scoreFood(QGraphicsTextItem *parent):QGraphicsTextItem(parent)
{
    score = 0;
    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}

void scoreFood::increase()
{
    score++;
    if( (score >= 1) && (score % 20 == 0) ){
        emit fd->addHappy(15);
    }
    setPlainText(QString("Score: ") + QString::number(score));
}

int scoreFood::getScore()
{
    return score;
}
