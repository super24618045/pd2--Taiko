#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTimer>
#include <QObject>
#include <QDesktopWidget>
#include <QGraphicsOpacityEffect>
#include <QGraphicsScene>
#include <QLabel>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <QWidget>
#include <QKeyEvent>
#include <Qt>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void keyPressEvent(QKeyEvent *e);


private slots:
    void on_pushButton_clicked();
    
    void on_pushButton_2_clicked();

    void countdown();
    void move();
    void move2();
    void move3();
    void move_r();
    void move_r2();
    void move_r3();
    void spawn();

private:
    Ui::MainWindow *ui;
    int count;
    int repeat;
    int bl_index;
    int score;
    QTimer timer;
    QTimer drum_count;
    QTimer timer_blue;
};

#endif // MAINWINDOW_H
