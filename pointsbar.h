#ifndef POINTSBAR_H
#define POINTSBAR_H

#include <QPushButton>

class PointsBar : public QPushButton
{
    Q_OBJECT
    int level;
public:
    explicit PointsBar(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
signals:

public slots:
    void setLevel(int);

};

#endif // POINTSBAR_H
