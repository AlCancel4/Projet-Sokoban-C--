#include "mobile.h"

Mobile::Mobile()
{
    Coordonnee point = Coordonnee();
    point.setX(point.getX());
    point.setX(point.getY());
    hauteur = 0;
    largeur = 0;
}

Mobile::Mobile(int x, int y, int hauteur, int largeur){
    this->point.setX(x);
    this->point.setY(y);
    this->hauteur = hauteur;
    this->largeur = largeur;
}

int Mobile::getX(){
    return point.getX();
}

int Mobile::getY(){
    return point.getY();
}

void Mobile::deplacer(int dx, int dy){
    point.setX(point.getX() + dx);
    point.setY(point.getY() + dy);
}
