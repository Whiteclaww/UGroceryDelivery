#include "sandwich.h"

Sandwich::Sandwich(float Price, int Number, QString Name, int ID, QString StorageDate, QString *Ingredients[6]) : Food(Price, Number, Name, ID, StorageDate)
{
    for (int i = 0; i < 6; i++){
        ingredients[i] = Ingredients[i];
    }
}
