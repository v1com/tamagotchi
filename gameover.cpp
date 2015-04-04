#include "gameover.h"
#include "ui_gameover.h"
#include <QPixmap>
#include <QPalette>
#include <QBrush>

GameOver::GameOver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameOver)
{
    ui->setupUi(this);
    QPixmap pix;
    pix.load(":/backgrounds/go.jpg");
    QPalette pal;
    pal.setBrush(this->backgroundRole(), QBrush(pix));
    this->setPalette(pal);
    connect(ui->newGameBtn, SIGNAL(clicked()), this, SLOT(toNewGameClicked()));
    connect(ui->playerBtn, SIGNAL(clicked()), this, SLOT(toAuthClicked()));
}

GameOver::~GameOver()
{
    delete ui;
}

void GameOver::toNewGameClicked()
{
    emit toNewGame();
}

void GameOver::toAuthClicked()
{
    emit toAuth();
}
