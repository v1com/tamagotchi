#ifndef PET_H
#define PET_H

#include <QWidget>
#include <QTimer>
#include "satiety.h"
#include "health.h"
#include "happiness.h"
#include "energy.h"
#include <QSettings>
#include <QDateTime>
#include <QMediaPlayer>
#include <QMediaPlaylist>

enum State {
  Nothing, Feeding, Sleeping, Washing, Curing, Playing
};

class QLabel;

class Pet : public QWidget
{
    Q_OBJECT
    Satiety satiety;
    Health health;
    Happiness happiness;
    Energy energy;
    int factorPoints;
    QTimer* ptimer;
    QSettings *settings;
    QDateTime life;
    qlonglong minutes;
    QString player;
    QTimer* lifeTimer;
    QString name;
    int who; // 0 - egg, 1 - coco, 2 - raccoon, 3 - unicorn, 4 - dragon
    int count;
    int stage_egg; // from 1 to 4
    bool isSleep;
public:
    explicit Pet(QWidget *parent = 0);
    ~Pet();
    void animation(QString texturename);
    void action(State);
    int getHealth();
    int getHappiness();
    int getSatiety();
    int getEnergy();
    QString getPlayer();
    void setPet(int pet);
    void mousePressEvent(QMouseEvent * e);
    QDateTime getLife();
signals:
    void chHealthSgn(int);
    void chHapSgn(int);
    void chSatSgn(int);
    void chEnSgn(int);

    void sleepSgn(int);
    void wakeupSgn(int);
    void ageChange(qlonglong);
    void death();
    void birth();
    void count_ref(int);
    void need(QString);
public slots:
    void chHealthSlt(int);
    void chHapSlt(int);
    void chSatSlt(int);
    void chEnSlt(int);

    void feed(int points);
    void cure();
    void sleep();
    void wakeup();
    void wash(int points);
    void play(int points);
    void setFactor(int factor);
    void execution();
    void setPlayer(QString);
    void lifeTime();
    void toDeath();
    void refuseExists();
    void refuseDestroyed();
    void newGame(QString);
    void setConnects();
protected:
    QMovie *m_animation;
    QLabel *m_label;
    QMediaPlayer *m_player;
    QMediaPlaylist *m_playlist;
};

#endif // PET_H
