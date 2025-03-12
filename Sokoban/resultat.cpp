#include "resultat.h"
#include "ui_resultat.h"

#include "jouer.h"
#include "niveaux.h"

Resultat::Resultat(QWidget *parent, int niveau) :
    QDialog(parent),
    ui(new Ui::Resultat)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":/image/image.png")));
    this->setPalette(palette);
    this->niveau = niveau;

}

Resultat::~Resultat()
{
    delete ui;
}

void Resultat::on_pushButton_clicked()
{
    this->close();
    if(niveau==4){
        niveau = 0;
    }
    Jouer f(this, niveau+1);
    f.exec();
}


void Resultat::on_pRetour_clicked()
{
    this->close();
    Niveaux f(this);
    f.exec();
}


void Resultat::on_pRestart_clicked()
{
    this->close();
    Jouer f(this, niveau);
    f.exec();
}

