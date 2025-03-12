#ifndef CAISSE_H
#define CAISSE_H

#include "mobile.h"

#include <iostream>
#include <fstream>
#include <QPainter>

using namespace std;

class Caisse : public Mobile
{
public:
    /*!
     * \brief Construit une caisse par défaut
     */
    Caisse();
    /*!
     * \brief Construit une caisse
     * \param x entier abscisse
     * \param y entier ordonnée
     * \param hauteur entier hauteur
     * \param largeur entier largeur
     * \param coloree booleen permettant de savoir si une caisse est coloree ou non
     */
    Caisse(int x, int y, int hauteur, int largeur, bool coloree);
    /*!
     * \brief renvoie le booleen qui correspond à l'attribut coloree
     * \return renvoie le booleen correspondant
     */
    bool getColoree();
    /*!
     * \brief La fonction setColoree permet de definir la valaeur de coloree sur l'attribut coloree
     * \param coloree booleen true si casse sur cible false sinon
     * \details permet de passer une casse coloree à un caisse non coloree et inversement
     */
    void setColoree(bool coloree);
    /*!
     * \brief Permet de dessiner une caisse
     * \param cai QPainter pour l'affichage
     */
    void dessiner(QPainter * cai);
    /*!
     * \brief renvoie un entier en fonction du type de la caisse
     * \return renvoie l'entier correspondant
     * \details renvoie 1 pour une caisse non coloree et 5 pour une caisse coloree
     */
    int getType();

private:
    bool coloree;
};

#endif // CAISSE_H
