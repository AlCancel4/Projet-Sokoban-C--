#ifndef COORDONNEE_H
#define COORDONNEE_H


class Coordonnee
{
public:
    /*!
     * \brief Construit une Coordonnee par defaut
     */
    Coordonnee();
    /*!
     * \brief Construit une Coordonnee
     * \param x entier abscisse
     * \param y entier ordonnee
     */
    Coordonnee(int x, int y);
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
     * \brief donne a x la valeur de nX
     * \param nX entier de la nouvelle abscisse
     */
    void setX(int nX);
    /*!
     * \brief donne a y la valeur de nY
     * \param nY entier de la nouvelle ordonnee
     */
    void setY(int nY);

private:
    int x;
    int y;
};

#endif // COORDONNEE_H
