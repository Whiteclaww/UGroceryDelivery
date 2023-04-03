#include "housekeeping.h"

Housekeeping::Housekeeping(float Price, int Number, QString Name, int ID, bool Safe) : Item(Price, Number, Name, ID)
{
    safe = Safe;
}

void Housekeeping::Description(QLabel *label){
    QString isSafe;
    if (safe) isSafe = "Children-friendly";
    else isSafe = "Not Children-friendly";
    label->setText("Item: " + name + "\n"
                   "Available: " + QString::number(number) + "\n"
                   "Price: " + QString::number(price) + "€\n"
                   "Safety: " + isSafe);
}
