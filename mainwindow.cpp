#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "description.h"
#include "ui_description.h"
#include "create.h"
//#include "ui_create.h"
#include "list.h"
#include "Item/item.h"


#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    d = new Description(this);
    d->show();
}


void MainWindow::on_radioButton_clicked()
{
    ui->radioButton_2->setChecked(false);
}

void MainWindow::on_pushButton_clicked()
{
    Description *description = new Description(this);
    description->show();
    description->setWindowTitle("Apple details");
    apple->Description(description->ui->label);
}


void MainWindow::on_pushButton_3_clicked()
{
    bool bought = apple->Buy(u);
    if (bought) ui->pushButton_3->setText("Bought " + QString::number(u->Much(apple->ID())));
}

void MainWindow::on_pushButton_4_clicked()
{
    bool bought = sandwich->Buy(u);
    if (bought){
        ui->pushButton_4->setText("Buy another");
        Create *create = new Create(this);
        create->show();
        create->setWindowTitle("Create your Sandwich");
    }
}

