#include"planavant.h"
#include"herbe.h"
#include"roche.h"
#include"fond.h"
#include<vector>
#include"sapin.h"
#include"biblio.h"
#include"arbre.h"
planavant::planavant(Couleur couleur, int graine, int yhaut, int ybas, int forme, int d,int m,int t)// constructeur
    :plan(couleur,graine,yhaut, ybas,forme, d,m)
{
    m_t=t;
}

///toute les classes plan fonctionne de la meme facon

void planavant::dessiner(Svgfile& svgout)
{
    m_couleur.muter(m_m);//on fait muter la couleur du fond

    herbe c{0,0,m_couleur,m_d};// on initialise nos objet
    Couleur marron{128,0,0};//on initialise nos couleur
    Couleur vert{0,128,0};
    Couleur gris{128,128,128};
    arbre a{0,0, 0,marron,vert,0};
    roche b{0,0,0,gris,m_d};
    //sapin a{0,0,15,marron,vert,m_d};
    svgout.addcarre(0,600,1000,900,m_couleur);//on affiche le fond
    std::vector<int>grainevec;//on declare le tableau de coordonne
    if(m_forme==1 || m_forme==2)//en fonction des objet choisi il y en a plus ou moins
    {
        grainevec=graineherbe(m_graine, 6*m_d);
    }
    if(m_forme==3)
    {
        grainevec=graineherbe(m_graine, 20*m_d);
    }
    grainevec=trie(grainevec);//on trie le tableau

    size_t j=grainevec.size();
    Couleur jaune{255,255,0};
    if(m_forme==1)// on affiche nos objet

    {

        for(size_t i=0; i<j; i++)
        {
            Couleur marron{128,0,0};
            Couleur vert{0,128,0};

            vert.muter(m_m);//on fait muter les couleur
            marron.muter(m_m);


            a= {grainevec[i],grainevec[i+1],5*m_t,marron,vert,m_d};//on declare l'objet
            a.dessiner(svgout,i);// et on laffiche
            i=i+1;
        }
    }
    if(m_forme==2)
    {
        for(size_t i=0; i<j; i++)
        {

            Couleur gris{128,128,128};
            gris.muter(m_m);
            b= {grainevec[i],grainevec[i+1],7*m_t,gris,m_d};
            b.dessiner(svgout);
            i=i+1;
        }
    }
    if(m_forme==3)
    {
        for(size_t i=0; i<j; i++)
        {

            Couleur jaune{255,255,0};
            jaune.muter(m_m);
            c= {grainevec[i],grainevec[i+1],jaune,m_d};
            c.dessiner(svgout);
            i=i+1;
        }
    }


}
