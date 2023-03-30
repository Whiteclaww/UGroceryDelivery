#include "item.h"
#include "../User/user.h"

bool operator+(User& user, Item& item){
    bool buy = 0;
    if (item.available){
        user.bal -= item.price;
        item.number--;
        if (item.number == 0) item.available = 0;
        buy = 1;
    } return buy;
}

int Item::ID(){
    return id;
}

int Item::Number(){
    return number;
}

QString Item::Name(){
    return name;
}

Item::Item(float Price, int Number, QString Name, int ID){
    price = Price;
    available = 1;
    number = Number;
    name = Name;
    id = ID;
}

Item::~Item(){
    price = 0;
    available = 0;
    number = 0;
    name = 0;
    id = 0;
    free(this);
}

bool Item::Buy(User user){
    bool buy = 0;
    if (available){
        user.bal -= price;
        number--;
        if (number == 0) available = 0;
        buy = 1;
        if (!user.items[id]) user.items[id] = this;
        else user.items[id]->number--;
        user.much[id]++;
    } return buy;
}

bool Item::Remove(User user){
    bool sell = 0;
    if (user.Contains(id)){
        user.bal += price;
        number++;
        if (number != 0) available = 1;
        sell = 1;
    } return sell;
}
