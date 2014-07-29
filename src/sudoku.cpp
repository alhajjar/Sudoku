#include "Headers/sudoku.hpp"
#include "ui_sudoku.h"
#include <QDebug>
#include <set>
#include <vector>


Sudoku::Sudoku(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sudoku)
{
    ui->setupUi(this);

    size.setWidth(700);
    size.setHeight(800);

    randomSet();
    //    random();

    connect(ui->r1,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r2,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r3,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r4,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r5,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r6,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r7,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r8,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r9,SIGNAL(textEdited(QString)),this, SLOT(print()));

    connect(ui->r1_2,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r2_2,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r3_2,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r4_2,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r5_2,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r6_2,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r7_2,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r8_2,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r9_2,SIGNAL(textEdited(QString)),this, SLOT(print()));

    connect(ui->r1_3,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r2_3,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r3_3,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r4_3,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r5_3,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r6_3,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r7_3,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r8_3,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r9_3,SIGNAL(textEdited(QString)),this, SLOT(print()));

    connect(ui->r1_4,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r2_4,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r3_4,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r4_4,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r5_4,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r6_4,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r7_4,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r8_4,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r9_4,SIGNAL(textEdited(QString)),this, SLOT(print()));

    connect(ui->r1_5,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r2_5,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r3_5,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r4_5,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r5_5,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r6_5,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r7_5,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r8_5,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r9_5,SIGNAL(textEdited(QString)),this, SLOT(print()));

    connect(ui->r1_6,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r2_6,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r3_6,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r4_6,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r5_6,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r6_6,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r7_6,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r8_6,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r9_6,SIGNAL(textEdited(QString)),this, SLOT(print()));

    connect(ui->r1_7,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r2_7,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r3_7,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r4_7,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r5_7,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r6_7,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r7_7,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r8_7,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r9_7,SIGNAL(textEdited(QString)),this, SLOT(print()));

    connect(ui->r1_8,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r2_8,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r3_8,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r4_8,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r5_8,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r6_8,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r7_8,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r8_8,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r9_8,SIGNAL(textEdited(QString)),this, SLOT(print()));

    connect(ui->r1_9,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r2_9,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r3_9,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r4_9,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r5_9,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r6_9,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r7_9,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r8_9,SIGNAL(textEdited(QString)),this, SLOT(print()));
    connect(ui->r9_9,SIGNAL(textEdited(QString)),this, SLOT(print()));

      ui->Show->hide();

    ui->r1->setText(QString::number(my_vector.at(0)));
    ui->r1->setDisabled(true);
    ui->r5->setText(QString::number(my_vector.at(4)));
    ui->r5->setDisabled(true);
    ui->r7->setText(QString::number(my_vector.at(6)));
    ui->r7->setDisabled(true);
    ui->r2_2->setText(QString::number(my_vector.at(2)));
    ui->r2_2->setDisabled(true);;
    ui->r6_2->setText(QString::number(my_vector.at(6)));
    ui->r6_2->setDisabled(true);
    ui->r2_3->setText(QString::number(my_vector.at(3)));
    ui->r2_3->setDisabled(true);
    ui->r6_3->setText(QString::number(my_vector.at(7)));
    ui->r6_3->setDisabled(true);
    ui->r9_3->setText(QString::number(my_vector.at(1)));
    ui->r9_3->setDisabled(true);
    ui->r3_4->setText(QString::number(my_vector.at(5)));
    ui->r3_4->setDisabled(true);
    ui->r6_4->setText(QString::number(my_vector.at(8)));
    ui->r6_4->setDisabled(true);
    ui->r7_5->setText(QString::number(my_vector.at(1)));
    ui->r7_5->setDisabled(true);
    ui->r4_6->setText(QString::number(my_vector.at(8)));
    ui->r4_6->setDisabled(true);
    ui->r6_6->setText(QString::number(my_vector.at(1)));
    ui->r6_6->setDisabled(true);
    ui->r1_7->setText(QString::number(my_vector.at(6)));
    ui->r1_7->setDisabled(true);
    ui->r3_7->setText(QString::number(my_vector.at(8)));
    ui->r3_7->setDisabled(true);
    ui->r6_7->setText(QString::number(my_vector.at(2)));
    ui->r6_7->setDisabled(true);
    ui->r3_8->setText(QString::number(my_vector.at(0)));
    ui->r3_8->setDisabled(true);
    ui->r2_9->setText(QString::number(my_vector.at(0)));
    ui->r2_9->setDisabled(true);
    ui->r5_9->setText(QString::number(my_vector.at(3)));
    ui->r5_9->setDisabled(true);
    ui->r9_9->setText(QString::number(my_vector.at(7)));
    ui->r9_9->setDisabled(true);

    ui->r1->setStyleSheet("QLineEdit{background: orange;}");
    ui->r2->setStyleSheet("QLineEdit{background: orange;}");
    ui->r3->setStyleSheet("QLineEdit{background: orange;}");
    ui->r1_2->setStyleSheet("QLineEdit{background: orange;}");
    ui->r2_2->setStyleSheet("QLineEdit{background: orange;}");
    ui->r3_2->setStyleSheet("QLineEdit{background: orange;}");
    ui->r1_3->setStyleSheet("QLineEdit{background: orange;}");
    ui->r2_3->setStyleSheet("QLineEdit{background: orange;}");
    ui->r3_3->setStyleSheet("QLineEdit{background: orange;}");

    ui->r4->setStyleSheet("QLineEdit{background: green;}");
    ui->r5->setStyleSheet("QLineEdit{background: green;}");
    ui->r6->setStyleSheet("QLineEdit{background: green;}");
    ui->r4_2->setStyleSheet("QLineEdit{background: green;}");
    ui->r5_2->setStyleSheet("QLineEdit{background: green;}");
    ui->r6_2->setStyleSheet("QLineEdit{background: green;}");
    ui->r4_3->setStyleSheet("QLineEdit{background: green;}");
    ui->r5_3->setStyleSheet("QLineEdit{background: green;}");
    ui->r6_3->setStyleSheet("QLineEdit{background: green;}");

    ui->r7->setStyleSheet("QLineEdit{background: lightblue;}");
    ui->r8->setStyleSheet("QLineEdit{background: lightblue;}");
    ui->r9->setStyleSheet("QLineEdit{background: lightblue;}");
    ui->r7_2->setStyleSheet("QLineEdit{background: lightblue;}");
    ui->r8_2->setStyleSheet("QLineEdit{background: lightblue;}");
    ui->r9_2->setStyleSheet("QLineEdit{background: lightblue;}");
    ui->r7_3->setStyleSheet("QLineEdit{background: lightblue;}");
    ui->r8_3->setStyleSheet("QLineEdit{background: lightblue;}");
    ui->r9_3->setStyleSheet("QLineEdit{background: lightblue;}");

    ui->r1_4->setStyleSheet("QLineEdit{background: yellow;}");
    ui->r2_4->setStyleSheet("QLineEdit{background: yellow;}");
    ui->r3_4->setStyleSheet("QLineEdit{background: yellow;}");
    ui->r1_5->setStyleSheet("QLineEdit{background: yellow;}");
    ui->r2_5->setStyleSheet("QLineEdit{background: yellow;}");
    ui->r3_5->setStyleSheet("QLineEdit{background: yellow;}");
    ui->r1_6->setStyleSheet("QLineEdit{background: yellow;}");
    ui->r2_6->setStyleSheet("QLineEdit{background: yellow;}");
    ui->r3_6->setStyleSheet("QLineEdit{background: yellow;}");

    ui->r4_4->setStyleSheet("QLineEdit{background: blue;}");
    ui->r5_4->setStyleSheet("QLineEdit{background: blue;}");
    ui->r6_4->setStyleSheet("QLineEdit{background: blue;}");
    ui->r4_5->setStyleSheet("QLineEdit{background: blue;}");
    ui->r5_5->setStyleSheet("QLineEdit{background: blue;}");
    ui->r6_5->setStyleSheet("QLineEdit{background: blue;}");
    ui->r4_6->setStyleSheet("QLineEdit{background: blue;}");
    ui->r5_6->setStyleSheet("QLineEdit{background: blue;}");
    ui->r6_6->setStyleSheet("QLineEdit{background: blue;}");

    ui->r7_4->setStyleSheet("QLineEdit{background: magenta;}");
    ui->r8_4->setStyleSheet("QLineEdit{background: magenta;}");
    ui->r9_4->setStyleSheet("QLineEdit{background: magenta;}");
    ui->r7_5->setStyleSheet("QLineEdit{background: magenta;}");
    ui->r8_5->setStyleSheet("QLineEdit{background: magenta;}");
    ui->r9_5->setStyleSheet("QLineEdit{background: magenta;}");
    ui->r7_6->setStyleSheet("QLineEdit{background: magenta;}");
    ui->r8_6->setStyleSheet("QLineEdit{background: magenta;}");
    ui->r9_6->setStyleSheet("QLineEdit{background: magenta;}");

    ui->r1_7->setStyleSheet("QLineEdit{background: cyan;}");
    ui->r2_7->setStyleSheet("QLineEdit{background: cyan;}");
    ui->r3_7->setStyleSheet("QLineEdit{background: cyan;}");
    ui->r1_8->setStyleSheet("QLineEdit{background: cyan;}");
    ui->r2_8->setStyleSheet("QLineEdit{background: cyan;}");
    ui->r3_8->setStyleSheet("QLineEdit{background: cyan;}");
    ui->r1_9->setStyleSheet("QLineEdit{background: cyan;}");
    ui->r2_9->setStyleSheet("QLineEdit{background: cyan;}");
    ui->r3_9->setStyleSheet("QLineEdit{background: cyan;}");

    //    ui->r4_7->setStyleSheet("QLineEdit{background: black;}");
    //    ui->r5_7->setStyleSheet("QLineEdit{background: black;}");
    //    ui->r6_7->setStyleSheet("QLineEdit{background: black;}");
    //    ui->r4_8->setStyleSheet("QLineEdit{background: black;}");
    //    ui->r5_8->setStyleSheet("QLineEdit{background: black;}");
    //    ui->r6_8->setStyleSheet("QLineEdit{background: black;}");
    //    ui->r4_9->setStyleSheet("QLineEdit{background: black;}");
    //    ui->r5_9->setStyleSheet("QLineEdit{background: black;}");
    //    ui->r6_9->setStyleSheet("QLineEdit{background: black;}");

    ui->r7_7->setStyleSheet("QLineEdit{background: red;}");
    ui->r8_7->setStyleSheet("QLineEdit{background: red;}");
    ui->r9_7->setStyleSheet("QLineEdit{background: red;}");
    ui->r7_8->setStyleSheet("QLineEdit{background: red;}");
    ui->r8_8->setStyleSheet("QLineEdit{background: red;}");
    ui->r9_8->setStyleSheet("QLineEdit{background: red;}");
    ui->r7_9->setStyleSheet("QLineEdit{background: red;}");
    ui->r8_9->setStyleSheet("QLineEdit{background: red;}");
    ui->r9_9->setStyleSheet("QLineEdit{background: red;}");

}

