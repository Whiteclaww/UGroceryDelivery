#ifndef ITEMCREATE_H
#define ITEMCREATE_H

#include "item.h"

class ItemCreate : virtual public Item{
private:
    QString items[9];
    int total;

public:
    int Total();
    QString Items(int);
    ItemCreate();
    void setIngredient(int i, QString Ingredient);
    QString getItem(int i);
};

#endif // CREATE_H
