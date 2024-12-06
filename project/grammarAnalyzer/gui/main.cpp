#include "mainwindow.h"
/**
 * @file main.cpp
 * @brief 调用了主界面的类
 * 
 * @version 1.0
 * @date 2024-9-25
 * @author 20222131044
 * 
 * @history
 * 版本 | 作者 | 日期 | 说明
 * ------|------|------|------
 * 1.0 | 20222131044 | 2024-9-25 | 初始版本
 */
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