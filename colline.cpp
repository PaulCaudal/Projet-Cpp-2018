#include"colline.h"
#include"rond.h"

colline::colline(int d,int x,int y, int r, Couleur couleur)//constructeur
:objet(d)
{
    m_x=x;
    m_y=y;
    m_r=r;
    m_couleur=couleur;

}

void colline::dessiner(Svgfile& svgout)// dessiner
{
    rond a{m_couleur,m_r,m_x,m_y};
    a.dessiner(svgout);
}
