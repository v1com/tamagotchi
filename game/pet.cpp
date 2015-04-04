#include "pet.h"
#include <QMovie>
#include <QLabel>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QTimerEvent>
#include <QSettings>
#include <QDebug>

Pet::Pet(QWidget *parent) :
    QWidget(parent), m_animation(new QMovie(this)), m_label(new QLabel(this)),
    m_player(new QMediaPlayer(this)),
    m_playlist(new QMediaPlaylist(m_player)){

    minutes = 0;
    lifeTimer = new QTimer(this);
    connect(lifeTimer, SIGNAL(timeout()), this, SLOT(lifeTime()));
    lifeTimer->start(60000);

    settings = new QSettings("gameSettings");

    setAttribute(Qt::WA_NoSystemBackground);
    ptimer = new QTimer(this);
    connect(ptimer,SIGNAL(timeout()),SLOT(execution()));

    m_label->setMovie(m_animation);
    m_animation->setCacheMode(QMovie::CacheAll);

    resize(100,100);
    m_animation->setScaledSize(size());

    m_player->setPlaylist(m_playlist);
    m_playlist->addMedia(QUrl("qrc:/coco/audio/coco.mp3"));
    m_playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);

    action(Nothing);

    connect(&health, SIGNAL(changeLevel(int)), this, SLOT(chHealthSlt(int)));
    connect(&happiness, SIGNAL(changeLevel(int)), this, SLOT(chHapSlt(int)));
    connect(&satiety, SIGNAL(changeLevel(int)), this, SLOT(chSatSlt(int)));
    connect(&energy, SIGNAL(changeLevel(int)), this, SLOT(chEnSlt(int)));


    connect(&satiety,SIGNAL(satietyNow(float)),&health,SLOT(upSpeed(float)));
    connect(&happiness, SIGNAL(factorPoints(int)), this, SLOT(setFactor(int)));

    connect(this, SIGNAL(wakeupSgn(int)),&energy, SLOT(reductionEnergy()));
    connect(this, SIGNAL(wakeupSgn(int)),&satiety, SLOT(changeSpeed(int)));
    connect(this, SIGNAL(wakeupSgn(int)),&happiness, SLOT(changeSpeed(int)));

    connect(this, SIGNAL(sleepSgn(int)),&energy, SLOT(recoveryEnergy()));
    connect(this, SIGNAL(sleepSgn(int)), &satiety, SLOT(changeSpeed(int)));
    connect(this, SIGNAL(sleepSgn(int)), &happiness, SLOT(changeSpeed(int)));

}

Pet::~Pet()
{
    settings->setValue(player + "/minutes", minutes + settings->value(player + "/minutes").toInt());
    settings->sync();
    qDebug() << settings->value(player + "/minutes");
    qDebug() << settings->value(player + "/health");
}

void Pet::animation(QString texturename) {
    m_animation->stop();
    m_animation->setFileName(texturename);
    m_animation->start();
    resize(100,100);
}

void Pet::action(State state)
{
    switch(state) {
        case Nothing:
            animation(":/coco/gifs/coco1.gif");
            m_player->play();
            break;
        case Feeding:
            animation(":/coco/gifs/coco_eat.gif");
            m_player->play();
            ptimer->start(5000);
            break;
        case Sleeping:
            animation(":/coco/gifs/coco_sleep.gif");
            m_player->stop();
            break;
        case Washing:
            animation(":/coco/gifs/coco_swim.gif");
            m_player->play();
            ptimer->start(5000);
            break;
        case Curing:
            animation(":/coco/gifs/coco_swim.gif");
            m_player->play();
            ptimer->start(5000);
            break;
        case Playing:
            animation(":/coco/gifs/coco_swim.gif");
            m_player->play();
            ptimer->start(5000);
            break;
    }
}

int Pet::getHealth()
{
    return health.getHealthLevel();
}

int Pet::getHappiness()
{
    return happiness.getHappiness();
}

int Pet::getSatiety()
{
    return satiety.getSatiety();
}

int Pet::getEnergy()
{
    return energy.getEnergyLevel();
}

