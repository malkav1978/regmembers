#include "mainwindow.h"
#include <QApplication>

int main(int argc, char **argv)
{
    QApplication regmembers(argc, argv);

    MainWindow window;
    window.show();

    return regmembers.exec();
}
