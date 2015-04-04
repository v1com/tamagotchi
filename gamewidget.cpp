#include "gamewidget.h"
#include "game/pet.h"
#include "game/health.h"
#include "pointsbar.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QDebug>
#include <QGraphicsProxyWidget>


GameWidget::GameWidget(QWidget *parent): QWidget(parent),
m_scene(new QGraphicsScene(this)), m_view(new QGraphicsView(m_scene, this)){


    count_ref = 0;
    QGridLayout *layout = new QGridLayout(NULL);
    m_timer = new QTimer(this);

    layout->setMargin(0);
    m_view->setFixedSize(400,220);
    layout->addWidget(m_view, 0, 0, 1, 1);

    m_pet = new Pet();
    m_pet->action(Nothing);

    connect(m_pet, SIGNAL(chHealthSgn(int)), this,SLOT(chHealthSlt(int)));
    connect(m_pet, SIGNAL(chEnSgn(int)), this, SLOT(chEnSlt(int)));
    connect(m_pet, SIGNAL(chHapSgn(int)), this, SLOT(chHapSlt(int)));
    connect(m_pet, SIGNAL(chSatSgn(int)), this, SLOT(chSatSlt(int)));
    connect(m_timer, SIGNAL(timeout()), this, SLOT(setRefuse()));
    connect(m_pet, SIGNAL(death()), this, SLOT(toKillPet()));

    m_scene->addWidget(m_pet);
    m_timer->start(10000);
    setStyleSheet(
    "* { background-color: rgba(176, 196, 222, 255); }"
                );
  //  settings = new QSettings("gameSettings");
  //  count_ref = settings->value(m_pet->getPlayer() + "/count_ref").toInt();
  //  qDebug() << settings->value(m_pet->getPlayer() + "/count_ref");
  //  for(int i = 0; i < count_ref; i++)
  //      setRefuse();
}

Pet *GameWidget::getPet()
{
    return m_pet;
}

GameWidget::~GameWidget()
{
  //  settings->setValue(m_pet->getPlayer() + "/count_ref", count_ref);
  //  settings->sync();
}

void GameWidget::chHealthSlt(int level)
{
    emit chHealthSgn(level);
}

void GameWidget::chHapSlt(int level)
{
    emit chHapSgn(level);
}

void GameWidget::chSatSlt(int level)
{
    emit chSatSgn(level);
}

void GameWidget::chEnSlt(int level)
{
    emit chEnSgn(level);
}

void GameWidget::toFeed()
{
    m_pet->feed(20);
}

void GameWidget::toSleep()
{
    m_pet->sleep();
    m_timer->stop();
}

void GameWidget::toWash()
{
    m_pet->wash(50);
}

void GameWidget::toCure()
{
    m_pet->cure();
}

void GameWidget::toWakeUp()
{
    m_pet->wakeup();
    m_timer->start(10000);
}

void GameWidget::toPlay(int)
{
    m_pet->play(30);
}

void GameWidget::toKillPet()
{
    m_pet->deleteLater();
}

void GameWidget::setRefuse()
{
    count_ref ++;
    Refuse *ref = new Refuse(NULL);
    connect(ref, SIGNAL(deleted(Refuse*)),this, SLOT(destroyRefuse(Refuse *)));
    QGraphicsProxyWidget *proxy = m_scene->addWidget(ref);
    int x = rand()%300-150;
    int y = rand()%40-25;

    proxy->setPos(x,y);
    m_pet->refuseExists();
 //   qDebug() << proxy->pos();
  //  m_scene->update();
}

void GameWidget::destroyRefuse(Refuse *ref)
{
    count_ref--;
    m_scene->removeItem(m_scene->focusItem());
    ref->deleteLater();
    m_pet->refuseDestroyed();
}

void GameWidget::createPet()
{
    m_pet = new Pet();
    m_pet->action(Nothing);
}