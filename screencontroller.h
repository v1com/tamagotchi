#ifndef SCREENCONTROLLER_H
#define SCREENCONTROLLER_H

#include <QWidget>
#include <QGridLayout>
#include "gamescreen.h"
#include "authorization.h"
#include "gameover.h"

class ScreenController : public QWidget
{
    Q_OBJECT
public:
    explicit ScreenController(QWidget *parent = 0);
    QString currentPlayer;

signals:
    void player(QString);
    void newGame(QString);
public slots:
    void onAuth();
    void onGame(QString);
    void setPlayer(QString);
    void onNewGame();
    void onGameOver();
    void onMain();
protected:
    GameScreen *gs;
    Authorization * au;
    GameOver *go;
    QGridLayout *layout;

};

#endif // SCREENCONTROLLER_H