QString Pet::getPlayer()
{
    return player;
}


void Pet::chHealthSlt(int health)
{
    emit chHealthSgn(health);
    settings->setValue(player + "/health", health);
    settings->sync();
    if(health <= 0)
        emit death();
}

void Pet::chEnSlt(int energy)
{
    emit chEnSgn(energy);
    settings->setValue(player + "/energy", energy);
    settings->sync();
}

void Pet::chHapSlt(int happiness)
{
    emit chHapSgn(happiness);
    settings->setValue(player + "/happiness", happiness);
    settings->sync();
}

void Pet::chSatSlt(int satiety)
{
    emit chSatSgn(satiety);
    settings->setValue(player + "/satiety", satiety);
    settings->sync();
}

void Pet::feed(int points)
{
    satiety.setSatiety(satiety.getSatiety() + points/factorPoints);
    if(satiety.getSatiety() > 100)
        satiety.setSatiety(100);
    action(Feeding);
}

void Pet::cure()
{
    health.setHealthLevel(100);
    action(Curing);
}

void Pet::sleep()
{
    emit sleepSgn(10);
    action(Sleeping);
}

void Pet::wakeup()
{
    emit wakeupSgn(1);
    action(Nothing);
}

void Pet::wash(int points)
{
    health.setHealthLevel(health.getHealthLevel() + points/factorPoints);
    if(health.getHealthLevel() >= 100)
        health.setHealthLevel(100);
    action(Washing);
}

void Pet::play(int points)
{
    happiness.setHappiness(happiness.getHappiness() + points);
    if(happiness.getHappiness() >= 100)
        happiness.setHappiness(100);
}

void Pet::setFactor(int factor)
{
    factorPoints = factor;
}

void Pet::execution()
{
    action(Nothing);
    ptimer->stop();
}

void Pet::setPlayer(QString name)
{
    player = name;
    if(settings->value(player + "/health").toInt() <= 0){
        newGame(player);
        return;
    }
    settings->beginGroup(player);
        life = settings->value("birth").toDateTime();
        health.setHealthLevel(settings->value("health").toInt());
        qDebug() << life;
        happiness.setHappiness(settings->value("happiness").toInt());
        satiety.setSatiety(settings->value("satiety").toInt());
        energy.setEnergyLevel(settings->value("energy").toInt());
    settings->endGroup();
    emit chHealthSgn(health.getHealthLevel());
    emit chHapSgn(happiness.getHappiness());
    emit chEnSgn(energy.getEnergyLevel());
    emit chSatSgn(satiety.getSatiety());
    emit ageChange(settings->value(player + "/minutes").toULongLong() + minutes);
}

void Pet::lifeTime()
{
    minutes++;
    qDebug()<<minutes;
    emit ageChange(settings->value(player + "/minutes").toULongLong() + minutes);
}

void Pet::toDeath()
{
}

void Pet::refuseExists()
{
    qDebug() << "refuseExists()";
    health.upSpeed(2);
}

void Pet::refuseDestroyed()
{
    health.upSpeed(0.5);
}

void Pet::newGame(QString name)
{
    qDebug() << "new game";
    qDebug() << settings->fileName();
    player = name;
    settings->beginGroup(player);

    settings->setValue("birth", QDateTime::currentDateTime());
    life = settings->value("birth").toDateTime();

    settings->setValue("health", 100);
    health.setHealthLevel(100);
    settings->setValue("happiness", 100);
    happiness.setHappiness(100);
    settings->setValue("satiety", 100);
    satiety.setSatiety(100);
    settings->setValue("energy", 100);
    energy.setEnergyLevel(100);
    settings->setValue("minutes", 0);
    settings->endGroup();
    settings->sync();

    minutes = 0;
    emit chHealthSgn(health.getHealthLevel());
    emit chHapSgn(happiness.getHappiness());
    emit chEnSgn(energy.getEnergyLevel());
    emit chSatSgn(satiety.getSatiety());
    emit ageChange(settings->value(player + "/minutes").toULongLong() + minutes);
}


