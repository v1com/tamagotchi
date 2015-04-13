#include "pet.h"
#include <QMovie>
#include <QLabel>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QTimerEvent>
#include <QSettings>
#include <QDebug>
#include <QTime>

Pet::Pet(QWidget *parent) :
    QWidget(parent), m_animation(new QMovie(this)), m_label(new QLabel(this)),
    m_player(new QMediaPlayer(this)),
    m_playlist(new QMediaPlaylist(m_player)){

    settings = new QSettings("gameSettings");
    count = 0;
    stage_egg = 1;
    factorPoints = 1;

    minutes = 0;
    lifeTimer = new QTimer(this);

    setAttribute(Qt::WA_NoSystemBackground);
    ptimer = new QTimer(this);
    connect(ptimer,SIGNAL(timeout()),SLOT(execution()));

    m_label->setMovie(m_animation);
    m_animation->setCacheMode(QMovie::CacheAll);

    resize(100,100);
    m_animation->setScaledSize(size());

    setPet(0);
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
            if(who == 0)
                animation(":pets/egg/egg1.png");
            else{
                animation(":/pets/" + name + "/gifs/" + name + "1.gif");
                m_player->playlist()->setCurrentIndex(0);
                m_player->play();
            }
            break;
        case Feeding:
            animation(":/pets/" + name + "/gifs/" + name + "_eat.gif");
            m_player->playlist()->setCurrentIndex(1);
            m_player->play();
            ptimer->start(5000);
            break;
        case Sleeping:
            animation(":/pets/" + name + "/gifs/" + name + "_sleep.gif");
            m_player->stop();
            break;
        case Washing:
            animation(":/pets/" + name + "/gifs/" + name + "_swim.gif");
         //   m_playlist->addMedia(QUrl("qrc:/pets/coco/audio/swim.mp3"));
            m_player->playlist()->setCurrentIndex(2);
            m_player->play();
            ptimer->start(5000);
            break;
        case Curing:
            animation(":/pets/curing/syringe.gif");
         //   m_player->playlist()->setCurrentIndex(0);
          //  m_player->play();
            ptimer->start(5000);
            break;
        case Playing:
         //   animation(":/pets/" + name + "/gifs/" + name + "_swim.gif");
         //   m_player->play();
        //    ptimer->start(5000);
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

void Pet::setPet(int pet)
{
    switch(pet){
    case 0:
        who = 0;
        name = "egg";
        qDebug() << "egg";
        break;
    case 1:
        who = 1;
        name = "coco";
        qDebug() << "coco";
        setConnects();
        break;
    case 2:
        who = 2;
        name = "raccoon";
        qDebug() << "raccoon";
        setConnects();
        break;
    case 3:
        who = 3;
        name = "unicorn";
        qDebug() << "unicorn";
        setConnects();
        break;
    case 4:
        who = 4;
        name = "dragon";
        qDebug() << "dragon";
        setConnects();
        break;
    }
 //   action(Nothing);
}

void Pet::mousePressEvent(QMouseEvent *e)
{
    if(who == 0){
        count++;
        if(count == 2*stage_egg && stage_egg < 4)
        {
            stage_egg++;
            count = 0;
            animation(":pets/egg/egg" + QString::number(stage_egg) + ".png");
        }
        else if(stage_egg == 4)
        {
            animation(":pets/egg/egg" + QString::number(stage_egg) + ".png");
            stage_egg++;
        }
        if(stage_egg > 4){
            QTime midnight(0,0,0);
            qsrand(midnight.secsTo(QTime::currentTime()));
            who = qrand() % 4 + 1;
            settings->setValue(player + "/who", who);
          //  setConnects();
            setPet(who);
            qDebug() << who;
            m_playlist->addMedia(QUrl("qrc:/pets/" + name + "/audio/" + name + ".mp3"));
            m_playlist->addMedia(QUrl("qrc:/pets/" + name + "/audio/" + name + "_feed.mp3"));
            if(who == 4)
                m_playlist->addMedia(QUrl("qrc:/pets/dragon/audio/dragon_swim.mp3"));
            else
                m_playlist->addMedia(QUrl("qrc:/pets/coco/audio/swim.mp3"));
            m_playlist->setPlaybackMode(QMediaPlaylist::CurrentItemOnce);
            m_player->setPlaylist(m_playlist);
            action(Nothing);
        }

    }
}

QDateTime Pet::getLife()
{
    return life;
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
    qDebug() << "factorPoints" << factorPoints;
    satiety.setSatiety(satiety.getSatiety() + points/factorPoints);
    if(satiety.getSatiety() > 100)
        satiety.setSatiety(100);
    action(Feeding);
    emit chSatSgn(satiety.getSatiety());
}

void Pet::cure()
{
    health.setHealthLevel(100);
    happiness.setHappiness(happiness.getHappiness() - 20);
    if(happiness.getHappiness() <= 0)
        happiness.setHappiness(0);
    emit chHealthSgn(health.getHealthLevel());
    emit chHapSgn(happiness.getHappiness());
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
    emit chHealthSgn(health.getHealthLevel());
}

void Pet::play(int points)
{
    happiness.setHappiness(happiness.getHappiness() + points);
    if(happiness.getHappiness() >= 100)
        happiness.setHappiness(100);
    emit chHapSgn(happiness.getHappiness());
}

void Pet::setFactor(int factor)
{
    factorPoints = factor;
}

void Pet::execution()
{
    action(Nothing);
    ptimer->stop();
 //   m_player->stop();
}

void Pet::setPlayer(QString m_name)
{
    player = m_name;
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
        who = settings->value("who").toInt();
        emit count_ref(settings->value("count_ref").toInt());
    settings->endGroup();
    setPet(who);
    if(who != 0)
    {
        m_playlist->addMedia(QUrl("qrc:/pets/" + name + "/audio/" + name + ".mp3"));
        m_playlist->addMedia(QUrl("qrc:/pets/" + name + "/audio/" + name + "_feed.mp3"));
        if(who == 4)
            m_playlist->addMedia(QUrl("qrc:/pets/dragon/audio/dragon_swim.mp3"));
        else
            m_playlist->addMedia(QUrl("qrc:/pets/coco/audio/swim.mp3"));
        m_playlist->setPlaybackMode(QMediaPlaylist::CurrentItemOnce);
        m_player->setPlaylist(m_playlist);
    }

    emit chHealthSgn(health.getHealthLevel());
    emit chHapSgn(happiness.getHappiness());
    emit chEnSgn(energy.getEnergyLevel());
    emit chSatSgn(satiety.getSatiety());
    emit ageChange(settings->value(player + "/minutes").toULongLong() + minutes);
    action(Nothing);
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
    settings->setValue("who", 0);
    settings->endGroup();
    settings->sync();

    minutes = 0;
    emit chHealthSgn(health.getHealthLevel());
    emit chHapSgn(happiness.getHappiness());
    emit chEnSgn(energy.getEnergyLevel());
    emit chSatSgn(satiety.getSatiety());
    emit ageChange(settings->value(player + "/minutes").toULongLong() + minutes);
}

void Pet::setConnects()
{
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

    connect(lifeTimer, SIGNAL(timeout()), this, SLOT(lifeTime()));
    lifeTimer->start(60000);
}


