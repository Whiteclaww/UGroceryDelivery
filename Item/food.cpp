#include "food.h"

Food::Food(float Price, int Number, QString Name, int ID, QString StorageDate) : Item(Price, Number, Name, ID)
{
    storageDate = StorageDate;
}

QString Food::StorageDate(){
    return storageDate;
}

void Food::Description(QLabel *label){
    label->setText("Item: " + name + "\n"
                   "Available: " + QString::number(number) + "\n"
                   "Price: " + QString::number(price) + "€\n"
                   "Consume within: " + storageDate);
}
