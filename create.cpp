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
    sandwich->setIngredient(0, "Chicken");
    sandwich->setPrice(1);
}


void Create::on_radioButton_2_clicked()
{
    sandwich->setIngredient(0, "Beef");
    sandwich->setPrice(1);
}


void Create::on_radioButton_3_clicked()
{
    sandwich->setIngredient(0, "Vegan Burger Patty");
    sandwich->setPrice(1);
}

void Create::on_checkBox_stateChanged(int arg1)
{
    if (arg1){
        sandwich->setIngredient(1, "Cheddar Cheese");
        sandwich->setPrice(0.1);
    } else {
        sandwich->setIngredient(1, "");
        sandwich->setPrice(-0.1);
    }
}


void Create::on_pushButton_clicked()
{

}

