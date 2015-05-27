#include <QApplication>
#include <QDebug>
#include <QWidget>
#include "screencontroller.h"
#include "game/racing/racing.h"
#include <QDesktopWidget>

int main(int argc, char *argv[]) {
    QStringList paths = QCoreApplication::libraryPaths();
    paths.append(".");
    paths.append("platforms");
    paths.append("accessible");
    paths.append("audio");
    paths.append("bearer");
    paths.append("designer");
    paths.append("iconengines");
    paths.append("imageformats");
    paths.append("meadiaservice");
    paths.append("playlistformats");
    paths.append("position");
    paths.append("printsupport");
    paths.append("qml1tooling");
    paths.append("qmltooling");
    paths.append("sensorgestures");
    paths.append("sensors");
    paths.append("sqldrivers");

    QCoreApplication::setLibraryPaths(paths);

    QApplication a(argc, argv);
    ScreenController sc;
    sc.showFullScreen();
    return a.exec();
}
