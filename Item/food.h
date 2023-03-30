#ifndef FOOD_H
#define FOOD_H

#include "item.h"

class Food : public Item
{
private:
    QString storageDate;

public:
    Food(float Price, int Number, QString Name, int ID, QString StorageDate);
    QString StorageDate();
    void Description(QLabel *label);
};

#endif // FOOD_H
