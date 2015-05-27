#ifndef TRACK_H
#define TRACK_H

#include <QGraphicsScene>
#include <QBrush>
#include <QImage>
#include <QTimer>

class Track : public QGraphicsScene
{
    Q_OBJECT
    bool key;
public:
    explicit Track(QObject *parent = 0);

signals:

public slots:
    void setBackground();
};

#endif // TRACK_H
