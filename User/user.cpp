#include "../User/user.h"
#include <qlabel.h>

QString User::Fname(){
    return fname;
}

QString User::Lname(){
    return fname;
}

int User::Bal(){
    return bal;
}

Item *User::Items(int i){
    return items[i];
}

int *User::Much(){
    return much;
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

User::User(QString First, QString Last, int Bal){
    fname = First;
    lname = Last;
    bal = Bal;
    for (int i = 0; i < 100; i++) {
        items[i] = 0;
        much[i] = 0;
    }
}

bool User::Contains(int ID){
    return (items[ID]->Number() != 0);
}
