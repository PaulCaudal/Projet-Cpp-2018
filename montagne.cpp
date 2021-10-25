#include"objet.h"
#include"svgfile.h"
#include "couleur.h"
#include<vector>
#include "montagne.h"
#include"triangle.h"
montagne::montagne(int d, int y,int w,int x,int c,int k,Couleur couleur,int m, int forme)//constructeur
    :objet(d)
{
    m_y=y;
    m_w=w;
    m_x=x;
    m_c=c;
    m_k=k;
    m_couleur=couleur;
    m_m=m;
    m_forme=forme;
}

void montagne::dessiner( Svgfile& svgout)//dessiner
{


    triangle b{m_x,m_k,m_c,m_y,m_w,m_y,m_couleur};//affichage de la montagne sans la neige
    b.dessiner(svgout);

    if(m_forme==1)
    {
        int x1=((m_k+m_x)/2);
        int x3=((m_c+m_k)/2);
        int y1=((m_w+m_y)/2);
        x1=((m_k+x1)/2);
        x3=((x3+m_k)/2);//on veut que la neige soit des trois quart jusqu a la pointe de la montagne
        y1=((m_w+y1)/2);
        Couleur blanc{255,255,255};
        blanc.muter(m_m);
        b= {x1,m_k,x3,y1,m_w,y1,blanc};
        b.dessiner(svgout);
    }
}

