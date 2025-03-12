#ifndef RESULTAT_H
#define RESULTAT_H

#include <QDialog>

namespace Ui {
class Resultat;
}

class Resultat : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief Permet de créer la fenêtre de dialogue Resultat
     * \param niveau entier correspondant au niveau fini
     */
    explicit Resultat(QWidget *parent = nullptr, int niveau = 1);
    ~Resultat();

private slots:
    /*!
     * \brief Permet de cliquer sur un bouton pour directement passer au niveau suivant
     * \details Si l'utilisateur est au dernier niveau cliquer sur ce bouton le renverra au niveau 1
     */
    void on_pushButton_clicked();
    /*!
     * \brief Permet de fermer la fenêtre de dialogue Resultat et d'ouvir la fenetre de dialogue Niveaux
     */
    void on_pRetour_clicked();
    /*!
     * \brief Permet de recommencer à zéro le niveau que l'utilisateur vient de finir
     */
    void on_pRestart_clicked();

private:
    Ui::Resultat *ui;
    int niveau;
};

#endif // RESULTAT_H
