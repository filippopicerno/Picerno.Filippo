#include "mainwindow.h"
#include <QApplication>
#include <QButtonGroup>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QButtonGroup *chiudi = new QButtonGroup();
         chiudi.resize(100, 30);
    w.show();

    return a.exec();
}
