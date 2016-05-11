#include "mainwindow.h"
#include <QApplication>
#include<QDesktopWidget>
#include<QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QDesktopWidget wid;
    int screenW = 500;
    int screenH = 400;
    w.setGeometry(wid.screen()->width()/2 - (screenW/2) , wid.screen()->height()/2 - (screenH/2) , screenW , screenH);
    w.setWindowTitle("taiko");

    w.show();


    return a.exec();
}
