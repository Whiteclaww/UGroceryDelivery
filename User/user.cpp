#include "../User/user.h"
#include <qlabel.h>

QString User::Fname(){
    return fname;
}

QString User::Lname(){
    return lname;
}

float User::Bal(){
    return bal;
}

void User::setBal(float i){
    bal += i;
}

Item *User::Items(int i){
    return items[i];
}

int User::Much(int i){
    return much[i];
}

void User::setF(QString n){
    fname = n;
}

void User::setL(QString n){
    lname = n;
}

User::User(QString First, QString Last){
    fname = First;
    lname = Last;
    bal = 0;
    for (int i = 0; i < 100; i++) {
        items[i] = 0;
        much[i] = 0;
    }
}

User::User(QString First, QString Last, float Bal){
    fname = First;
    lname = Last;
    bal = Bal;
    for (int i = 0; i < 100; i++) {
        items[i] = 0;
        much[i] = 0;
    }
}

bool User::Contains(int ID){
    return (much[ID] != 0);
}

User *User::u = new User("Marine", "Collet", 99);