QSize Sudoku::getSize(){
    return size;
}
void Sudoku::randomSet(){
    my_vector.clear();
    my_vector.resize(9);
        for (int j = 0 ; j <9 ;j++){
            my_vector.append(144);
        }
    set<int> indexes;
    vector <int> choices;
    vector <int> temp;
    temp.clear();
    choices.resize(9);
    temp.resize(20);
    int max_index = 9;
    srand ( time(NULL) );
    while (indexes.size() <9 )
    {
        int random_index =  1+rand() % max_index;
        if (indexes.find(random_index) == indexes.end())
        {
            choices.push_back(temp.at(random_index));
            indexes.insert(random_index);
        }
    }
    int j = 0;

    for (set<int>::iterator i = indexes.begin(); i != indexes.end(); i++) {
        choices.at(j)= *i;
        j++;
    }
    choices.resize(9);
    random_shuffle(choices.begin(), choices.end());
    my_vector = QVector<int>::fromStdVector(choices);
}

void Sudoku::random(){
    srand ( time(NULL) );
    my_vector.clear();

    for (int j = 0 ; j <9 ;j++){
        my_vector.append(144);
    }

    int i = 1;
    bool boolean = 1;
    for (int j = 0 ; j <9 ;j++){

        i =  1+ rand() % 9;

        for (int k = 0 ; k <9 ;k++){
            if(j != 0)
            {
                if ( i!= my_vector.at(k))
                {
                    boolean = 1;
                }
                else
                {
                    boolean = 0;
                    break;
                }
            }
        }

        if (boolean == 1)
        {
            my_vector.insert(j,i);
            // qDebug()<< my_vector.at(j);
        }
        else
            j--;
    }

    my_vector.resize(9);
}

