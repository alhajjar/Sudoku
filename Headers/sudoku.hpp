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

private:
    Ui::Sudoku *ui;
    QSize size;
    QVector<int> vector;
    QVector<int> vector0;
    QVector<int> vector1;
    QVector<int> vector2;
    QVector<int> vector3;
    QVector<int> vector4;
    QVector<int> vector5;
    QVector<int> vector6;
    QVector<int> vector7;
    QVector<int> vector8;
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
