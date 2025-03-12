#ifndef MOBILE_H
#define MOBILE_H

#include "coordonnee.h"
#include <iostream>
#include <fstream>
#include <QPainter>

class Mobile
{
public:
    /*!
     * \brief Construit un Mobile par défaut
     */
    Mobile();
    /*!
     * \brief Construit un Mobile
     * \param x entier abscisse
     * \param y entier ordonnée
     * \param hauteur entier hauteur
     * \param largeur entier largeur
     */
    Mobile(int x, int y, int hauteur, int largeur);
    /*!
     * \brief Permet de deplacer notre mobile en fonction des paramètres entrées
     * \param dx entier correspondant au déplacement sur l'axe des abscisses
     * \param dy entier correspondant au déplacement sur l'axe des ordonnées
     */
    void deplacer(int dx, int dy);
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
     * \brief Permet de dessiner un Mobile
     * \param mob QPainter pour l'affichage
     */
    virtual void dessiner(QPainter * mob) = 0;
    /*!
     * \brief renvoie un entier en fonction du type du Mobile
     * \return renvoie l'entier correspondant
     * \details 1 pour les caisses, 5 pour les caisses marquées et 2 pour le personnage
     */
    virtual int getType() = 0;
    /*!
     * \brief Permet de passer un mobile en coloree ou l'inverse en fonction de la valeur du paramètres
     * \param coloree booleen true si casse sur cible false sinon
     */
    virtual void setColoree(bool coloree) = 0;

protected:
    Coordonnee point;
    int hauteur;
    int largeur;
};

#endif // MOBILE_H
