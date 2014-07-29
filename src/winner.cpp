#include "Headers/winner.hpp"
#include "ui_winner.h"

Winner::Winner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Winner)
{
    ui->setupUi(this);

    QMovie *movie = new QMovie(":/Images/bananahuge.gif");
    movie->setScaledSize(ui->label_2->size());
    ui->label_2->setMovie(movie);
    movie->start();
}

Winner::~Winner()
{
    delete ui;
}

void Winner::on_pushButton_clicked()
{
    this-> close();
}
