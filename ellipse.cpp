#include"ellipse.h"

 ellipse::ellipse(int x,int y, int rx, int ry, Couleur couleur)//constructeur
:forme(couleur)
{
    m_x=x;
    m_y=y;
    m_rx=rx;
    m_ry=ry;
}


void ellipse::dessiner(Svgfile& svgout)//dessiner
{
    svgout.addellipse(m_x,m_y,m_rx,m_ry,m_couleur);
}
