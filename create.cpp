#include "create.h"
#include "ui_create.h"
#include "list.h"

Create::Create(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Create)
{
    ui->setupUi(this);
}

Create::~Create()
{
    delete ui;
}

void Create::on_radioButton_clicked()
{
    Sandwich::sandwich->setItem(0, "Chicken");
    Sandwich::sandwich->setPrice(1);
}


void Create::on_radioButton_2_clicked()
{
    Sandwich::sandwich->setItem(0, "Beef");
    Sandwich::sandwich->setPrice(1);
}


void Create::on_radioButton_3_clicked()
{
    Sandwich::sandwich->setItem(0, "Vegan Burger Patty");
    Sandwich::sandwich->setPrice(1);
}

void Create::on_checkBox_stateChanged(int arg1)
{
    if (arg1){
        Sandwich::sandwich->setItem(1, "Cheddar Cheese");
        Sandwich::sandwich->setPrice(0.1);
    } else {
        Sandwich::sandwich->setItem(1, "");
        Sandwich::sandwich->setPrice(-0.1);
    }
}


void Create::on_pushButton_clicked()
{
    bool bought = Sandwich::sandwich->Buy(User::u);
    hide();
    delete(this);
}


void Create::on_checkBox_2_stateChanged(int arg1)
{
    if (arg1){
        Sandwich::sandwich->setItem(2, "Lettuce");
        Sandwich::sandwich->setPrice(0.1);
    } else {
        Sandwich::sandwich->setItem(2, "");
        Sandwich::sandwich->setPrice(-0.1);
    }
}


void Create::on_checkBox_3_stateChanged(int arg1)
{
    if (arg1){
        Sandwich::sandwich->setItem(3, "Sweetcorn");
        Sandwich::sandwich->setPrice(0.1);
    } else {
        Sandwich::sandwich->setItem(3, "");
        Sandwich::sandwich->setPrice(-0.1);
    }
}


void Create::on_checkBox_4_stateChanged(int arg1)
{
    if (arg1){
        Sandwich::sandwich->setItem(4, "Onions");
        Sandwich::sandwich->setPrice(0.1);
    } else {
        Sandwich::sandwich->setItem(4, "");
        Sandwich::sandwich->setPrice(-0.1);
    }
}


void Create::on_checkBox_5_stateChanged(int arg1)
{
    if (arg1){
        Sandwich::sandwich->setItem(5, "Tomato");
        Sandwich::sandwich->setPrice(0.1);
    } else {
        Sandwich::sandwich->setItem(5, "");
        Sandwich::sandwich->setPrice(-0.1);
    }
}


void Create::on_checkBox_6_stateChanged(int arg1)
{
    if (arg1){
        Sandwich::sandwich->setItem(6, "Olives");
        Sandwich::sandwich->setPrice(0.1);
    } else {
        Sandwich::sandwich->setItem(6, "");
        Sandwich::sandwich->setPrice(-0.1);
    }
}


void Create::on_checkBox_7_stateChanged(int arg1)
{
    if (arg1){
        Sandwich::sandwich->setItem(7, "BBQ Sauce");
        Sandwich::sandwich->setPrice(0.1);
    } else {
        Sandwich::sandwich->setItem(7, "");
        Sandwich::sandwich->setPrice(-0.1);
    }
}


void Create::on_checkBox_8_stateChanged(int arg1)
{
    if (arg1){
        Sandwich::sandwich->setItem(8, "Mayonnaise");
        Sandwich::sandwich->setPrice(0.1);
    } else {
        Sandwich::sandwich->setItem(8, "");
        Sandwich::sandwich->setPrice(-0.1);
    }
}

