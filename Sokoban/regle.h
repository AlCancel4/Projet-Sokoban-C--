#ifndef REGLE_H
#define REGLE_H

#include <QDialog>

namespace Ui {
class Regle;
}

class Regle : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief Permet de créer la fenêtre de dialogue Regle
     */
    explicit Regle(QWidget *parent = nullptr);
    ~Regle();

private slots:
    /*!
     * \brief Permet de fermer la fenêtre de dialogue Regle et de retourner sur la MainWindow
     */
    void on_pushButton_clicked();

private:
    Ui::Regle *ui;
};

#endif // REGLE_H
