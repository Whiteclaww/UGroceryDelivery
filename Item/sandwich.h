#ifndef SANDWICH_H
#define SANDWICH_H

#include "food.h"
#include "create.h"

class Sandwich : public Food, public Create{
private:
    QString* ingredients[6];

public:
    Sandwich(float Price, int Number, QString Name, int ID, QString StorageDate, QString *Ingredients[6]);
};

#endif // SANDWICH_H
