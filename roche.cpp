#include"roche.h"
#include "rond.h"
#include"ellipse.h"
roche::roche(int x, int y,int t, Couleur couleur,int d)// constructeur
:objet(d)
{
    m_x=x;
    m_y=y;
    m_t=t;
    m_couleur=couleur;
}

void roche::dessiner(Svgfile& svgout)// affichage
{
    ellipse b{m_x,m_y,m_t/2,m_t/4,m_couleur};
    b.dessiner(svgout);
    b={m_x,m_y-m_t/4,m_t/4,m_t/4,m_couleur};
    b.dessiner(svgout);


}
