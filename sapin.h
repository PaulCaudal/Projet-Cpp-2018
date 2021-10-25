#ifndef SAPIN_H_INCLUDED
#define SAPIN_H_INCLUDED
#include"objet.h"
#include"couleur.h"
#include"svgfile.h"

class sapin: objet//creation de la class sapin qui descend de la class objet
{
protected:
    int m_x;
    int m_y;//coordonne
    int m_t;//taille
    Couleur m_couleur;//couleur du tronc
    Couleur m_couleur2;//couleur des feille

public:
    sapin(int m_x,int m_y,int m_t, Couleur m_couleur,Couleur m_couleur2,int m_d);
    void dessiner (Svgfile& svgout);
};


#endif // SAPIN_H_INCLUDED
