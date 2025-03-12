#ifndef CASE_H
#define CASE_H

#include "immobile.h"
#include <iostream>
#include <fstream>
#include <QPainter>

class Case : public Immobile
{
public:
    Case();
    Case(int x, int y, int hauteur, int largeur);
    virtual void dessiner(QPainter * c) = 0;

protected:
    int hauteur;
    int largeur;
};

#endif // CASE_H
