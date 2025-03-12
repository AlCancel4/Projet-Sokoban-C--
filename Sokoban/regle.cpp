#include "regle.h"
#include "ui_regle.h"

Regle::Regle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Regle)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":/image/fond.png")));
    this->setPalette(palette);
}

Regle::~Regle()
{
    delete ui;
}

void Regle::on_pushButton_clicked()
{
    this->close();
}

