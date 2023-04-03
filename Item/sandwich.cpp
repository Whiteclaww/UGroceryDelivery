#include "sandwich.h"

Sandwich::Sandwich(float Price, int Number, QString Name, int ID, QString StorageDate) : Food(Price, Number, Name, ID, StorageDate), ItemCreate(), Item(Price, Number, Name, ID){
}

void Sandwich::Description(QLabel *label){
    QString actual = "Main Ingredient: ";
    if (getItem(0) != "") actual += getItem(0);
    actual += "\nSides: ";
    for (int i = 1; i < 7; i++) if (getItem(i) != "") actual += "\n- " + getItem(i);
    actual += "\nSauces: ";
    for (int i = 7; i < 9; i++) if (getItem(i) != "") actual += "\n- " + getItem(i);
    label->setText("Item: " + name + "\n"
                   + actual + "\n" +
                   "Price: " + QString::number(price) + "€\n"
                   "Consume within: " + StorageDate());
}

Sandwich *Sandwich::sandwich = new Sandwich(3, 1, "Sandwich", 99, "1 day");

void Sandwich::setPrice(float i){
    price += i;
}


void Sandwich::setItem(int i, QString ingredient){
    setIngredient(i, ingredient);
}