Sudoku::~Sudoku()
{
    delete ui;
}
void Sudoku::print(){

    if ( ui->r1->text() == QString::number(my_vector.at(0))
         && ui->r2->text()== QString::number(my_vector.at(1))
         &&  ui->r3->text() == QString::number(my_vector.at(2))
         && ui->r4->text() == QString::number(my_vector.at(3))
         && ui->r5->text() == QString::number(my_vector.at(4))
         && ui->r6->text() == QString::number(my_vector.at(5))
         && ui->r7->text() == QString::number(my_vector.at(6))
         && ui->r8->text() == QString::number(my_vector.at(7))
         && ui->r9->text() == QString::number(my_vector.at(8))

         && ui->r1_2->text() == QString::number(my_vector.at(1))
         && ui->r2_2->text()== QString::number(my_vector.at(2))
         &&  ui->r3_2->text() == QString::number(my_vector.at(3))
         && ui->r4_2->text() == QString::number(my_vector.at(4))
         && ui->r5_2->text() == QString::number(my_vector.at(5))
         && ui->r6_2->text() == QString::number(my_vector.at(6))
         && ui->r7_2->text() == QString::number(my_vector.at(7))
         && ui->r8_2->text() == QString::number(my_vector.at(8))
         && ui->r9_2->text() == QString::number(my_vector.at(0))

         && ui->r1_3->text() == QString::number(my_vector.at(2))
         && ui->r2_3->text()== QString::number(my_vector.at(3))
         && ui->r3_3->text() == QString::number(my_vector.at(4))
         && ui->r4_3->text() == QString::number(my_vector.at(5))
         && ui->r5_3->text() == QString::number(my_vector.at(6))
         && ui->r6_3->text() == QString::number(my_vector.at(7))
         && ui->r7_3->text() == QString::number(my_vector.at(8))
         && ui->r8_3->text() == QString::number(my_vector.at(0))
         && ui->r9_3->text() == QString::number(my_vector.at(1))

         && ui->r1_4->text() == QString::number(my_vector.at(3))
         && ui->r2_4->text()== QString::number(my_vector.at(4))
         && ui->r3_4->text() == QString::number(my_vector.at(5))
         && ui->r4_4->text() == QString::number(my_vector.at(6))
         && ui->r5_4->text() == QString::number(my_vector.at(7))
         && ui->r6_4->text() == QString::number(my_vector.at(8))
         && ui->r7_4->text() == QString::number(my_vector.at(0))
         && ui->r8_4->text() == QString::number(my_vector.at(1))
         && ui->r9_4->text() == QString::number(my_vector.at(2))

         && ui->r1_5->text() == QString::number(my_vector.at(4))
         && ui->r2_5->text()== QString::number(my_vector.at(5))
         && ui->r3_5->text() == QString::number(my_vector.at(6))
         && ui->r4_5->text() == QString::number(my_vector.at(7))
         && ui->r5_5->text() == QString::number(my_vector.at(8))
         && ui->r6_5->text() == QString::number(my_vector.at(0))
         && ui->r7_5->text() == QString::number(my_vector.at(1))
         && ui->r8_5->text() == QString::number(my_vector.at(2))
         && ui->r9_5->text() == QString::number(my_vector.at(3))

         && ui->r1_6->text() == QString::number(my_vector.at(5))
         && ui->r2_6->text()== QString::number(my_vector.at(6))
         && ui->r3_6->text() == QString::number(my_vector.at(7))
         && ui->r4_6->text() == QString::number(my_vector.at(8))
         && ui->r5_6->text() == QString::number(my_vector.at(0))
         && ui->r6_6->text() == QString::number(my_vector.at(1))
         && ui->r7_6->text() == QString::number(my_vector.at(2))
         && ui->r8_6->text() == QString::number(my_vector.at(3))
         && ui->r9_6->text() == QString::number(my_vector.at(4))

         && ui->r1_7->text() == QString::number(my_vector.at(6))
         && ui->r2_7->text()== QString::number(my_vector.at(7))
         && ui->r3_7->text() == QString::number(my_vector.at(8))
         && ui->r4_7->text() == QString::number(my_vector.at(0))
         && ui->r5_7->text() == QString::number(my_vector.at(1))
         && ui->r6_7->text() == QString::number(my_vector.at(2))
         && ui->r7_7->text() == QString::number(my_vector.at(3))
         && ui->r8_7->text() == QString::number(my_vector.at(4))
         && ui->r9_7->text() == QString::number(my_vector.at(5))

         && ui->r1_8->text() == QString::number(my_vector.at(7))
         && ui->r2_8->text()== QString::number(my_vector.at(8))
         && ui->r3_8->text() == QString::number(my_vector.at(0))
         && ui->r4_8->text() == QString::number(my_vector.at(1))
         && ui->r5_8->text() == QString::number(my_vector.at(2))
         && ui->r6_8->text() == QString::number(my_vector.at(3))
         && ui->r7_8->text() == QString::number(my_vector.at(4))
         && ui->r8_8->text() == QString::number(my_vector.at(5))
         && ui->r9_8->text() == QString::number(my_vector.at(6))

         && ui->r1_9->text() == QString::number(my_vector.at(8))
         && ui->r2_9->text()== QString::number(my_vector.at(0))
         && ui->r3_9->text() == QString::number(my_vector.at(1))
         && ui->r4_9->text() == QString::number(my_vector.at(2))
         && ui->r5_9->text() == QString::number(my_vector.at(3))
         && ui->r6_9->text() == QString::number(my_vector.at(4))
         && ui->r7_9->text() == QString::number(my_vector.at(5))
         && ui->r8_9->text() == QString::number(my_vector.at(6))
         && ui->r9_9->text() == QString::number(my_vector.at(7))

         )
    {
        winner.exec();
    }
    else if ( ui->r1->text() != ""
              && ui->r2->text() != ""
              && ui->r3->text() != ""
              && ui->r4->text() != ""
              && ui->r5->text() != ""
              && ui->r6->text() != ""
              && ui->r7->text() != ""
              && ui->r8->text() != ""
              && ui->r9->text() != ""

              && ui->r1_2->text() != ""
              && ui->r2_2->text() != ""
              && ui->r3_2->text() != ""
              && ui->r4_2->text() != ""
              && ui->r5_2->text() != ""
              && ui->r6_2->text() != ""
              && ui->r7_2->text() != ""
              && ui->r8_2->text() != ""
              && ui->r9_2->text() != ""

              && ui->r1_3->text() != ""
              && ui->r2_3->text() != ""
              && ui->r3_3->text() != ""
              && ui->r4_3->text() != ""
              && ui->r5_3->text() != ""
              && ui->r6_3->text() != ""
              && ui->r7_3->text() != ""
              && ui->r8_3->text() != ""
              && ui->r9_3->text() != ""

              && ui->r1_4->text() != ""
              && ui->r2_4->text() != ""
              && ui->r3_4->text() != ""
              && ui->r4_4->text() != ""
              && ui->r5_4->text() != ""
              && ui->r6_4->text() != ""
              && ui->r7_4->text() != ""
              && ui->r8_4->text() != ""
              && ui->r9_4->text() != ""

              && ui->r1_5->text() != ""
              && ui->r2_5->text() != ""
              && ui->r3_5->text() != ""
              && ui->r4_5->text() != ""
              && ui->r5_5->text() != ""
              && ui->r6_5->text() != ""
              && ui->r7_5->text() != ""
              && ui->r8_5->text() != ""
              && ui->r9_5->text() != ""

              && ui->r1_6->text() != ""
              && ui->r2_6->text() != ""
              && ui->r3_6->text() != ""
              && ui->r4_6->text() != ""
              && ui->r5_6->text() != ""
              && ui->r6_6->text() != ""
              && ui->r7_6->text() != ""
              && ui->r8_6->text() != ""
              && ui->r9_6->text() != ""

              && ui->r1_7->text() != ""
              && ui->r2_7->text() != ""
              && ui->r3_7->text() != ""
              && ui->r4_7->text() != ""
              && ui->r5_7->text() != ""
              && ui->r6_7->text() != ""
              && ui->r7_7->text() != ""
              && ui->r8_7->text() != ""
              && ui->r9_7->text() != ""

              && ui->r1_8->text() != ""
              && ui->r2_8->text() != ""
              && ui->r3_8->text() != ""
              && ui->r4_8->text() != ""
              && ui->r5_8->text() != ""
              && ui->r6_8->text() != ""
              && ui->r7_8->text() != ""
              && ui->r8_8->text() != ""
              && ui->r9_8->text() != ""

              && ui->r1_9->text() != ""
              && ui->r2_9->text() != ""
              && ui->r3_9->text() != ""
              && ui->r4_9->text() != ""
              && ui->r5_9->text() != ""
              && ui->r6_9->text() != ""
              && ui->r7_9->text() != ""
              && ui->r8_9->text() != ""
              && ui->r9_9->text() != ""

              )
    {
        ui->Show->show();
        loser.exec();
    }
}


