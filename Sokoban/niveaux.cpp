#include "niveaux.h"
#include "ui_niveaux.h"
#include "jouer.h"
#include "mainwindow.h"

Niveaux::Niveaux(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Niveaux)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":/image/fond.png")));
    this->setPalette(palette);
}

Niveaux::~Niveaux()
{
    delete ui;
}
void Niveaux::choixNiveau(){
    on_pNiveau1_clicked();
    on_pNiveau2_clicked();
    on_pNiveau3_clicked();
    on_pNiveau4_clicked();
}

void Niveaux::on_pNiveau1_clicked()
{
    this->close();
    Jouer f(this, 1);
    f.exec();
}


void Niveaux::on_pNiveau2_clicked()
{
    this->close();
    Jouer f(this, 2);
    f.exec();
}


void Niveaux::on_pNiveau3_clicked()
{
    this->close();
    Jouer f(this, 3);
    f.exec();
}


void Niveaux::on_pNiveau4_clicked()
{
    this->close();
    Jouer f(this, 4);
    f.exec();
}


void Niveaux::on_pushButton_clicked()
{
    this->close();
}

