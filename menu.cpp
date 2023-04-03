#include "menu.h"
#include "User/user.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);

    QPixmap image("C:/Users/marin/Documents/UGroceryDelivery/113522-200.png");
    ui->label_6->setPixmap(image);
}

menu::~menu()
{
    delete ui;
}



void menu::on_pushButton_clicked()
{
    QString input = ui->lineEdit->text();
    int valid = 0;
    if (input == "") {
        ui->label_16->setText("Invalid name");
        valid += 1;
    } else {
        User::u->setF(input);
        ui->label_17->setText("");
    } input = ui->lineEdit_2->text();
    if (input == "") {
        ui->label_17->setText("Invalid name");
        valid += 1;
    } else {
        User::u->setL(input);
        ui->label_17->setText("");
    } if (valid == 0) close();
}


void menu::on_horizontalSlider_sliderMoved(int position)
{
    ui->label_4->setText(QString::number(position) + "€");
}

