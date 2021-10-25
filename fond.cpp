#include"fond.h"
#include<iostream>

fond::fond(int x1,int x2, int y1, int y2, Couleur couleur)//constructeur
:forme(couleur)
{
    m_x1=x1;
    m_x2=x2;
    m_y1=y1;
    m_y2=y2;
}

void fond::dessiner(Svgfile& svgout)//affichage
{
    svgout.addcarre(m_x1,m_y1,m_x2,m_y2,m_couleur);
    svgout.addLine(m_x1,m_y1,m_x2,m_y2,m_couleur);
}
