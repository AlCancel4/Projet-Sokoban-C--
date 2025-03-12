#ifndef NIVEAUX_H
#define NIVEAUX_H

#include <QDialog>

namespace Ui {
class Niveaux;
}

class Niveaux : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief Constuit une fenetre de dialogue Niveaux
     */
    explicit Niveaux(QWidget *parent = nullptr);
    ~Niveaux();
    /*!
     * \brief Permet à l'utilisateur de chosir son niveaux
     */
    void choixNiveau();

private slots:
    /*!
     * \brief Permet de cliquer sur un bouton pour ouvrir la fenêtre de dialogue correspondant au niveau 1
     */
    void on_pNiveau1_clicked();
    /*!
     * \brief Permet de cliquer sur un bouton pour ouvrir la fenêtre de dialogue correspondant au niveau 2
     */
    void on_pNiveau2_clicked();
    /*!
     * \brief Permet de cliquer sur un bouton pour ouvrir la fenêtre de dialogue correspondant au niveau 3
     */
    void on_pNiveau3_clicked();
    /*!
     * \brief Permet de cliquer sur un bouton pour ouvrir la fenêtre de dialogue correspondant au niveau 4
     */
    void on_pNiveau4_clicked();
    /*!
     * \brief Permet de fermer la fenêtre de dialogue Niveaux et de revenir sur la MainWindow
     */
    void on_pushButton_clicked();

private:
    Ui::Niveaux *ui;
};

#endif // NIVEAUX_H
