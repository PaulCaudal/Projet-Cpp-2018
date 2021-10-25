#include"ligne.h"

ligne::ligne(int x, int y,int x1,int y1, Couleur couleur)// constructeur
:forme(couleur)
{
    m_x=x;
    m_y=y;
    m_x1=x1;
    m_y1=y1;
}

void ligne::dessiner(Svgfile& svgout )//dessiner
{
    svgout.addLine(m_x,m_y,m_x1,m_y1,m_couleur);
}
