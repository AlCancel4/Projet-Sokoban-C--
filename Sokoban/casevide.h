#ifndef CASEVIDE_H
#define CASEVIDE_H

#include "immobile.h"
#include <iostream>
#include <fstream>
#include <QPainter>

using namespace std;

class CaseVide : public Immobile
{
public:
    /*!
     * \brief Construit une Case vide par defaut
     */
    CaseVide();
    /*!
     * \brief Construit une case vide
     * \param x entier abscisse
     * \param y entier ordonnée
     * \param largeur entier largeur
     * \param hauteur entier hauteur
     * \param marquee booleen permettant de savoir si une casevide est marquee ou non
     */
    CaseVide(int x, int y, int largeur, int hauteur, bool marquee);
    /*!
     * \brief permet de dessiner une case vide
     * \param cv QPainter pour l'affichage
     */
    void dessiner(QPainter * cv);
    /*!
     * \brief renvoie un entier en fonction du type de la case vide
     * \return renvoie l'entier correspondant
     * \details renvoie 3 pour une case vide non marquee et 6 pour une case vide marquee
     */
    int getType();

private:
    bool marquee;
};

#endif // CASEVIDE_H
