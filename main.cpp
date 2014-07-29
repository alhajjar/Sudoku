#include "sudoku.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sudoku w;
    QSize size;
    size = w.getSize();
    w.resize(size + size/8);
    w.show();


    return a.exec();
}
