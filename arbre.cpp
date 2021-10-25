#include"arbre.h"
#include "ellipse.h"
#include"util.h"
#include<random>
#include<iostream>
arbre::arbre(int x,int y, int t, Couleur couleur, Couleur couleur2,int d)//constructeur
    :objet(d)
{
    m_x=x;
    m_y=y;
    m_t=t;
    m_couleur=couleur;
    m_couleur2=couleur2;
}

void arbre::dessiner(Svgfile& svgout,int j)// dessiner
{
    int t3;

    for(int i=0; i<3;i++)// apparition aleatoir des branches
    {
        std::mt19937 rg1{j};
        int x2=util::alea(m_x,(m_x+(m_t/3)), rg1);
        int y2=util::alea((m_y-m_t),(m_y-m_t/2), rg1);//on veux que les branche partent du tronc
        int t2=util::alea(-m_t,m_t,rg1);//taile des brache
        //std::cout<<x2<<"     "<<y2<<"    "<<t2;;
        if(t2<0)
             t3=-t2;//on veut une taille >0
        else
             t3=t2;
        //svgout.addcarre(x2,y2,x2+t2,y2-t2/2,m_couleur);
        svgout.addLine(x2,y2,x2+t2,y2-t3/2,m_couleur);
        ellipse b {x2+t2,y2-t3/2,t3/2,t3/4,m_couleur2};//on affiche la branche et les feuille
        b.dessiner(svgout);
        j=j+7;
    }
    svgout.addcarre(m_x,m_y,(m_x+(m_t/3)),(m_y-2*m_t),m_couleur);//tronc

    ellipse a{(m_x+(m_t/3)),(m_y-2*m_t),m_t,m_t/2,m_couleur2};//hamat de feuille principale
    a.dessiner(svgout);
}
