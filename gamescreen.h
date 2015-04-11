#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QWidget>
#include "game/pet.h"

namespace Ui {
class GameScreen;
}

class GameScreen : public QWidget
{
    Q_OBJECT

public:
    explicit GameScreen(QWidget *parent = 0);
    ~GameScreen();
signals:
    void sendPlayer(QString);
    void toGameOver();
public slots:
  //  void newRacing();
   // void deleteRacing();
    void receivePlayer(QString);
    void setAge(qlonglong);
    void newGame(QString);
    void gameOver();
private:
    Ui::GameScreen *ui;
};

#endif // GAMESCREEN_H
