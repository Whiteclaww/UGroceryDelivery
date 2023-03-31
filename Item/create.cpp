#include "create.h"

int Create::Total(){
    return total;
}

QString Create::Items(int i){
    return items[i];
}

Create::Create(){
    total = 0;
    for (int i = 0; i < 9; i++) items[i] = "";
}
