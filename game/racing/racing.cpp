#include "racing.h"

Racing::Racing(QWidget * parent)
{
    //add scene
    scene = new Track();
    scene->setSceneRect(0,0,300,410);
    setScene(scene);

    // view->setFixedSize(310,420);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(310,420);
    this->setFocusPolicy(Qt::ClickFocus);

    //add player car
    player = new Player(this);
    scene->addItem(player);
    player->setPos(121,295);
    player->setFlag(QGraphicsItem::ItemIsFocusable);


    QTimer * spawnTimer = new QTimer(this);
    QObject::connect(spawnTimer,SIGNAL(timeout()),this,SLOT(spawn()));
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
    emit addHappy(-5);
}

void Racing::spawn(){
    Enemy * enemy = new Enemy(this);
    scene->addItem(enemy);
    Enemy * enemy1 = new Enemy(this);

    if( enemy -> getPositionX() != enemy1->getPositionX())
        scene->addItem(enemy1);
    else delete enemy1;
}
