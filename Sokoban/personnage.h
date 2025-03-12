#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include "mobile.h"

#include <iostream>
#include <fstream>
#include <QPainter>

using namespace std;

class Personnage : public Mobile
{
public:
    /*!
     * \brief Construit un Personnage par défaut
     */
    Personnage();
    /*!
     * \brief Construit un Personnage
     * \param x entier abscisse
     * \param y entier ordonnées
     * \param hauteur entier hauteur
     * \param largeur entier largeur
     */
    Personnage(int x, int y, int hauteur, int largeur);
    /*!
     * \brief Permet de dessiner le personnage
     * \param p QPainter pour l'affichage
     */
    void dessiner(QPainter * p);
    /*!
     * \brief renvoie un entier en fonction du type de personnage
     * \return 2 correspondant au type de personnage
     */
    int getType();
};

#endif // PERSONNAGE_H
