#ifndef ROCHE_H_INCLUDED
#define ROCHE_H_INCLUDED
#include "couleur.h"
#include "svgfile.h"
#include"objet.h"

class roche:objet//declaration de la class roche qui descend de objet
{
protected:
    int m_x;
    int m_y;//coordonne
    int m_t;//taille
    Couleur m_couleur;//couleur
public:
    roche(int m_x,int m_y,int m_t,Couleur m_couleur,int m_d);
    void dessiner(Svgfile& svgout);
};


#endif // ROCHE_H_INCLUDED
