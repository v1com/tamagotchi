#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include <QGraphicsView>
#include <QList>
#include <QTimer>
#include <QSettings>
#include "game/refuse.h"

class QGraphicsScene;
class Pet;

class GameWidget : public QWidget
{
    Q_OBJECT
    QTimer *m_timer;
    int count_ref;
    QSettings * settings;
    bool ref;
public:
    explicit GameWidget(QWidget *parent = 0);
    Pet *getPet();
    ~GameWidget();

signals:
    void chHealthSgn(int);
    void chHapSgn(int);
    void chSatSgn(int);
    void chEnSgn(int);
    void sendMes(QString);
public slots:
    void chHealthSlt(int);
    void chHapSlt(int);
    void chSatSlt(int);
    void chEnSlt(int);

    void toFeed();
    void toSleep();
    void toWash();
    void toCure();
    void toWakeUp();
    void toPlay(int);
    void toKillPet();
    void setRefuse();
    void setRefuses(int);
    void destroyRefuse(Refuse *);
    void createPet();

protected:
    QGraphicsScene *m_scene;
    QGraphicsView *m_view;
    Pet *m_pet;

};

#endif // GAMEWIDGET_H
