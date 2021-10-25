#include"triangle.h"
#include "svgfile.h"
#include"biblio.h"
triangle::triangle(int x1, int x2, int x3, int y1, int y2, int y3 , Couleur couleur)//constructeur
:forme(couleur)
{
    m_x1=x1;
    m_x2=x2;
    m_x3=x3;
    m_y1=y1;
    m_y2=y2;
    m_y3=y3;
}

void triangle::dessiner(Svgfile& svgout)//dessiner
{
    svgout.addTriangle(m_x1,m_y1,m_x2,m_y2,m_x3,m_y3,m_couleur);
}
