#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "niveaux.h"
#include "regle.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":/image/fond.png")));
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pNiveaux_clicked()
{
    Niveaux f(this);
    f.exec();
}


void MainWindow::on_pRegle_clicked()
{
    Regle f(this);
    f.exec();
}

