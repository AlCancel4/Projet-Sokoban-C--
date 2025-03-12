#ifndef JOUER_H
#define JOUER_H

#include <QDialog>
#include <QKeyEvent>
#include "personnage.h"
#include "mur.h"
#include "caisse.h"
#include "casevide.h"
#include "grille.h"

namespace Ui {
class Jouer;
}

class Jouer : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief Permet de creer un niveau
     * \param niveau entier du niveau
     */
    explicit Jouer(QWidget *parent = nullptr,int niveau = 1);
    /*!
     * \brief permet de lancer le niveau à partir du nom de son fichier
     * \param nomfichier string correspondant au nom du fichier du niveau à lancer
     */
    void lancerNiveau(string nomfichier);
    ~Jouer();


private slots:
    /*!
     * \brief Permet de retourner à la fenêtre de dialogue précédente
     */
    void on_pRetour_clicked();
    /*!
     * \brief permet de recommencer le niveau à partir sa grille de départ
     */
    void on_pRestart_clicked();
    /*!
     * \brief permet de savoir si l'utilisateur à fini le niveau c'est à dire si toutes les cases colorées sont occupées par une caisse
     * \return
     */
    bool testerSiGagner();
    /*!
     * \brief Permet d'afficher la fenêtre de dialogue Résultats
     */
    void Gagne();

private:
    Ui::Jouer *ui;
    Personnage *p;
    Mur *m;
    Caisse *c;
    CaseVide *cv;
    Grille *g;
    int niveau;
    void keyPressEvent ( QKeyEvent * event );
    void paintEvent(QPaintEvent* e);
};

#endif // JOUER_H
