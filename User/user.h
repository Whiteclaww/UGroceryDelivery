#ifndef USER_H
#define USER_H

#include <QString>
#include "../Item/item.h"

class Item;

class User{
private:
    QString fname;
    QString lname;
    float bal;
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
    float Bal();
    void setBal(float i);
    Item *Items(int i);
    int Much(int i);
    void setF(QString);
    void setL(QString);

    //define
    User(QString First, QString Last);
    User(QString First, QString Last, float Bal);
    bool Contains(int ID);

    static User *u;
};

#endif // USER_H
