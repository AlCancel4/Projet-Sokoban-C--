#include "case.h"

Case::Case() : Immobile()
{
    hauteur = 0;
    largeur = 0;
}

Case::Case(int x, int y, int hauteur, int largeur):Immobile(x,y){
    this->hauteur = hauteur;
    this->largeur = largeur;
}
