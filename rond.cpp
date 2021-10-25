#include"rond.h"
#include "svgfile.h"
#include"biblio.h"
rond::rond(Couleur couleur,int r, int x, int y)//constructeur
:forme(couleur)
{

    m_r=r;
    m_x=x;
    m_y=y;
}

void rond::dessiner(Svgfile& svgout)//dessiner
{
    svgout.addDisk(m_x,m_y,m_r,m_couleur);
}
