#ifndef IMMOBILE_H
#define IMMOBILE_H

#include "coordonnee.h"
#include <iostream>
#include <fstream>
#include <QPainter>

class Immobile
{
public:
    /*!
     * \brief Construit un Immobile par défaut
     */
    Immobile();
    /*!
     * \brief Constuit un immobile
     * \param x entier abscisse
     * \param y entier coordonnee
     * \param hauteur entier hauteur
     * \param largeur entier largeur
     */
    Immobile(int x, int y, int hauteur, int largeur);
    /*!
     * \brief renvoie la valeur de l'abscisse
     * \return renvoie l'entier x correspondant aux abscisses
     */
    int getX();
    /*!
     * \brief renvoie la valeur de l'ordonnee
     * \return renvoie l'entier y correspondant aux ordonnees
     */
    int getY();
    /*!
     * \brief permet de dessiner un Immobile
     * \param imm QPainter pour l'affichage
     */
    virtual void dessiner(QPainter * imm) = 0;
    /*!
     * \brief renvoie un entier en fonction du type de notre Immobile
     * \return 3 pour les cases vides, 6 pour les cases vides marquées, 4 pour les murs et 0 pour les cases néants
     */
    virtual int getType() = 0;

protected:
    Coordonnee point;
    int hauteur;
    int largeur;
};

#endif // IMMOBILE_H
