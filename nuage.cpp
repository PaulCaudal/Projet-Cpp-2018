#include "nuage.h"
#include "rond.h"
#include "svgfile.h"
nuage::nuage( int d,int x, int y, int r, Couleur couleur)//constructeur
:objet(d)
{
    //m_a=a;
    m_x=x;
    m_y=y;
    m_r=r;
    m_couleur=couleur;
}

void nuage::dessiner( Svgfile& svgout)
{



        rond a{m_couleur,m_r,m_x,m_y};//rond centrale du nuage
        a.dessiner(svgout);
        a={m_couleur,m_r,m_x+20,m_y};//8 rond en periférit du premier
        a.dessiner(svgout);
        a={m_couleur,m_r,m_x-20,m_y};
        a.dessiner(svgout);
        a={m_couleur,m_r,m_x,m_y+20};
        a.dessiner(svgout);
        a={m_couleur,m_r,m_x,m_y-20};
        a.dessiner(svgout);
        a={m_couleur,m_r,m_x+20,m_y+20};
        a.dessiner(svgout);
        a={m_couleur,m_r,m_x+20,m_y-20};
        a.dessiner(svgout);
        a={m_couleur,m_r,m_x-20,m_y+20};
        a.dessiner(svgout);
        a={m_couleur,m_r,m_x-20,m_y-20};
        a.dessiner(svgout);


}
