#include <iostream>
#include<stdlib.h>
#include<random>
#include"plan.h"
#include"planarriere.h"
#include "planmedian.h"
#include"planavant.h"
#include"roche.h"
#include"util.h"
#include "svgfile.h"
#include"couleur.h"
#include "menu.h"
#include "sapin.h"
#include "herbe.h"
int main()
{
    Svgfile svgout;
    int choix;
    Couleur noir{0,0,0};
    Couleur blanc{255,255,255};
    planarriere a={noir,0,0,0,0,0,0};
    planmedian b={noir,0,0,0,0,0,0,0};
    planavant c={noir,0,0,0,0,0,0,0};
    int  i;
    do
    {
        i=0;
        ///menu, creation
        choix=menu();//apelle du premier menu
        if(choix==1)//créer
        {
            i=menu2();//menu auxiliaire
        }
        if (choix==2)//modifier
        {

            i=menu2();
            svgout.addcarre(0,0,1000,900,blanc);

        }
        if(i==1)// choix du plan a créer ou modifier
        {
             a=menuplanarrierecrea();
        }
        if(i==2)
        {
             b=menuplanmediancrea();
        }
        if(i==3)
        {
            c=menuplanavantcrea();
        }
        if(choix==3)// génération aleatoire
        {
            a=aleapa();
            b=aleapm();
            c=aleapav();
            a.dessiner(svgout);
            b.dessiner(svgout);
            c.dessiner(svgout);
        }

        if (choix==4)// dessiner le paysage
        {
            a.dessiner(svgout);
            b.dessiner(svgout);
            c.dessiner(svgout);
        }
    }
    while(choix!=0);//boucle de repetition
   // Couleur vert{0,255,0};
   // planavant k{vert,89,600,900,1,10,20,30};
    //k.dessiner(svgout);
    //roche k{500,300,50,vert,0};
   // k.dessiner(svgout);
   /* Couleur marron{128,0,0};
    Couleur vert{0,128,0};
    sapin k{500,400,50,marron,vert,6};
    k.dessiner(svgout);*/

    //herbe k{500,200,noir,0};
    //k.dessiner(svgout);


    return 0;

}
