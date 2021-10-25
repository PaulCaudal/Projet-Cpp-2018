#ifndef COLLINE_H_INCLUDED
#define COLLINE_H_INCLUDED
#include"objet.h"
#include"svgfile.h"
#include "couleur.h"

class colline: objet//declaration de la class colline qui descend de la class objet
{
protected:
    int m_x;
    int m_y;//coordonee
    int m_r;//rayon
    Couleur m_couleur;//couleur

public:
    colline(int m_d,int m_x,int m_y, int m_r, Couleur m_couleur);
    void dessiner(Svgfile& svgout);
};


#endif // COLLINE_H_INCLUDED
