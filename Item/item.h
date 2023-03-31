#ifndef ITEM_H
#define ITEM_H

#include <QLabel>
#include <QString>

template<class T>
bool Buy();

class User;

class Item{
protected:
    float price;
    bool available;
    int number;
    QString name;
    int id;

public:
    //overloading + between user and item to buy item
    friend bool operator+(User& user, Item& item);

    int ID();
    int Number();
    QString Name();

    //define
    Item(float Price = 0, int Number = 0, QString Name = 0, int ID = 0);
    ~Item();
    virtual void Description(QLabel *label) = 0;
    bool Buy(User *user);
    bool Remove(User *user);
};

#endif // ITEM_H
