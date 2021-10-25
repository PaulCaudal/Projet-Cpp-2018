#include"svgfile.h"
#include<iostream>
#include"montagne.h"
#include"colline.h"
#include"biblio.h"
#include<vector>
#include "svgfile.h"
#include"planmedian.h"
#include "sapin.h"
planmedian::planmedian(Couleur couleur, int graine, int yhaut, int ybas, int forme, int d,int m, int t)
    :plan(couleur,graine,yhaut, ybas,forme, d,m)
{
    m_t=t;
}
///voir planavant.cpp
void planmedian::dessiner(Svgfile& svgout)
{

    std::vector<int>grainevec;

    if(m_forme==1 || m_forme==3)
    {
        grainevec=grainemont(m_graine,m_d);
        size_t j=grainevec.size();
        for(size_t i=0; i<j; i++)
        {
            int y=grainevec[i];
            int w=grainevec[i+1];//x y w c et k snt des coordonne pour les montagne
            int x=grainevec[i+2];
            int c=grainevec[i+3];
            int k=(x+c)/2;
            m_couleur.muter(m_m);
            montagne a{m_d,y,w,x,c,k,m_couleur,m_m,m_forme};
            a.dessiner(svgout);
            i=i+3;
        }

    }
    if(m_forme==2 || m_forme==4)
    {
        grainevec=grainecol(m_graine,m_d);
        Couleur k;
        size_t j=grainevec.size();
        for(size_t i=0; i<j; i++)
        {
            int x=grainevec[i];
            int y=grainevec[i+1];
            int r=grainevec[i+2];
            k=m_couleur;
            k.muter(m_m);
            colline a{m_d,x,y,r,k};
            a.dessiner(svgout);
            if(m_forme==2)
            {
                Couleur marron{128,0,0};
                Couleur vert{0,128,0};
                marron.muter(m_m);
                vert.muter(m_m);
                sapin k{x,y-r,3*m_t,marron,vert,m_d};//on affiche les sapin
                k.dessiner(svgout);
                k= {x,y-(r/3)*2,3*m_t,marron,vert,m_d};
                k.dessiner(svgout);
                k= {x+r/2,y-r/2,3*m_t,marron,vert,m_d};
                k.dessiner(svgout);
                k= {x-r/2,y-r/2,3*m_t,marron,vert,m_d};
                k.dessiner(svgout);
            }
            i=i+2;
        }
    }

}
