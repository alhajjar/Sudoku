#ifndef WINNER_HPP
#define WINNER_HPP

#include <QDialog>
#include<QMovie>

namespace Ui {
class Winner;
}

class Winner : public QDialog
{
    Q_OBJECT

public:
    explicit Winner(QWidget *parent = 0);
    ~Winner();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Winner *ui;
};

#endif // WINNER_HPP
