#ifndef ARBRE_H_INCLUDED
#define ARBRE_H_INCLUDED
#include"objet.h"
#include"couleur.h"
#include"svgfile.h"

class arbre: objet//declaration de la class arbre qui descend de objet
{
protected:
    int m_x;
    int m_y;//coordonne
    int m_t;//taille
    Couleur m_couleur;//couleur du tronc
    Couleur m_couleur2;//couleur des feuille

public:
    arbre(int m_x,int m_y,int m_t, Couleur m_couleur,Couleur m_couleur2,int m_d);
    void dessiner (Svgfile& svgout,int j);
};


#endif // ARBRE_H_INCLUDED
