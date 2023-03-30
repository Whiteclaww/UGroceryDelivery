#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "description.h"
#include "ui_description.h"
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
    bool bought = apple->Buy(*u);
    for (int i = 0; i < 100; i++) {
        std::cout << i << std::endl;
        std::cout << u->Items(i)->Number() << std::endl;
    }
    if (bought) ui->pushButton_3->setText("Bought ");
}

