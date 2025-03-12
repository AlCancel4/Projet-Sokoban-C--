#include "jouer.h"
#include "ui_jouer.h"
#include "coordonnee.h"
#include "mobile.h"
#include "personnage.h"
#include "caisse.h"
#include "resultat.h"
#include "niveaux.h"

Jouer::Jouer(QWidget *parent, int niveau) :
    QDialog(parent),
    ui(new Ui::Jouer)
{
    ui->setupUi(this);
    /*
    p = new Personnage(100,0,100,100);
    c = new Caisse(0,100,100,100,false);
    */
    this->niveau = niveau;
    g = new Grille(QString::fromStdString(":/Level/nivo"+to_string(niveau)+".txt"));
}

Jouer::~Jouer()
{
    delete ui;
    delete g;
}

void Jouer::paintEvent(QPaintEvent* e) {
    QWidget::paintEvent(e);
    QPainter painter(this);

    /*
    c->dessiner(&painter);
    p->dessiner(&painter);
    */
    g->dessiner(&painter);
}

bool Jouer::testerSiGagner(){
    int compteur = 0;
    for( int i=0;i<g->dim;i++){
            if(g->grilleM[i]->getType()==5){
                compteur+=1;
            }
    }
    if(compteur == g->dim-1){
        return true;
    }
    else{
        return false;
    }
}

void Jouer::keyPressEvent ( QKeyEvent * event ) {
    int val = -1, val2 = -1, val3 = -1, voisine = 0;
    val = g->getJoueur_gM();
    val2 = g->getJoueur_g();

    switch(event->key())
    {
        case Qt::Key_Left : voisine = -1;
                            val3 = g->getVoisine(voisine);
                            if (g->getLibre(voisine) == 1){
                                g->grilleM[val3]->deplacer(-1,0);
                                g->grilleM[val]->deplacer(-1,0);
                                if(g->grille[val2+voisine*2]->getType()==3){
                                    g->grilleM[val3]->setColoree(false);
                                }
                                if(g->grille[val2+voisine*2]->getType()==6){
                                    g->grilleM[val3]->setColoree(true);
                                }
                            }
                            else if (g->getLibre(voisine) == 2){
                                g->grilleM[val]->deplacer(-1,0);
                            }
                         break;
        case Qt::Key_Right: voisine = 1;
                            val3 = g->getVoisine(voisine);
                            if (g->getLibre(voisine) == 1){
                                g->grilleM[val3]->deplacer(1,0);
                                g->grilleM[val]->deplacer(1,0);
                                if(g->grille[val2+voisine*2]->getType()==3){
                                    g->grilleM[val3]->setColoree(false);
                                }
                                if(g->grille[val2+voisine*2]->getType()==6){
                                    g->grilleM[val3]->setColoree(true);
                                }
                            }
                            else if (g->getLibre(voisine) == 2){
                                g->grilleM[val]->deplacer(1,0);
                            }
                         break;
        case Qt::Key_Up :   voisine = -20;
                            val3 = g->getVoisine(voisine);
                            if (g->getLibre(voisine) == 1){
                                g->grilleM[val3]->deplacer(0,-1);
                                g->grilleM[val]->deplacer(0,-1);
                                if(g->grille[val2+voisine*2]->getType()==3){
                                    g->grilleM[val3]->setColoree(false);
                                }
                                if(g->grille[val2+voisine*2]->getType()==6){
                                    g->grilleM[val3]->setColoree(true);
                                }
                            }
                            else if (g->getLibre(voisine) == 2){
                                g->grilleM[val]->deplacer(0,-1);
                            }
                         break;
        case Qt::Key_Down : voisine = 20;
                            val3 = g->getVoisine(voisine);
                            if (g->getLibre(voisine) == 1){
                                g->grilleM[val3]->deplacer(0,1);
                                g->grilleM[val]->deplacer(0,1);
                                if(g->grille[val2+voisine*2]->getType()==3){
                                    g->grilleM[val3]->setColoree(false);
                                }
                                if(g->grille[val2+voisine*2]->getType()==6){
                                    g->grilleM[val3]->setColoree(true);
                                }
                            }
                            else if (g->getLibre(voisine) == 2){
                                g->grilleM[val]->deplacer(0,1);
                            }
                         break;
    }
    this->repaint();

    Gagne();
}

void Jouer::Gagne(){
    if (testerSiGagner() == true){
        this->close();
        Resultat f(this);
        f.exec();
    }
}

void Jouer::on_pRetour_clicked()
{
    this->close();
    Niveaux f(this);
    f.exec();
}


void Jouer::on_pRestart_clicked()
{
    this->close();
    Jouer f(this, niveau);
    f.exec();
}

