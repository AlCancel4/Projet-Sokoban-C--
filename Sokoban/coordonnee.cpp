#include "coordonnee.h"

Coordonnee::Coordonnee()
{
    x = 0;
    y = 0;
}

Coordonnee::Coordonnee(int x, int y){
    this->x = x;
    this->y = y;
}

int Coordonnee::getX(){
    return x;
}

int Coordonnee::getY(){
    return y;
}

void Coordonnee::setX(int nX){
    x = nX;
}

void Coordonnee::setY(int nY){
    y = nY;
}
