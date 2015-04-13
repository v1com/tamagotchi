#include "refuse.h"
#include <QPixmap>
#include <QDebug>

Refuse::Refuse(QWidget *parent) :
    QWidget(parent), m_label(new QLabel(this))
{
    QPixmap pix;
    pix.load(":/pets/coco/pics/refuse.png");
    m_label->setPixmap(pix);
    resize(50,50);
    setAttribute(Qt::WA_NoSystemBackground);
    emit exist();
}

Refuse::~Refuse()
{
    qDebug() << "Refuse deleted";
}

void Refuse::mousePressEvent(QMouseEvent *e)
{
    emit deleted(this);
}
