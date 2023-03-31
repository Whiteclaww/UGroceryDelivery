#include "sandwich.h"

Sandwich::Sandwich(float Price, int Number, QString Name, int ID, QString StorageDate) : Food(Price, Number, Name, ID, StorageDate), Create(){
    for (int i = 0; i < 6; i++){
        ingredients[i] = "";
    }
}

void Sandwich::Description(QLabel *label){
    label->setText("Item: " + name + "\n"
                   "Available: " + QString::number(number) + "\n"
                   "Price: " + QString::number(price) + "\n"
                   "Consume within: " + StorageDate());
}

void Sandwich::setIngredient(int i, QString Ingredient){
    ingredients[i] = Ingredient;
}
