#ifndef SANDWICH_H
#define SANDWICH_H

#include "food.h"
#include "itemcreate.h"

class Sandwich : public Food, public ItemCreate{

public:
    Sandwich(float Price, int Number, QString Name, int ID, QString StorageDate);
    void Description(QLabel *label);
    void setPrice(float i);
    void setItem(int i, QString ingredient);


    static Sandwich *sandwich;
};

#endif // SANDWICH_H
