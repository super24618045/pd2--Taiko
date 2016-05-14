#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand(time(NULL));
    ui->setupUi(this);
    ui->label_2->hide();
    ui->record->hide();
    ui->lcdNumber->hide();
    ui->label_3->hide();
    //hide drum
    ui->blue->hide();
    ui->blue_2->hide();
    ui->blue_3->hide();
    ui->red->hide();
    ui->red_2->hide();
    ui->red_3->hide();


//set repeat
    repeat=0;
    connect(&timer,SIGNAL(timeout()),this,SLOT(countdown()));
    connect(&timer_blue,SIGNAL(timeout()),this,SLOT(spawn()));
    connect(&drum_count,SIGNAL(timeout()),this,SLOT(move3()));
    connect(&drum_count,SIGNAL(timeout()),this,SLOT(move2()));
    connect(&drum_count,SIGNAL(timeout()),this,SLOT(move()));
    connect(&drum_count,SIGNAL(timeout()),this,SLOT(move_r3()));
    connect(&drum_count,SIGNAL(timeout()),this,SLOT(move_r2()));
    connect(&drum_count,SIGNAL(timeout()),this,SLOT(move_r()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *z)
{
    //hide blue
    if(z->key()==Qt::Key_Z&&ui->blue->x()<=70&&ui->blue->x()>=50)
    {
        ui->blue->hide();
        score++;
    }
    if(z->key()==Qt::Key_Z&&ui->blue_2->x()<=70&&ui->blue_2->x()>=50)
    {
        ui->blue_2->hide();
        score++;
    }

    if(z->key()==Qt::Key_Z&&ui->blue_3->x()<=70&&ui->blue_3->x()>=50)
    {
        ui->blue_3->hide();
        score++;
    }
    //hide red
    if(z->key()==Qt::Key_M&&ui->red->x()<=70&&ui->red->x()>=50)
    {
        ui->red->hide();
        score++;
    }
    if(z->key()==Qt::Key_M&&ui->red_2->x()<=70&&ui->red_2->x()>=50)
    {
        ui->red_2->hide();
        score++;
    }

    if(z->key()==Qt::Key_M&&ui->red_3->x()<=70&&ui->red_3->x()>=50)
    {
        ui->red_3->hide();
        score++;
    }
}



void MainWindow::on_pushButton_clicked()
{
    close();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->hide();
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->record->hide();
    ui->label_2->show();
    ui->lcdNumber->show();
    //SET BLUE
    ui->blue->setGeometry(440,100,70,70);
    ui->blue_2->setGeometry(440,100,70,70);
    ui->blue_3->setGeometry(440,100,70,70);

    count=10;
    score=0;

    //
    ok=false;

   // if(repeat==0)
  //  {
        timer.start(1000);
        drum_count.start(5);
        timer_blue.start(300);
  //  }
    ui->lcdNumber->setDigitCount(2);
    ui->lcdNumber->display(count);
    ui->record->setDigitCount(2);




     if(count<=0&&ok==true)
     {
        timer.stop();
        drum_count.stop();
         timer_blue.stop();
      }
}

void MainWindow::countdown()
{

    count--;
    ui->lcdNumber->display(count);

    if(count<=0&&ok==true){
        ui->lcdNumber->hide();
        ui->pushButton->show();
        ui->pushButton_2->show();
        ui->label_2->hide();
        repeat=1;
        ui->label->show();
        ui->record->display(score);
        ui->record->show();
        ui->label_3->show();
    }

}

void MainWindow::move()
{
    ui->blue->setGeometry(ui->blue->x()-1,100,70,70);
    if(ui->blue->x()<-(70))
    {

        if(bl_index==1)
            {
            ui->blue->setGeometry(440,100,70,70);
            ui->blue->show();
            }
        if(count<=0)
        {
            ui->blue->hide();
            ok=true;
        }
    }
}

void MainWindow::move2()
{
    ui->blue_2->setGeometry(ui->blue_2->x()-1,100,70,70);
    if(ui->blue_3->x()<-(70))
    {
        if(bl_index==2)
            {
            ui->blue_2->setGeometry(440,100,70,70);
            ui->blue_2->show();
            }
        if(count<=0)
            {
            ui->blue_2->hide();
            ok=true;
            }
    }
}

void MainWindow::move3()
{

    ui->blue_3->setGeometry(ui->blue_3->x()-1,100,70,70);
    if(ui->blue_3->x()<-(70))
    {
        if(bl_index==3)
        {
        ui->blue_3->setGeometry(440,100,70,70);
        ui->blue_3->show();
        }
        if(count<=0)
        {
            ui->blue_3->hide();
            ok=true;
        }
    }
}

void MainWindow::move_r()
{
    ui->red->setGeometry(ui->red->x()-1,100,70,70);
    if(ui->red->x()<-(70))
    {


        if(bl_index==4)
            {
            ui->red->setGeometry(440,100,70,70);
            ui->red->show();
            }
        if(count<=0)
        {
            ui->red->hide();
            ok=true;
        }
    }
}

void MainWindow::move_r2()
{
    ui->red_2->setGeometry(ui->red_2->x()-1,100,70,70);
    if(ui->red_2->x()<-(70))
    {
        if(bl_index==5)
            {
            ui->red_2->setGeometry(440,100,70,70);
            ui->red_2->show();
            }
        if(count<=0)
        {
            ui->red_2->hide();
            ok=true;
        }
    }
}

void MainWindow::move_r3()
{
    ui->red_3->setGeometry(ui->red_3->x()-1,100,70,70);
    if(ui->red_3->x()<-(70))
    {
        if(bl_index==6)
            {
            //check_ready[5]=false;
            ui->red_3->setGeometry(440,100,70,70);
            ui->red_3->show();
            }
        if(count<=0)
        {
            ui->red_3->hide();
            ok=true;
        }
    }
}



void MainWindow::spawn()
{
    bl_index=rand()%6+1;
}




