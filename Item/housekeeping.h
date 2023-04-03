#ifndef HOUSEKEEPING_H
#define HOUSEKEEPING_H

#include "item.h"

class Housekeeping : public Item
{
private:
    bool safe;
public:
    Housekeeping(float Price, int Number, QString Name, int ID, bool Safe);
    void Description(QLabel *label);
};

#endif // HOUSEKEEPING_H
