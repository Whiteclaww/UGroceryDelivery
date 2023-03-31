#include "sandwich.h"

Sandwich::Sandwich(float Price, int Number, QString Name, int ID, QString StorageDate) : Food(Price, Number, Name, ID, StorageDate), ItemCreate(){
}

void Sandwich::Description(QLabel *label){
    QString actual = "Main Ingredient: ";
    if (getItem(0) != "") actual += getItem(0);
    actual += "\nSides: ";
    for (int i = 1; i < 7; i++) if (getItem(i) != "") actual += getItem(i) + "\n    - ";
    actual += "\nSauces: ";
    for (int i = 7; i < 9; i++) if (getItem(i) != "") actual += getItem(i) + "\n    - ";
    label->setText("Item: " + name + "\n"
                   + actual + "\n" +
                   "Price: " + QString::number(price) + "\n"
                   "Consume within: " + StorageDate());
}

void Sandwich::setPrice(float i){
    price += i;
}
