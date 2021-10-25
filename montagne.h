#ifndef MONTAGNE_H_INCLUDED
#define MONTAGNE_H_INCLUDED
#include"objet.h"
#include"svgfile.h"
#include "couleur.h"
#include<vector>
class montagne:objet//declaration de la class montagne  qui descend de la class objet
{
protected:
    int m_y;
    int m_w;
    int m_x;
    int m_c;
    int m_k;//on declare 5 coordonne pour la montagne pour les trois point a relié , le y de la base est le meme pour les deux points , il y a donc 5 coordonne et pas 6
    Couleur m_couleur;//couleur
    int m_m;//mutation
    int m_forme;//neige ou pas neige

public:
    montagne(int m_d, int m_y,int m_w,int m_x,int m_c,int m_k,Couleur m_couleur,int m_m, int m_forme);
    void dessiner(Svgfile& svgout);
};


#endif // MONTAGNE_H_INCLUDED
