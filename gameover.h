#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QWidget>

namespace Ui {
class GameOver;
}

class GameOver : public QWidget
{
    Q_OBJECT

public:
    explicit GameOver(QWidget *parent = 0);
    ~GameOver();
signals:
    void toNewGame();
    void toAuth();
public slots:
    void toNewGameClicked();
    void toAuthClicked();

private:
    Ui::GameOver *ui;
};

#endif // GAMEOVER_H
