#include"planarriere.h"
#include"svgfile.h"
#include<iostream>
#include"biblio.h"
#include<vector>
#include"nuage.h"
#include"lunesoleil.h"
#include"etoile.h"
#include"fond.h"
planarriere::planarriere(Couleur couleur, int graine, int yhaut, int ybas, int forme, int d,int m)
    :plan(couleur,graine,yhaut, ybas,forme, d,m)
{}
///voir planavant.cpp

void planarriere::dessiner(Svgfile& svgout)
{


    m_couleur.muter(m_m);
    Couleur a {80,110,240};
    fond c{0,1000,m_yhaut,m_ybas,m_couleur};
    c.dessiner(svgout);
    std::vector<int>grainevec;
    grainevec=grainearriereplan(0,1000,0,300,m_graine, m_d);
    Couleur blanc {255,255,255};
    Couleur jaune{255,255,0};
    Couleur gris {128,128,128};
    size_t j=grainevec.size();
    if(m_forme==1)
    {
        jaune.muter(m_m);
        lunesoleil b{m_d,m_graine,jaune};//on affiche le soleil avant les nuage
        b.dessiner(svgout);
        for(size_t i=0; i<j; i++)
        {
            int x=grainevec[i];

            int y=grainevec[i+1];
            blanc.muter(m_m);
            nuage a{m_d,x,y,20,blanc};
            a.dessiner( svgout);
            i=i+1;
        }
    }
    if(m_forme==2)
    {

        for(size_t i=0; i<j; i++)
        {
            int x=grainevec[i];

            int y=grainevec[i+1];
            blanc.muter(m_m);
            etoile a{m_d,x,y,blanc};
            a.dessiner(svgout);
            i=i+1;
        }
        gris.muter(m_m);
         lunesoleil a{m_d,m_graine,gris};//on affiche la lune apres les etoile
        a.dessiner(svgout);
    }
    if(m_forme==3)
    {

        for(size_t i=0; i<j; i++)
        {
            int x=grainevec[i];

            int y=grainevec[i+1];
            blanc.muter(m_m);
            nuage a{m_d,x,y,20,blanc};
            a.dessiner( svgout);
            i=i+1;
        }
    }
    if(m_forme==4)
    {

        for(size_t i=0; i<j; i++)
        {
            int x=grainevec[i];

            int y=grainevec[i+1];
            blanc.muter(m_m);
            etoile a{m_d,x,y,blanc};
            a.dessiner(svgout);
            i=i+1;
        }

    }



}
