#include "racing.h"

Racing::Racing(QWidget * parent):QGraphicsView(parent)
{
    speedRacing=1;
    setFocusPolicy(Qt::NoFocus);
    //add scene
    scene = new Track();
    scene->clearFocus();
    scene->setSceneRect(0,0,300,410);
    setScene(scene);

    // view->setFixedSize(310,420);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(310,420);

    //add player car
    player = new Player(this);
    scene->addItem(player);
    player->setFocus();
    QTimer * spawnTimer = new QTimer(this);
    QObject::connect(spawnTimer,SIGNAL(timeout()),this,SLOT(spawn()));
    QObject::connect(spawnTimer,SIGNAL(timeout()),this,SLOT(incSpeed()));

    spawnTimer->start(1500);

    //add score
    score = new Score();
    scene->addItem(score);


    player->setFocus();

}

Racing::~Racing()
{
    delete score;
    delete player;
    speedRacing = 1;
}

void Racing::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
        if(player->pos().x() > 60)
        player->setPos(player->x()-104,player->y());
    }
    else if(event->key() == Qt::Key_Right){
        if(player->pos().x() < 200)
        player->setPos(player->x()+104,player->y());
    }
}

void Racing::spawn(){
    Enemy * enemy = new Enemy(speedRacing,this);
    scene->addItem(enemy);
    Enemy * enemy1 = new Enemy(speedRacing,this);

    if( enemy -> getPositionX() != enemy1->getPositionX())
        scene->addItem(enemy1);
    else delete enemy1;
}

void Racing::incSpeed()
{
    speedRacing+=0.05;
}
