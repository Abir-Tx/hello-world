#include "helloworld.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    helloWorld firstApp;

    firstApp.setMinimumSize(300, 400);
    firstApp.show();


    return a.exec();
}
