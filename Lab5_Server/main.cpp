#include "mainwindow.h"

#include <QtGui>
#include "MyServer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyServer    server(2323);
    server.show();
    return a.exec();
}
