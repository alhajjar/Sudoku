#ifndef LOSER_HPP
#define LOSER_HPP

#include <QDialog>

namespace Ui {
class Loser;
}

class Loser : public QDialog
{
    Q_OBJECT

public:
    explicit Loser(QWidget *parent = 0);
    ~Loser();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Loser *ui;
};

#endif // LOSER_HPP
