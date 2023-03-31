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
    d->setWindowTitle("Sandwich details");
    sandwich->Description(d->ui->label);
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
    else;
    ui->pushButton_6->setDisabled(apple->Number() == 20);
    ui->pushButton_3->setDisabled(!apple->Number());
}

void MainWindow::on_pushButton_4_clicked()
{
    bool bought = sandwich->Buy(u);
    if (bought){
        ui->pushButton_4->setText("Bought");
        Create *create = new Create(this);
        create->show();
        create->setWindowTitle("Create your Sandwich");
    } ui->pushButton_5->setDisabled(sandwich->Number());
    ui->pushButton_4->setDisabled(!sandwich->Number());
}


void MainWindow::on_pushButton_6_clicked()
{
    bool removed = apple->Remove(u);
    if (removed) {
        if (!u->Much(apple->ID())) ui->pushButton_3->setText("Buy");
        else ui->pushButton_3->setText("Bought " + QString::number(u->Much(apple->ID())));
        ui->pushButton_3->setDisabled(!apple->Number());
        ui->pushButton_6->setDisabled(apple->Number() == 20);
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    bool removed = sandwich->Remove(u);
    if (removed) {
        if (!u->Much(sandwich->ID())) ui->pushButton_4->setText("Buy");
        else ui->pushButton_4->setText("Bought " + QString::number(u->Much(sandwich->ID())));
        ui->pushButton_3->setDisabled(!sandwich->Number());
        ui->pushButton_6->setDisabled(sandwich->Number());
    }
}

