#ifndef REFUSE_H
#define REFUSE_H

#include <QWidget>
#include <QLabel>

class Refuse : public QWidget
{
    Q_OBJECT
    QLabel *m_label;
public:
    explicit Refuse(QWidget *parent = 0);
    ~Refuse();
    void mousePressEvent(QMouseEvent * e);

signals:
    void exist();
    void deleted(Refuse*);
public slots:

};

#endif // REFUSE_H
