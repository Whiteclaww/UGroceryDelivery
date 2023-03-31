#ifndef USER_H
#define USER_H

#include <QString>
#include "../Item/item.h"

class Item;

class User{
private:
    QString fname;
    QString lname;
    int bal;
    Item *items[100];
    int much[100];

public:
    //overloading + between user and item to buy item
    friend bool operator+(User& user, Item& item);
    friend bool Item::Buy(User *user);
    friend bool Item::Remove(User *user);

    //getters
    QString Fname();
    QString Lname();
    int Bal();
    Item *Items(int i);
    int Much(int i);

    //define
    User(QString First, QString Last);
    User(QString First, QString Last, int Bal);
    bool Contains(int ID);
};

#endif // USER_H
