#include "grille.h"

#include <QFile>
#include <QTextStream>
#include <QPainter>
#include <QString>

Grille::Grille()
{
    int hauteur = 18;
    int largeur = 20;
    for (int i=0; i<hauteur; i++){
        for (int j=0; j<largeur;j++){
            grille.push_back(new Mur(i,j,50,50));
        }
    }
}


Grille::Grille(QString nomfich){
    QFile fichier(nomfich);
    int mot;
    if (fichier.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream flux(&fichier);
        flux>>hauteur;
        flux>>largeur;
        flux>>dim;
        for(int i=0;i<hauteur;i++){
            for (int j=0; j<largeur; j++){
                flux >> mot;
                switch (mot){
                    case 0 : grille.push_back(new Neant(j,i,30,30));
                        break;
                    case 1 : grille.push_back(new Mur(j,i,30,30));
                        break;
                    case 2 : grille.push_back(new CaseVide(j,i,30,30,false));
                        break;
                    case 3 : grille.push_back(new CaseVide(j,i,30,30, false));
                             grilleM.push_back(new Caisse(j,i,30,30, false));
                        break;
                    case 4 : grille.push_back(new CaseVide(j,i, 30,30, true));
                        break;
                    case 5 : grille.push_back(new CaseVide(j,i,30,30, true));
                             grilleM.push_back(new Caisse(j,i,30,30, true));
                        break;
                    case 6 : grille.push_back(new CaseVide(j,i,30,30, false));
                             grilleM.push_back(new Personnage(j,i,30,30));
                        break;
                }
            }
        }
        fichier.close();
    }
    else {
        cerr << "Impossible d'ouvrir le fichier ! " << endl;
    }

}

int Grille::getJoueur_gM(){
    for (int i = 0; i < (dim); i++){
        if (grilleM[i]->getType() == 2){
            return i;
        }
    }
    return -1;
}

int Grille::getJoueur_g(){
    int jx, jy;
    int val = getJoueur_gM();
    jx = grilleM[val]->getX();
    jy = grilleM[val]->getY();
    for(int i = 0; i < (hauteur*largeur); i++){
        if((grille[i]->getX() == jx) && (grille[i]->getY() == jy)){
            return i;
        }
    }
    return -1;
}

int Grille::getVoisine(int voisine){
    int val2 = getJoueur_g();
    for(int i=0;i<dim;i++){
        if((grille[val2+voisine]->getX()==grilleM[i]->getX()) && (grille[val2+voisine]->getY()==grilleM[i]->getY())){
            return i;
        }
    }
    return -1;
}

int Grille::getLibre(int voisine){
    int test = 0;
    int val2 = getJoueur_g();
    int val3 = getVoisine(voisine);
    int val4 = getVoisine(voisine*2);
    if((grille[val2+(voisine*2)]->getType() != 4) && (!(val4!=-1) || !(grilleM[val4]->getType()==1 || grilleM[val4]->getType()==5))){
        if((val3!=-1) && (grilleM[val3]->getType()==1 || grilleM[val3]->getType()==5 )){
            test = 1;
        }
    }
    if((grille[val2+voisine]->getType() != 4) && ((val3==-1) || !(grilleM[val3]->getType()!=3 || grilleM[val3]->getType()!=5))){
        test = 2;
    }
    return test;
}

void Grille::dessiner(QPainter * g){
    for (int i=0; i<hauteur*largeur; i++){
        grille[i]->dessiner(g);
    }
    for (int i=0;i<dim;i++){
        grilleM[i]->dessiner(g);
    }
}
