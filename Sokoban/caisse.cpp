#include "caisse.h"

Caisse::Caisse() : Mobile()
{
    hauteur = 0;
    largeur = 0;
    coloree = false;
}

Caisse::Caisse(int x, int y, int hauteur, int largeur, bool coloree):Mobile(x, y, hauteur, largeur){
    this->coloree = coloree;
}

bool Caisse::getColoree(){
    return coloree;
}

void Caisse::setColoree(bool coloree){
    this->coloree = coloree;
}

void Caisse::dessiner(QPainter * c){
    if (coloree == false){
        c->drawPixmap(point.getX()*30,point.getY()*30,hauteur,largeur, QPixmap(":/image/caisse1.png"));
    }
    else {
        c->drawPixmap(point.getX()*30,point.getY()*30,hauteur,largeur, QPixmap(":/image/caisse.png"));
    }
}

int Caisse::getType(){
    if (coloree == false){
        return 1;
    }
    else{
        return 5;
    }
}
