#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString exeDIR = QCoreApplication::applicationDirPath();
    QDir::setCurrent(exeDIR);
    MainWindow w;
    w.initSource();
    w.show();
    return a.exec();
}