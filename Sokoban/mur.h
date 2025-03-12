#ifndef MUR_H
#define MUR_H

#include "immobile.h"
#include <iostream>
#include <fstream>
#include <QPainter>

using namespace std;

class Mur: public Immobile
{
public:
    /*!
     * \brief Construit un Mur par défaut
     */
    Mur();
    /*!
     * \brief Construit un Mur
     * \param x entier abscisse
     * \param y entier coordonnées
     * \param largeur entier largeur
     * \param hauteur entier hauteur
     */
    Mur(int x, int y, int largeur, int hauteur);
    /*!
     * \brief Permet de dessiner un Mur
     * \param m QPainter pour l'affichage
     */
    void dessiner(QPainter * m);
    /*!
     * \brief renvoie un entier correspondant au type de Mur
     * \return 4 correspondant au type de Mur
     */
    int getType();
};

#endif // MUR_H