void Sudoku::on_Generate_clicked()
{
    randomSet();
    ui->Show->hide();
    ui->r1->setText(QString::number(my_vector.at(0)));
    ui->r5->setText(QString::number(my_vector.at(4)));
    ui->r7->setText(QString::number(my_vector.at(6)));
    ui->r2_2->setText(QString::number(my_vector.at(2)));
    ui->r6_2->setText(QString::number(my_vector.at(6)));
    ui->r2_3->setText(QString::number(my_vector.at(3)));
    ui->r6_3->setText(QString::number(my_vector.at(7)));
    ui->r9_3->setText(QString::number(my_vector.at(1)));
    ui->r3_4->setText(QString::number(my_vector.at(5)));
    ui->r6_4->setText(QString::number(my_vector.at(8)));
    ui->r7_5->setText(QString::number(my_vector.at(1)));
    ui->r4_6->setText(QString::number(my_vector.at(8)));
    ui->r6_6->setText(QString::number(my_vector.at(1)));
    ui->r1_7->setText(QString::number(my_vector.at(6)));
    ui->r3_7->setText(QString::number(my_vector.at(8)));
    ui->r6_7->setText(QString::number(my_vector.at(2)));
    ui->r3_8->setText(QString::number(my_vector.at(0)));
    ui->r2_9->setText(QString::number(my_vector.at(0)));
    ui->r5_9->setText(QString::number(my_vector.at(3)));
    ui->r9_9->setText(QString::number(my_vector.at(7)));

}

