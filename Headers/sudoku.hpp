#ifndef SUDOKU_HPP
#define SUDOKU_HPP

#include <QMainWindow>
#include <iostream>
#include "winner.hpp"
#include "loser.hpp"

using namespace std;

namespace Ui {
class Sudoku;
}

class Sudoku : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sudoku(QWidget *parent = 0);
    ~Sudoku();
    QSize getSize();
    void random();
    void randomSet();

private:
    Ui::Sudoku *ui;
    QSize size;
    QVector<int> my_vector;
    Winner winner;
    Loser loser;

public slots:
    void print();

private slots:
    void on_Generate_clicked();
    void on_clear_clicked();
    void on_Show_clicked();
};

#endif // SUDOKU_HPP
