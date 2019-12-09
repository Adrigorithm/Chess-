#include "mainwindow.h"
#include "board.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Board board;
    board.init();
    return a.exec();
}
