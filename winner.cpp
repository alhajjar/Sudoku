#include "winner.hpp"
#include "ui_winner.h"
#include<QMovie>

Winner::Winner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Winner)
{
    ui->setupUi(this);

    QMovie *movie = new QMovie(":/bananahuge.gif");
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
