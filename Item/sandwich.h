#ifndef SANDWICH_H
#define SANDWICH_H

#include "food.h"
#include "create.h"

class Sandwich : public Food, public Create{
private:
    QString ingredients[9];

public:
    Sandwich(float Price, int Number, QString Name, int ID, QString StorageDate);
    void Description(QLabel *label);
    void setIngredient(int i, QString Ingredient);
};

#endif // SANDWICH_H
