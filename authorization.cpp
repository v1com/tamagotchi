#include "authorization.h"
#include "ui_authorization.h"
#include <QSettings>
#include <QDebug>
#include <QTextEdit>
#include <QDateTime>

Authorization::Authorization(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);
    ui->newName->hide();
    ui->addPlayerBtn->hide();

    settings = new QSettings("gameSettings");
    ui->names->addItems(settings->childGroups());
    connect(ui->okBtn, SIGNAL(clicked()), this, SLOT(toGameClicked()));
    connect(ui->newPlayerBtn, SIGNAL(clicked()), this, SLOT(newPlayer()));
    connect(ui->addPlayerBtn, SIGNAL(clicked()),this,SLOT(addPlayer()));
    connect(ui->deleteBtn, SIGNAL(clicked()), this, SLOT(deletePlayer()));
}

Authorization::~Authorization()
{
    delete ui;
}

void Authorization::toGameClicked()
{
    emit toGame(ui->names->currentText());
}

void Authorization::newPlayer()
{
    ui->newName->show();
    ui->addPlayerBtn->show();
}

void Authorization::addPlayer()
{
    QString name = ui->newName->toPlainText();
    if(settings->contains(name + "/health")){
        qDebug()<<"Name is exist";
    }
    else{
        ui->names->addItem(name);
        settings->beginGroup(name);
        settings->setValue("health", 100);
        settings->setValue("happiness", 100);
        settings->setValue("energy", 100);
        settings->setValue("satiety", 100);
        settings->setValue("birth",QDateTime::currentDateTime());
        settings->setValue("minutes", 0);
        settings->endGroup();
        settings->sync();
    }
    ui->newName->hide();
    ui->addPlayerBtn->hide();
    //   qDebug()<<settings->allKeys();
}

void Authorization::deletePlayer()
{
    QString name = ui->names->currentText();
    if(settings->contains(name + "/health")){
        qDebug()<<settings->allKeys();
        settings->remove(name);
        settings->sync();
        qDebug()<<settings->allKeys();
    }
    else{
        qDebug()<<"Error";
    }
    ui->names->removeItem(ui->names->currentIndex());

}
