#include <QApplication>
#include <QDebug>
#include <QWidget>
#include "screencontroller.h"
#include "game/racing/racing.h"

Racing * rc;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    ScreenController sc;
    sc.show();

    return a.exec();
}

