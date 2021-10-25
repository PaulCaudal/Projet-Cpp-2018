#ifndef HERBE_H_INCLUDED
#define HERBE_H_INCLUDED
#include "couleur.h"
#include "svgfile.h"
#include"objet.h"

class herbe:objet// declartion de la class herbe
{
protected:
    int m_x;
    int m_y;

    Couleur m_couleur;

public:
    herbe(int m_x,int m_y,Couleur m_couleur,int m_d);
    void dessiner(Svgfile& svgout);
};

#endif // HERBE_H_INCLUDED
