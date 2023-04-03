#include "mainwindow.h"
#include <iostream>
#include <QApplication>

#include "menu.h"

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    menu m;
    m.show();

    int u = 5;
    int y = u << 1;
#if y == 5
    cout << u << endl;
#else
    cout << y << endl;
#endif

    return a.exec();
}