void Sudoku::on_clear_clicked()
{
    ui->Show->hide();

    ui->r2->setText("");
    ui->r3->setText("");
    ui->r4->setText("");

    ui->r6->setText("");

    ui->r8->setText("");
    ui->r9->setText("");

    ui->r1_2->setText("");

    ui->r3_2->setText("");
    ui->r4_2->setText("");
    ui->r5_2->setText("");

    ui->r7_2->setText("");
    ui->r8_2->setText("");
    ui->r9_2->setText("");

    ui->r1_3->setText("");
    ui->r3_3->setText("");
    ui->r4_3->setText("");
    ui->r5_3->setText("");
    ui->r7_3->setText("");
    ui->r8_3->setText("");

    ui->r1_4->setText("");
    ui->r2_4->setText("");
    ui->r4_4->setText("");
    ui->r5_4->setText("");
    ui->r7_4->setText("");
    ui->r8_4->setText("");
    ui->r9_4->setText("");

    ui->r1_5->setText("");
    ui->r2_5->setText("");
    ui->r3_5->setText("");
    ui->r4_5->setText("");
    ui->r5_5->setText("");
    ui->r6_5->setText("");
    ui->r8_5->setText("");
    ui->r9_5->setText("");

    ui->r1_6->setText("");
    ui->r2_6->setText("");
    ui->r3_6->setText("");
    ui->r5_6->setText("");
    ui->r7_6->setText("");
    ui->r8_6->setText("");
    ui->r9_6->setText("");

    ui->r2_7->setText("");
    ui->r4_7->setText("");
    ui->r5_7->setText("");
    ui->r7_7->setText("");
    ui->r8_7->setText("");
    ui->r9_7->setText("");

    ui->r1_8->setText("");
    ui->r2_8->setText("");
    ui->r4_8->setText("");
    ui->r5_8->setText("");
    ui->r6_8->setText("");
    ui->r7_8->setText("");
    ui->r8_8->setText("");
    ui->r9_8->setText("");

    ui->r1_9->setText("");
    ui->r3_9->setText("");
    ui->r4_9->setText("");
    ui->r6_9->setText("");
    ui->r7_9->setText("");
    ui->r8_9->setText("");
}


