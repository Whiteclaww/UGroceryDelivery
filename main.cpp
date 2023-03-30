#include "mainwindow.h"
#include <iostream>
#include <QApplication>

#include "User/user.h"
#include "Item/food.h"
#include "list.h"

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();




    int IDs[100];
    for (int i = 0; i < 100; i++) IDs[i] = 0;

    int o = 5;
    int y = o << 1;
    #if y > 5
    #endif
    return a.exec();
    delete(apple);
}
