#ifndef SCREENCONTROLLER_H
#define SCREENCONTROLLER_H

#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>
#include <QTimer>
#include <QSystemTrayIcon>
#include "gamescreen.h"
#include "authorization.h"
#include "gameover.h"

class ScreenController : public QMainWindow
{
    Q_OBJECT
    QStringList phrase;
    QTimer * phrase_timer;
public:
    explicit ScreenController(QMainWindow *parent = 0);
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

 /*  void changeEvent(QEvent*);
    void trayIconActivated(QSystemTrayIcon::ActivationReason reason);
    void trayActionExecute();
    void setTrayIconActions();
    void showTrayIcon();
    void showMessage(QString);*/
    void sayPhrase();
protected:
    GameScreen *gs;
    Authorization * au;
    GameOver *go;
    QGridLayout *layout;
   // QMenu *trayIconMenu;
    QAction *minimizeAction;
    QAction *restoreAction;
    QAction *quitAction;
    QSystemTrayIcon *trayIcon;

};

#endif // SCREENCONTROLLER_H
