#ifndef NEANT_H
#define NEANT_H

#include "immobile.h"
#include <iostream>
#include <fstream>
#include <QPainter>

using namespace std;

class Neant : public Immobile
{
public:
    /*!
     * \brief Construit une case Neant par defaut
     */
    Neant();
    /*!
     * \brief Construit une case Neant
     * \param x entier abscisse
     * \param y entier ordonnées
     * \param largeur entier largeur
     * \param hauteur entier hauteur
     */
    Neant(int x, int y, int largeur, int hauteur);
    /*!
     * \brief Permet de dessiner une case Neant
     * \param n QPainter pour l'affichage
     */
    void dessiner(QPainter * n);
    /*!
     * \brief renvoie un entier correspondant au type d'une case Neant
     * \return 0 correspondant au type d'une case Neant
     */
    int getType();
};

#endif // NEANT_H
