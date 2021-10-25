#include"etoile.h"
#include"rond.h"
#include"triangle.h"
etoile::etoile(int d,int x, int y, Couleur couleur)//constructeur
:objet(d)
{
    m_x=x;
    m_y=y;
    m_couleur=couleur;

}

void etoile::dessiner(Svgfile& svgout)//dessiner
{

            rond a{m_couleur,11,m_x,m_y};//affichage du rond central
            a.dessiner(svgout);
            triangle b{m_x+5,m_x-5,m_x,m_y-10,m_y-10,m_y-25,m_couleur};//affichage des 8 branches
            b.dessiner(svgout);
             b={m_x+10,m_x+10,m_x+25,m_y-5,m_y+5,m_y,m_couleur};
            b.dessiner(svgout);
           b={m_x+5,m_x-5,m_x,m_y+10,m_y+10,m_y+25,m_couleur};
            b.dessiner(svgout);
             b={m_x-10,m_x-10,m_x-25,m_y-5,m_y+5,m_y,m_couleur};
            b.dessiner(svgout);
             b={m_x+10,m_x+5,m_x+20,m_y-5,m_y-10,m_y-20,m_couleur};
            b.dessiner(svgout);
             b={m_x-5,m_x-10,m_x-20,m_y-10,m_y-5,m_y-20,m_couleur};
            b.dessiner(svgout);
             b={m_x-10,m_x-5,m_x-20,m_y+5,m_y+10,m_y+20,m_couleur};
            b.dessiner(svgout);
            b={m_x+5,m_x+10,m_x+20,m_y+10,m_y+5,m_y+20,m_couleur};
            b.dessiner(svgout);

}
