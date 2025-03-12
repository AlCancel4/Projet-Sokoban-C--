#include "neant.h"

Neant::Neant() : Immobile()
{
    hauteur = 0;
    largeur = 0;
}

Neant::Neant(int x, int y, int largeur, int hauteur):Immobile(x,y,hauteur,largeur){

}

void Neant::dessiner(QPainter * m){
    m->drawPixmap(point.getX()*30,point.getY()*30,largeur,hauteur, QPixmap(":/image/feum.png"));
}

int Neant::getType(){
    return 0;
}
