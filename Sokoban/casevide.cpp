#include "casevide.h"

CaseVide::CaseVide() : Immobile()
{
    largeur = 0;
    hauteur = 0;
    marquee = false;
}

CaseVide::CaseVide(int x, int y, int largeur, int hauteur, bool marquee):Immobile(x,y,largeur,hauteur){
    this->marquee = marquee;
}

void CaseVide::dessiner(QPainter * cv){
    if (marquee == false){
        cv->drawPixmap(point.getX()*30,point.getY()*30,largeur,hauteur, QPixmap(":/image/plancher.png"));
    }
    else {
        cv->drawPixmap(point.getX()*30,point.getY()*30,largeur,hauteur, QPixmap(":/image/diam.png"));
    }
}

int CaseVide::getType(){
    if (marquee == false){
        return 3;
    }
    else {
        return 6;
    }
}
