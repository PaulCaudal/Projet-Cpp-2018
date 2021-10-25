#include"herbe.h"
#include"ligne.h"

herbe::herbe(int x, int y, Couleur couleur,int d)//constructeur
:objet(d)
{
    m_x=x;
    m_y=y;
    m_couleur=couleur;
}

void herbe::dessiner(Svgfile& svgout)// affichage
{
    ligne a{m_x,m_y,m_x+10,m_y-20,m_couleur};
    a.dessiner(svgout);
    a={m_x,m_y,m_x-10,m_y-20,m_couleur};
    a.dessiner(svgout);
    a={m_x,m_y,m_x-5,m_y-20,m_couleur};
    a.dessiner(svgout);
    a={m_x,m_y,m_x+5,m_y-20,m_couleur};
    a.dessiner(svgout);
    a={m_x,m_y,m_x,m_y-20,m_couleur};
    a.dessiner(svgout);
}
