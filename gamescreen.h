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
    void toMainWindow();
    void petSaid(QString);
public slots:
  //  void newRacing();
   // void deleteRacing();
    void receivePlayer(QString);
    void setAge(qlonglong s);
    void newGame(QString);
    void gameOver();
    void mainWindow();
    void petNeeds(QString);
private:
    Ui::GameScreen *ui;
};

#endif // GAMESCREEN_H
