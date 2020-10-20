#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   qDebug()<<"你好呀";
   qDebug()<<"你好呀111111";
}

MainWindow::~MainWindow()
{
    delete ui;
}
