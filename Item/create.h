#ifndef CREATE_H
#define CREATE_H

#include "item.h"

class Create : virtual public Item{
private:
    QString items[9];
    int total;

public:
    int Total();
    QString Items(int);
    Create();
};

#endif // CREATE_H
