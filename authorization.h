#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QWidget>
#include <QSettings>

namespace Ui {
class Authorization;
}

class Authorization : public QWidget
{
    Q_OBJECT
    QSettings *settings;
public:
    explicit Authorization(QWidget *parent = 0);
    ~Authorization();
signals:
    void toGame(QString);
public slots:
    void toGameClicked();
    void newPlayer();
    void addPlayer();
    void deletePlayer();

private:
    Ui::Authorization *ui;
};

#endif // AUTHORIZATION_H
