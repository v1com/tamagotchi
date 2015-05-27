#include "screencontroller.h"
#include <QDebug>
#include <QGridLayout>
#include <QMessageBox>
#include <QMenu>
#include <QEvent>
#include "time.h"

ScreenController::ScreenController(QMainWindow *parent): QMainWindow(parent){

    au = new Authorization(this);
    go = new GameOver(this);
    layout = new QGridLayout(this);

 //   layout->addWidget(mw, 0, 0, 1, 1);
    layout->addWidget(au, 0, 0, 1, 1);
    layout->addWidget(go, 0, 0, 1, 1);

    connect(au, SIGNAL(toGame(QString)), this, SLOT(onGame(QString)));
    connect(go, SIGNAL(toNewGame()), this, SLOT(onNewGame()));
    connect(go, SIGNAL(toAuth()),this, SLOT(onAuth()));
    connect(au, SIGNAL(toGame(QString)), this, SLOT(setPlayer(QString)));

    this -> setMinimumSize(601, 414);
    this -> setTrayIconActions();
    this -> showTrayIcon();

    phrase << "Let's play!" << "I would snack...:)" << "Yesterda-a-a-a-y, all my troubles seemed so fa-a-a-r awa-a-y..." <<
              "When you gaze long into an abyss the abyss also gazes into you." <<
              "If you know what you want, you are more likely to get it." <<
              "One of the greatest discoveries a man makes, one of his great surprises, is to find he can do what he was afraid he could not do." <<
              "Success is not in what you have, but who you are." <<
              "Being entirely honest with oneself is a good exercise." <<
              "Every solution breeds new problems.";
    phrase_timer = new QTimer(this);
    connect(phrase_timer, SIGNAL(timeout()), this, SLOT(sayPhrase()));
    phrase_timer->start(1500000);
    onAuth();
}

void ScreenController::onAuth()
{
    au->show();
    go->hide();
//    if(gs != NULL)
//       gs->hide();
}

void ScreenController::onGame(QString name)
{
    gs = new GameScreen(this);
    connect(this, SIGNAL(player(QString)), gs, SLOT(receivePlayer(QString)));
    connect(gs, SIGNAL(toGameOver()), this, SLOT(onGameOver()));
    connect(gs, SIGNAL(toMainWindow()), this, SLOT(onMain()));
    connect(gs, SIGNAL(petSaid(QString)), this, SLOT(showMessage(QString)));

    qDebug()<<name;
    emit player(name);
    layout->addWidget(gs, 0, 0, 1, 1);
    au->hide();
    gs->show();
}

void ScreenController::setPlayer(QString name)
{
    currentPlayer = name;
}

void ScreenController::onNewGame()
{
    //if(gs != NULL)
    //    gs->deleteLater();
    gs = new GameScreen(this);
    connect(this, SIGNAL(newGame(QString)), gs, SLOT(newGame(QString)));
    connect(gs, SIGNAL(toMainWindow()), this, SLOT(onMain()));
    emit newGame(currentPlayer);
    layout->addWidget(gs, 0, 0, 1, 1);
    au->hide();
    go->hide();
    gs->show();
}

void ScreenController::onGameOver()
{
    go->show();
    gs->deleteLater();
    au->hide();
}

void ScreenController::onMain()
{
    au->show();
    gs->deleteLater();
}

void ScreenController::changeEvent(QEvent * event)
{
    QMainWindow::changeEvent(event);
    if (event -> type() == QEvent::WindowStateChange)
    {
        if (isMinimized())
        {
            this -> hide();
        }
    }
}

void ScreenController::trayIconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason)
    {
        case QSystemTrayIcon::Trigger:
        case QSystemTrayIcon::DoubleClick:
            this -> trayActionExecute();
            break;
        default:
            break;
    }
}

void ScreenController::trayActionExecute()
{
    showNormal();
}

void ScreenController::setTrayIconActions()
{
    // Setting actions...
    minimizeAction = new QAction("Свернуть", this);
    restoreAction = new QAction("Восстановить", this);
    quitAction = new QAction("Выход", this);

    // Connecting actions to slots...
    connect (minimizeAction, SIGNAL(triggered()), this, SLOT(hide()));
    connect (restoreAction, SIGNAL(triggered()), this, SLOT(showNormal()));
    connect (quitAction, SIGNAL(triggered()), this, SLOT(close()));

    // Setting system tray's icon menu...
    trayIconMenu = new QMenu(this);
    trayIconMenu -> addAction (minimizeAction);
    trayIconMenu -> addAction (restoreAction);
    trayIconMenu -> addAction (quitAction);
}

void ScreenController::showTrayIcon()
{
    // Создаём экземпляр класса и задаём его свойства...
    trayIcon = new QSystemTrayIcon(this);
    trayIcon -> setToolTip("Tamagotchi");
  //  trayIcon -> showMessage("Title", "Message", QSystemTrayIcon::Information, 10000);
    QIcon trayImage(":/backgrounds/egg.png");
    trayIcon -> setIcon(trayImage);
    trayIcon -> setContextMenu(trayIconMenu);

    // Подключаем обработчик клика по иконке...
    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(trayIconActivated(QSystemTrayIcon::ActivationReason)));

    // Выводим значок...
    trayIcon -> show();
}

void ScreenController::showMessage(QString message)
{
    trayIcon -> showMessage("I need your care!", message, QSystemTrayIcon::Information, 10000);
    connect(trayIcon, SIGNAL(messageClicked()), this, SLOT(trayActionExecute()));
}

void ScreenController::sayPhrase()
{
    srand(time(NULL));
    QString message = phrase.at(rand() % 9);
    trayIcon -> showMessage("That's what I think", message, QSystemTrayIcon::Information, 10000);
    connect(trayIcon, SIGNAL(messageClicked()), this, SLOT(trayActionExecute()));
}
