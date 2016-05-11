/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QLabel *blue;
    QLabel *blue_2;
    QLabel *blue_3;
    QLabel *red;
    QLabel *red_2;
    QLabel *red_3;
    QLCDNumber *record;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(526, 416);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, -10, 581, 401));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pics1/img/front.png")));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 50, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 100, 99, 27));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, -20, 551, 411));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pics2/img/newbg.jpeg")));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(370, 292, 111, 41));
        blue = new QLabel(centralWidget);
        blue->setObjectName(QStringLiteral("blue"));
        blue->setGeometry(QRect(440, 100, 71, 71));
        blue->setPixmap(QPixmap(QString::fromUtf8(":/pics2/img/blue.jpeg")));
        blue_2 = new QLabel(centralWidget);
        blue_2->setObjectName(QStringLiteral("blue_2"));
        blue_2->setGeometry(QRect(270, 256, 67, 61));
        blue_2->setPixmap(QPixmap(QString::fromUtf8(":/pics2/img/blue.jpeg")));
        blue_3 = new QLabel(centralWidget);
        blue_3->setObjectName(QStringLiteral("blue_3"));
        blue_3->setGeometry(QRect(180, 260, 61, 61));
        blue_3->setPixmap(QPixmap(QString::fromUtf8(":/pics2/img/blue.jpeg")));
        red = new QLabel(centralWidget);
        red->setObjectName(QStringLiteral("red"));
        red->setGeometry(QRect(70, 260, 61, 61));
        red->setPixmap(QPixmap(QString::fromUtf8(":/pics2/img/red.jpeg")));
        red_2 = new QLabel(centralWidget);
        red_2->setObjectName(QStringLiteral("red_2"));
        red_2->setGeometry(QRect(150, 270, 67, 51));
        red_2->setPixmap(QPixmap(QString::fromUtf8(":/pics2/img/red.jpeg")));
        red_3 = new QLabel(centralWidget);
        red_3->setObjectName(QStringLiteral("red_3"));
        red_3->setGeometry(QRect(250, 266, 67, 51));
        red_3->setPixmap(QPixmap(QString::fromUtf8(":/pics2/img/red.jpeg")));
        record = new QLCDNumber(centralWidget);
        record->setObjectName(QStringLiteral("record"));
        record->setGeometry(QRect(50, 20, 111, 61));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_2->raise();
        lcdNumber->raise();
        red->raise();
        red_2->raise();
        red_3->raise();
        blue->raise();
        blue_2->raise();
        blue_3->raise();
        record->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 526, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "quit", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "start", 0));
        label_2->setText(QString());
        blue->setText(QString());
        blue_2->setText(QString());
        blue_3->setText(QString());
        red->setText(QString());
        red_2->setText(QString());
        red_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
