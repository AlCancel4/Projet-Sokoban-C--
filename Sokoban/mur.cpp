#include "mur.h"

Mur::Mur() : Immobile()
{
    hauteur = 0;
    largeur = 0;
}

Mur::Mur(int x, int y, int largeur, int hauteur):Immobile(x,y,hauteur,largeur){

}

void Mur::dessiner(QPainter * m){
    m->drawPixmap(point.getX()*30,point.getY()*30,largeur,hauteur, QPixmap(":/image/mur.png"));
}

int Mur::getType(){
    return 4;
}
