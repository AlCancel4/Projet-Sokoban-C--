#ifndef GRILLE_H
#define GRILLE_H

#include "coordonnee.h"
#include "immobile.h"
#include "case.h"
#include "casevide.h"
#include "mur.h"
#include "mobile.h"
#include "caisse.h"
#include "personnage.h"
#include "neant.h"

#include <iostream>
#include <fstream>
#include <QPainter>
#include <vector>
#include <QString>

using namespace std;

class Grille : public Coordonnee
{
public:
    /*!
     * \brief Construit une grille par defaut
     */
    Grille();
    /*!
     * \brief Construit une grille
     * \param nomfich QString du nom du fichier
     */
    Grille(QString nomfich);
    /*!
     * \brief permet de dessiner une grille
     * \param g QPainter pour l'affichage
     */
    void dessiner(QPainter * g);
    /*!
     * \brief renvoie l'emplacement de notre personnage dans la grille des mobiles
     * \return un entier correspondant à son emplacement dans le vecteur grilleM
     */
    int getJoueur_gM();
    /*!
     * \brief renvoie l'emplacement de notre personnage dans la grille des immobiles
     * \return un entier correspondant à son emplacement dans le vecteur grille
     */
    int getJoueur_g();
    /*!
     * \brief renvoie l’emplacement d’une caisse dans grilleM en voisine du joueur sinon elle renvoie -1
     * \param voisine entier correspondant a la direction dans laquelle on doit chercher notre voisine
     * \return -1 si aucune caisse n'est voisine, sinon renvoie un entier correspondant à l'emplacement de la caisse
     */
    int getVoisine(int voisine);
    /*!
     * \brief renvoie 1 si la case en voisine à côté du joueur est une caisse , 2 si la case en voisine à côté du joueur est vide sinon elle renvoie 0.
     * \param voisine entier correspondant à la direction dans laquelle on doit chercher si la case est libre
     * \return 1 si la case en voisine à côté du joueur est une caisse , 2 si la case en voisine à côté du joueur est vide sinon elle renvoie 0
     */
    int getLibre(int libre);

public:
    vector <Immobile*> grille;
    vector <Mobile*> grilleM;
    int dim;
    int hauteur;
    int largeur;
};

#endif // GRILLE_H
