#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "description.h"
#include "ui_description.h"
#include "list.h"

#include <QMenu>
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_17->setText("Welcome " + User::u->Fname() + " " + User::u->Lname() + "!");
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
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
    Sandwich::sandwich->ID();
    Sandwich::sandwich->Description(d->ui->label);
}


void MainWindow::on_pushButton_clicked()
{
    Description *description = new Description(this);
    description->show();
    description->setWindowTitle("Apple details");
    apple->Description(description->ui->label);
}


void MainWindow::on_pushButton_7_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Carrot details");
    carrot->Description(d->ui->label);
}


void MainWindow::on_pushButton_10_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Burger Bun details");
    bun->Description(d->ui->label);
}


void MainWindow::on_pushButton_13_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Sliced Meat details");
    meat->Description(d->ui->label);
}


void MainWindow::on_pushButton_16_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Water details");
    water->Description(d->ui->label);
}


void MainWindow::on_pushButton_19_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Coca-Cola details");
    coca->Description(d->ui->label);
}


void MainWindow::on_pushButton_40_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Bleach details");
    bleach->Description(d->ui->label);
}


void MainWindow::on_pushButton_22_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Chicken Sticks details");
    chicken->Description(d->ui->label);
}


void MainWindow::on_pushButton_27_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Soap details");
    soap->Description(d->ui->label);
}


void MainWindow::on_pushButton_28_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Wipes details");
    wipes->Description(d->ui->label);
}


void MainWindow::on_pushButton_34_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Sponge details");
    sponge->Description(d->ui->label);
}


void MainWindow::on_pushButton_30_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Tide-Pods details");
    pods->Description(d->ui->label);
}


void MainWindow::on_pushButton_26_clicked()
{
    d = new Description(this);
    d->show();
    d->setWindowTitle("Shampoo details");
    shampoo->Description(d->ui->label);
}


