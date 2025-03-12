#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * \brief Permet de creer une MainWindow
     */
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    /*!
     * \brief Permet de cliquer sur un bouton pour ouvrir la fenêtre de dialogue Niveaux
     */
    void on_pNiveaux_clicked();
    /*!
     * \brief Permet de cliquer sur un bouton pour ouvrir la fenêtre de dialogue Règles
     */
    void on_pRegle_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
