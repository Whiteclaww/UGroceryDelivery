#ifndef SANDWICH_H
#define SANDWICH_H

#include "food.h"
#include "create.h"

class Sandwich : public Food, public ItemCreate{

public:
    Sandwich(float Price, int Number, QString Name, int ID, QString StorageDate);
    void Description(QLabel *label);
    void setPrice(float i);
};

#endif // SANDWICH_H
