#ifndef NUAGE_H_INCLUDED
#define NUAGE_H_INCLUDED
#include"objet.h"
#include "rond.h"
#include "couleur.h"
#include "svgfile.h"
#include<vector>
class nuage: objet//declartion de la class nuage qui descend de la class objet
{
protected:
    int m_x;
    int m_y;//coordonne
    int m_r;//rayon
    Couleur m_couleur;//couleur
public:
    nuage( int m_d,int m_x, int m_y, int m_r, Couleur m_couleur);
    void dessiner( Svgfile& svgout);
};


#endif // NUAGE_H_INCLUDED
