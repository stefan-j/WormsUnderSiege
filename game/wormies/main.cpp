#include "mainwindow.h"
#include <QApplication>
#include "multiplayertest.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //MainWindow w;
    MultiplayerTest w;

    w.show();

    return a.exec();
}
