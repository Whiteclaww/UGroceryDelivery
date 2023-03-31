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
}

