#include "loser.hpp"
#include "ui_loser.h"
#include <QMovie>

Loser::Loser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Loser)
{
    ui->setupUi(this);
    //QImage *qm = new QImage(":/middle-finger-rude-gesture-smiley-emoticon.gif");
    // ui->label_2->setPixmap(QPixmap::fromImage(*qm));
    QMovie *movie = new QMovie(":/cowboy-shooting-gun-smiley-emoticon.gif");
    movie->setScaledSize(ui->label_2->size());
    ui->label_2->setMovie(movie);
    movie->start();
}
Loser::~Loser()
{
    delete ui;
}

void Loser::on_pushButton_clicked()
{
    this->close();
}
