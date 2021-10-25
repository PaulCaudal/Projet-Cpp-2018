#include"sapin.h"
#include "triangle.h"
sapin::sapin(int x,int y, int t, Couleur couleur, Couleur couleur2,int d)//constructeur
:objet(d)
{
    m_x=x;
    m_y=y;
    m_t=t;
    m_couleur=couleur;
    m_couleur2=couleur2;
}


void sapin::dessiner(Svgfile& svgout)// dessiner
{
    svgout.addcarre(m_x,m_y,(m_x+(m_t/3)),(m_y-m_t),m_couleur);// on palce le tronc
    //pour fair les hat du sapin on utilise trois triangle
    // on fait donc varié les coordonné en utilisant celle de base
    int x1=(m_x+(m_t/6));
    int y1=m_y-m_t;
    triangle b{(x1+m_t),(x1-m_t),x1,y1,y1,(y1-m_t),m_couleur2};// on declare puit on affiche ces trois triangle
    b.dessiner(svgout);
    b={(x1+m_t),(x1-m_t),x1,(y1-2*(m_t/3)),(y1-2*(m_t/3)),(y1-5*(m_t/3)),m_couleur2};
    b.dessiner(svgout);
    b={(x1+m_t),(x1-m_t),x1,(y1-4*(m_t/3)),(y1-4*(m_t/3)),(y1-7*(m_t/3)),m_couleur2};
    b.dessiner(svgout);
}
