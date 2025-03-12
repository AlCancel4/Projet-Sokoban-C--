#include "personnage.h"

Personnage::Personnage() : Mobile()
{
    hauteur = 0;
    largeur = 0;
}

Personnage::Personnage(int x, int y, int hauteur, int largeur):Mobile(x, y, hauteur, largeur){
}


void Personnage::dessiner(QPainter * p){
    p->drawPixmap(point.getX()*30,point.getY()*30,hauteur,largeur, QPixmap(":/image/spider.png"));
}

int Personnage::getType(){
    return 2;
}