void MainWindow::on_pushButton_3_clicked()
{
    bool bought = apple->Buy(User::u);
    if (bought) ui->pushButton_3->setText("Bought " + QString::number(User::u->Much(apple->ID())));
    else ui->pushButton_3->setText("Cannot buy more" + QString::number(User::u->Much(apple->ID())));
    ui->pushButton_6->setDisabled(apple->Number() == 20);
    ui->pushButton_3->setDisabled(!apple->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}


void MainWindow::on_pushButton_8_clicked()
{
    bool bought = carrot->Buy(User::u);
    if (bought) ui->pushButton_8->setText("Bought " + QString::number(User::u->Much(carrot->ID())));
    else ui->pushButton_8->setText("Cannot buy more" + QString::number(User::u->Much(carrot->ID())));
    ui->pushButton_9->setDisabled(carrot->Number() == 30);
    ui->pushButton_8->setDisabled(!carrot->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}


void MainWindow::on_pushButton_12_clicked()
{
    bool bought = bun->Buy(User::u);
    if (bought) ui->pushButton_12->setText("Bought " + QString::number(User::u->Much(bun->ID())));
    else ui->pushButton_12->setText("Cannot buy more" + QString::number(User::u->Much(bun->ID())));
    ui->pushButton_11->setDisabled(bun->Number() == 20);
    ui->pushButton_12->setDisabled(!bun->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}

void MainWindow::on_pushButton_15_clicked()
{
    bool bought = meat->Buy(User::u);
    if (bought) ui->pushButton_15->setText("Bought " + QString::number(User::u->Much(meat->ID())));
    else ui->pushButton_15->setText("Cannot buy more" + QString::number(User::u->Much(meat->ID())));
    ui->pushButton_14->setDisabled(meat->Number() == 10);
    ui->pushButton_15->setDisabled(!meat->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}


void MainWindow::on_pushButton_18_clicked()
{
    bool bought = water->Buy(User::u);
    if (bought) ui->pushButton_18->setText("Bought " + QString::number(User::u->Much(water->ID())));
    else ui->pushButton_18->setText("Cannot buy more" + QString::number(User::u->Much(water->ID())));
    ui->pushButton_17->setDisabled(water->Number() == 20);
    ui->pushButton_18->setDisabled(!water->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}


void MainWindow::on_pushButton_21_clicked()
{
    bool bought = coca->Buy(User::u);
    if (bought) ui->pushButton_21->setText("Bought " + QString::number(User::u->Much(coca->ID())));
    else ui->pushButton_21->setText("Cannot buy more" + QString::number(User::u->Much(coca->ID())));
    ui->pushButton_20->setDisabled(coca->Number() == 24);
    ui->pushButton_21->setDisabled(!coca->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}


void MainWindow::on_pushButton_24_clicked()
{
    bool bought = chicken->Buy(User::u);
    if (bought) ui->pushButton_24->setText("Bought " + QString::number(User::u->Much(chicken->ID())));
    else ui->pushButton_24->setText("Cannot buy more" + QString::number(User::u->Much(chicken->ID())));
    ui->pushButton_23->setDisabled(chicken->Number() == 20);
    ui->pushButton_24->setDisabled(!chicken->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}


void MainWindow::on_pushButton_33_clicked()
{
    bool bought = soap->Buy(User::u);
    if (bought) ui->pushButton_33->setText("Bought " + QString::number(User::u->Much(soap->ID())));
    else ui->pushButton_33->setText("Cannot buy more" + QString::number(User::u->Much(soap->ID())));
    ui->pushButton_45->setDisabled(soap->Number() == 30);
    ui->pushButton_33->setDisabled(!soap->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}


void MainWindow::on_pushButton_25_clicked()
{
    bool bought = wipes->Buy(User::u);
    if (bought) ui->pushButton_25->setText("Bought " + QString::number(User::u->Much(wipes->ID())));
    else ui->pushButton_25->setText("Cannot buy more" + QString::number(User::u->Much(wipes->ID())));
    ui->pushButton_41->setDisabled(wipes->Number() == 20);
    ui->pushButton_25->setDisabled(!wipes->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}


void MainWindow::on_pushButton_37_clicked()
{
    bool bought = sponge->Buy(User::u);
    if (bought) ui->pushButton_37->setText("Bought " + QString::number(User::u->Much(sponge->ID())));
    else ui->pushButton_37->setText("Cannot buy more" + QString::number(User::u->Much(sponge->ID())));
    ui->pushButton_44->setDisabled(sponge->Number() == 30);
    ui->pushButton_37->setDisabled(!sponge->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}

void MainWindow::on_pushButton_38_clicked()
{
    bool bought = bleach->Buy(User::u);
    if (bought) ui->pushButton_38->setText("Bought " + QString::number(User::u->Much(bleach->ID())));
    else ui->pushButton_38->setText("Cannot buy more" + QString::number(User::u->Much(bleach->ID())));
    ui->pushButton_36->setDisabled(bleach->Number() == 20);
    ui->pushButton_38->setDisabled(!bleach->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}


void MainWindow::on_pushButton_29_clicked()
{
    bool bought = pods->Buy(User::u);
    if (bought) ui->pushButton_29->setText("Bought " + QString::number(User::u->Much(pods->ID())));
    else ui->pushButton_29->setText("Cannot buy more" + QString::number(User::u->Much(pods->ID())));
    ui->pushButton_32->setDisabled(pods->Number() == 10);
    ui->pushButton_29->setDisabled(!pods->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}


void MainWindow::on_pushButton_43_clicked()
{
    bool bought = shampoo->Buy(User::u);
    if (bought) ui->pushButton_43->setText("Bought " + QString::number(User::u->Much(shampoo->ID())));
    else ui->pushButton_43->setText("Cannot buy more" + QString::number(User::u->Much(shampoo->ID())));
    ui->pushButton_31->setDisabled(shampoo->Number() == 20);
    ui->pushButton_43->setDisabled(!shampoo->Number());
    ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
}


void MainWindow::on_pushButton_4_clicked()
{
    c = new Create(this);
    c->show();
    c->setWindowTitle("Create your Sandwich");
    ui->pushButton_4->setText("Bought");
    ui->pushButton_5->setDisabled(!Sandwich::sandwich->Number());
    ui->pushButton_4->setDisabled(Sandwich::sandwich->Number());
}


void MainWindow::on_pushButton_6_clicked()
{
    bool removed = apple->Remove(User::u);
    if (removed) {
        if (!User::u->Much(apple->ID())) ui->pushButton_3->setText("Buy");
        else ui->pushButton_3->setText("Bought " + QString::number(User::u->Much(apple->ID())));
        ui->pushButton_3->setDisabled(!apple->Number());
        ui->pushButton_6->setDisabled(apple->Number() == 20);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    bool removed = Sandwich::sandwich->Remove(User::u);
    if (removed) {
        if (!User::u->Much(Sandwich::sandwich->ID())) ui->pushButton_4->setText("Buy");
        else ui->pushButton_4->setText("Bought " + QString::number(User::u->Much(Sandwich::sandwich->ID())));
        ui->pushButton_4->setDisabled(Sandwich::sandwich->Number());
        ui->pushButton_5->setDisabled(!Sandwich::sandwich->Number());
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_9_clicked()
{
    bool removed = carrot->Remove(User::u);
    if (removed) {
        if (!User::u->Much(carrot->ID())) ui->pushButton_8->setText("Buy");
        else ui->pushButton_8->setText("Bought " + QString::number(User::u->Much(carrot->ID())));
        ui->pushButton_9->setDisabled(!carrot->Number());
        ui->pushButton_8->setDisabled(carrot->Number() == 30);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_11_clicked()
{
    bool removed = bun->Remove(User::u);
    if (removed) {
        if (!User::u->Much(bun->ID())) ui->pushButton_12->setText("Buy");
        else ui->pushButton_12->setText("Bought " + QString::number(User::u->Much(bun->ID())));
        ui->pushButton_12->setDisabled(!bun->Number());
        ui->pushButton_11->setDisabled(bun->Number() == 20);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_14_clicked()
{
    bool removed = meat->Remove(User::u);
    if (removed) {
        if (!User::u->Much(meat->ID())) ui->pushButton_15->setText("Buy");
        else ui->pushButton_15->setText("Bought " + QString::number(User::u->Much(meat->ID())));
        ui->pushButton_15->setDisabled(!meat->Number());
        ui->pushButton_14->setDisabled(meat->Number() == 10);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_17_clicked()
{
    bool removed = water->Remove(User::u);
    if (removed) {
        if (!User::u->Much(water->ID())) ui->pushButton_18->setText("Buy");
        else ui->pushButton_18->setText("Bought " + QString::number(User::u->Much(water->ID())));
        ui->pushButton_18->setDisabled(!water->Number());
        ui->pushButton_17->setDisabled(water->Number() == 20);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_20_clicked()
{
    bool removed = coca->Remove(User::u);
    if (removed) {
        if (!User::u->Much(coca->ID())) ui->pushButton_21->setText("Buy");
        else ui->pushButton_21->setText("Bought " + QString::number(User::u->Much(coca->ID())));
        ui->pushButton_21->setDisabled(!coca->Number());
        ui->pushButton_20->setDisabled(coca->Number() == 24);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_23_clicked()
{
    bool removed = chicken->Remove(User::u);
    if (removed) {
        if (!User::u->Much(chicken->ID())) ui->pushButton_24->setText("Buy");
        else ui->pushButton_24->setText("Bought " + QString::number(User::u->Much(chicken->ID())));
        ui->pushButton_24->setDisabled(!chicken->Number());
        ui->pushButton_23->setDisabled(chicken->Number() == 20);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_45_clicked()
{
    bool removed = soap->Remove(User::u);
    if (removed) {
        if (!User::u->Much(soap->ID())) ui->pushButton_33->setText("Buy");
        else ui->pushButton_33->setText("Bought " + QString::number(User::u->Much(soap->ID())));
        ui->pushButton_33->setDisabled(!soap->Number());
        ui->pushButton_45->setDisabled(soap->Number() == 30);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_41_clicked()
{
    bool removed = wipes->Remove(User::u);
    if (removed) {
        if (!User::u->Much(wipes->ID())) ui->pushButton_25->setText("Buy");
        else ui->pushButton_25->setText("Bought " + QString::number(User::u->Much(wipes->ID())));
        ui->pushButton_25->setDisabled(!wipes->Number());
        ui->pushButton_41->setDisabled(wipes->Number() == 20);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_44_clicked()
{
    bool removed = sponge->Remove(User::u);
    if (removed) {
        if (!User::u->Much(sponge->ID())) ui->pushButton_37->setText("Buy");
        else ui->pushButton_37->setText("Bought " + QString::number(User::u->Much(sponge->ID())));
        ui->pushButton_37->setDisabled(!sponge->Number());
        ui->pushButton_44->setDisabled(sponge->Number() == 30);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_36_clicked()
{
    bool removed = bleach->Remove(User::u);
    if (removed) {
        if (!User::u->Much(bleach->ID())) ui->pushButton_38->setText("Buy");
        else ui->pushButton_38->setText("Bought " + QString::number(User::u->Much(bleach->ID())));
        ui->pushButton_38->setDisabled(!bleach->Number());
        ui->pushButton_36->setDisabled(bleach->Number() == 20);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_32_clicked()
{
    bool removed = pods->Remove(User::u);
    if (removed) {
        if (!User::u->Much(pods->ID())) ui->pushButton_29->setText("Buy");
        else ui->pushButton_29->setText("Bought " + QString::number(User::u->Much(pods->ID())));
        ui->pushButton_29->setDisabled(!pods->Number());
        ui->pushButton_32->setDisabled(pods->Number() == 10);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_pushButton_31_clicked()
{
    bool removed = shampoo->Remove(User::u);
    if (removed) {
        if (!User::u->Much(shampoo->ID())) ui->pushButton_43->setText("Buy");
        else ui->pushButton_43->setText("Bought " + QString::number(User::u->Much(shampoo->ID())));
        ui->pushButton_43->setDisabled(!shampoo->Number());
        ui->pushButton_31->setDisabled(shampoo->Number() == 20);
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}

void MainWindow::on_lineEdit_returnPressed()
{
    QString input = ui->lineEdit->text();
    bool rand;
    int value = input.toInt(&rand, 10);
    if (!rand) ui->label_16->setText("Invalid number");
    else {
        User::u->setBal(value);
        ui->label_16->setText("");
        ui->lineEdit->setText("");
        ui->label_12->setText("Balance: " + QString::number(User::u->Bal(), 'f', 2) + "€");
    }
}


void MainWindow::on_actionLog_out_Quit_triggered()
{
    close();
}

