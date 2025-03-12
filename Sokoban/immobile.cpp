#include "immobile.h"

Immobile::Immobile()
{
    Coordonnee point = Coordonnee();
    this->point.setX(point.getY());
    this->point.setY(point.getY());
}

Immobile::Immobile(int x, int y, int hauteur, int largeur){
    this->point.setX(x);
    this->point.setY(y);
    this->hauteur = hauteur;
    this->largeur = largeur;
}


int Immobile::getX(){
    return point.getX();
}

int Immobile::getY(){
    return point.getY();
}
