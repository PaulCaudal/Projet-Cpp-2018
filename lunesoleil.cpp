#include"lunesoleil.h"
#include"biblio.h"

lunesoleil::lunesoleil(int d,int g, Couleur couleur)//constructeur
:objet(d)
{
    m_g=g;
    m_couleur=couleur;
}


void lunesoleil::dessiner(Svgfile& svgout)//dessiner
{
    std::vector<int>graine;
    graine=grainels(m_g);//on obtient des coordonee aleatoire en fonction de la graine
    int x=graine[0];
    int y=graine[1];
    int r=150;
    rond a{m_couleur,r,x,y};
    a.dessiner(svgout);
}
