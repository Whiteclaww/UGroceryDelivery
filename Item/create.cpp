#include "create.h"

int ItemCreate::Total(){
    return total;
}

QString ItemCreate::Items(int i){
    return items[i];
}

ItemCreate::ItemCreate(){
    total = 0;
    for (int i = 0; i < 9; i++) items[i] = "";
}

void ItemCreate::setIngredient(int i, QString Ingredient){
    items[i] = Ingredient;
}

QString ItemCreate::getItem(int i){
    return items[i];
}