void Sudoku::on_Show_clicked()
{
    ui->r1->setText(QString::number(my_vector.at(0)));
    ui->r2->setText(QString::number(my_vector.at(1)));
    ui->r3->setText(QString::number(my_vector.at(2)));
    ui->r4->setText(QString::number(my_vector.at(3)));
    ui->r5->setText(QString::number(my_vector.at(4)));
    ui->r6->setText(QString::number(my_vector.at(5)));
    ui->r7->setText(QString::number(my_vector.at(6)));
    ui->r8->setText(QString::number(my_vector.at(7)));
    ui->r9->setText(QString::number(my_vector.at(8)));

    ui->r1_2->setText(QString::number(my_vector.at(1)));
    ui->r2_2->setText(QString::number(my_vector.at(2)));
    ui->r3_2->setText(QString::number(my_vector.at(3)));
    ui->r4_2->setText(QString::number(my_vector.at(4)));
    ui->r5_2->setText(QString::number(my_vector.at(5)));
    ui->r6_2->setText(QString::number(my_vector.at(6)));
    ui->r7_2->setText(QString::number(my_vector.at(7)));
    ui->r8_2->setText(QString::number(my_vector.at(8)));
    ui->r9_2->setText(QString::number(my_vector.at(0)));

    ui->r1_3->setText(QString::number(my_vector.at(2)));
    ui->r2_3->setText(QString::number(my_vector.at(3)));
    ui->r3_3->setText(QString::number(my_vector.at(4)));
    ui->r4_3->setText(QString::number(my_vector.at(5)));
    ui->r5_3->setText(QString::number(my_vector.at(6)));
    ui->r6_3->setText(QString::number(my_vector.at(7)));
    ui->r7_3->setText(QString::number(my_vector.at(8)));
    ui->r8_3->setText(QString::number(my_vector.at(0)));
    ui->r9_3->setText(QString::number(my_vector.at(1)));

    ui->r1_4->setText(QString::number(my_vector.at(3)));
    ui->r2_4->setText(QString::number(my_vector.at(4)));
    ui->r3_4->setText(QString::number(my_vector.at(5)));
    ui->r4_4->setText(QString::number(my_vector.at(6)));
    ui->r5_4->setText(QString::number(my_vector.at(7)));
    ui->r6_4->setText(QString::number(my_vector.at(8)));
    ui->r7_4->setText(QString::number(my_vector.at(0)));
    ui->r8_4->setText(QString::number(my_vector.at(1)));
    ui->r9_4->setText(QString::number(my_vector.at(2)));

    ui->r1_5->setText(QString::number(my_vector.at(4)));
    ui->r2_5->setText(QString::number(my_vector.at(5)));
    ui->r3_5->setText(QString::number(my_vector.at(6)));
    ui->r4_5->setText(QString::number(my_vector.at(7)));
    ui->r5_5->setText(QString::number(my_vector.at(8)));
    ui->r6_5->setText(QString::number(my_vector.at(0)));
    ui->r7_5->setText(QString::number(my_vector.at(1)));
    ui->r8_5->setText(QString::number(my_vector.at(2)));
    ui->r9_5->setText(QString::number(my_vector.at(3)));

    ui->r1_6->setText(QString::number(my_vector.at(5)));
    ui->r2_6->setText(QString::number(my_vector.at(6)));
    ui->r3_6->setText(QString::number(my_vector.at(7)));
    ui->r4_6->setText(QString::number(my_vector.at(8)));
    ui->r5_6->setText(QString::number(my_vector.at(0)));
    ui->r6_6->setText(QString::number(my_vector.at(1)));
    ui->r7_6->setText(QString::number(my_vector.at(2)));
    ui->r8_6->setText(QString::number(my_vector.at(3)));
    ui->r9_6->setText(QString::number(my_vector.at(4)));

    ui->r1_7->setText(QString::number(my_vector.at(6)));
    ui->r2_7->setText(QString::number(my_vector.at(7)));
    ui->r3_7->setText(QString::number(my_vector.at(8)));
    ui->r4_7->setText(QString::number(my_vector.at(0)));
    ui->r5_7->setText(QString::number(my_vector.at(1)));
    ui->r6_7->setText(QString::number(my_vector.at(2)));
    ui->r7_7->setText(QString::number(my_vector.at(3)));
    ui->r8_7->setText(QString::number(my_vector.at(4)));
    ui->r9_7->setText(QString::number(my_vector.at(5)));

    ui->r1_8->setText(QString::number(my_vector.at(7)));
    ui->r2_8->setText(QString::number(my_vector.at(8)));
    ui->r3_8->setText(QString::number(my_vector.at(0)));
    ui->r4_8->setText(QString::number(my_vector.at(1)));
    ui->r5_8->setText(QString::number(my_vector.at(2)));
    ui->r6_8->setText(QString::number(my_vector.at(3)));
    ui->r7_8->setText(QString::number(my_vector.at(4)));
    ui->r8_8->setText(QString::number(my_vector.at(5)));
    ui->r9_8->setText(QString::number(my_vector.at(6)));

    ui->r1_9->setText(QString::number(my_vector.at(8)));
    ui->r2_9->setText(QString::number(my_vector.at(0)));
    ui->r3_9->setText(QString::number(my_vector.at(1)));
    ui->r4_9->setText(QString::number(my_vector.at(2)));
    ui->r5_9->setText(QString::number(my_vector.at(3)));
    ui->r6_9->setText(QString::number(my_vector.at(4)));
    ui->r7_9->setText(QString::number(my_vector.at(5)));
    ui->r8_9->setText(QString::number(my_vector.at(6)));
    ui->r9_9->setText(QString::number(my_vector.at(7)));
}
