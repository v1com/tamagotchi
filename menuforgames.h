#ifndef MENUFORGAMES_H
#define MENUFORGAMES_H

#include <QWidget>

class MenuForGames : public QWidget
{
    Q_OBJECT
public:
    explicit MenuForGames(QWidget *parent = 0);

signals:
    void addHappy(int);
public slots:
    void newRacing();
    void newFeeding();
    void addHappySgn(int points);
};

#endif // MENUFORGAMES_H
