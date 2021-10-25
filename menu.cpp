#include"menu.h"
#include<time.h>
int menu()// premier menu
{
    int choix;//choix des possibilité
    do
    {
        system("cls");
        std::cout<<"1:creer un plan"<<std::endl;
        std::cout<<"2:modifier un plan"<<std::endl;
        std::cout<<"3:aleatoir"<<std::endl;
        std::cout<<"4:dessiner"<<std::endl;
        std::cout<<"0:quitter"<<std::endl;
        std::cin>>choix;
    }
    while(choix<0 || choix>4);//blindage
    return choix;
}

int menu2()// choix du plan a créer ou a modifier
{
    int choix;
    do
    {
        system("cls");
        std::cout<<"1:plan arriere"<<std::endl;
        std::cout<<"2:plan median"<<std::endl;
        std::cout<<"3:plan avant"<<std::endl;
        std::cin>>choix;
    }
    while(choix<1 || choix>3);//blindage
    return choix;
}






planarriere menuplanarrierecrea()
{
    int f,d,g,m;// declaration des variables
    Couleur col;

    system("cls");
    std::cout<<"definir parametre"<<std::endl;
    do
    {
        std::cout<<"1:jour avec soleil"<<std::endl;
        std::cout<<"2:nuit avec lune"<<std::endl;
        std::cout<<"3:jour sans soleil"<<std::endl;
        std::cout<<"4:nuit sans lune"<<std::endl;
        std::cin>>f;
    }
    while(f<1 || f>4);// blindage
    system("cls");
    d=densiteap();// apelle des differents sous programme
    system("cls");
    g=graine();
    system("cls");
    m=mutation();
    system("cls");
    col=colorap(f);
    planarriere a{col,g,f,0,600,d,m};
    return a;

}
planarriere aleapa()// aleatoire du plan arriere
{
    srand(time(NULL));
    int f=rand()%(4-1)+1;
    int d=rand()%10;
    int g=rand()%100;
    int m=rand()%100;
    Couleur col =colorap(f);
    planarriere a{col,g,f,0,600,d,m};
    return a;
}


int densiteap()// densité de l'arriere plan
{
    int d;
    do
    {
        std::cout<<"densite entre 0 et 10"<<std::endl;
        std::cin>>d;
    }
    while(d<0 || d>10);
    return d;
}
int densitemp()//densite du plan median
{
    int d;
    do
    {
        std::cout<<"densite entre 0 et 15"<<std::endl;
        std::cin>>d;
    }
    while(d<0 || d>15);
    return d;
}
int graine()// choix de la graine
{
    int g;
    std::cout<<"graine?"<<std::endl;
    std::cin>>g;
    return g;
}

int mutation()// choix de la mutation des couleurs
{
    int m;
    do
    {
        std::cout<<"mutation couleur entre 0 et 100"<<std::endl;
        std::cin>>m;
    }
    while(m<0 || m>100);
    return m;
}

Couleur colorap(int f)// choix automatique  de la couleur de l'arriere plan
{
    Couleur jour {128,255,255};
    Couleur nuit {0,0,200};
    Couleur bleu;
    if(f==1 || f==3)
    {
        bleu=jour;
    }
    else
    {
        bleu=nuit;
    }
    return bleu;
}

Couleur colormp(int f)// choix automatique  de la couleur de  plan madian
{
    Couleur mont{128,128,128};
    Couleur col{94,114,14};
    Couleur pm;
    if(f==1 || f==3)
    {
        pm=mont;
    }
    else
    {
        pm=col;
    }
    return pm;
}

planmedian menuplanmediancrea()// menu de creation et de modification du plan median
{
    int f,d,g,m,t;
    Couleur col;
    system("cls");
    std::cout<<"definir parametre"<<std::endl;
    do
    {
        std::cout<<"1:montagne avec neige"<<std::endl;
        std::cout<<"2:colinne avec arbres"<<std::endl;
        std::cout<<"3:montagne sans neige"<<std::endl;
        std::cout<<"4:colinne sans arbres"<<std::endl;

        std::cin>>f;
    }
    while(f<1 || f>4);
    system("cls");
    if(f==2)// choix de la taille des arbre
    {
        do
        {
            std::cout<<"taille des arbres entre 1 et 10"<<std::endl;
            std::cin>>t;
        }
        while(t<1 || t>10);
    }
    system("cls");
    d=densitemp();
    system("cls");
    g=graine();
    system("cls");
    m=mutation();
    system("cls");
    col=colormp(f);
    planmedian a{col,g,f,0,600,d,m,t};
    return a;
}

planmedian aleapm()// aleatoire pour le plan median
{
    srand(time(NULL));
    int f=rand()%(4-1)+1;
    int t=rand()%10;
    int d=rand()%15;
    int g=rand()%100;
    int m=rand()%100;
    Couleur col =colormp(f);
    planmedian a{col,g,f,0,600,d,m,t};
    return a;
}


planavant menuplanavantcrea()// menu de creation et de modification de l'avant plan
{
    int f,d,g,m,t;
    Couleur col;
    system("cls");
    std::cout<<"definir parametre"<<std::endl;
    do
    {
        std::cout<<"1:foret"<<std::endl;
        std::cout<<"2:carriere de pierre"<<std::endl;
        std::cout<<"3:champ"<<std::endl;


        std::cin>>f;
    }
    while(f<1 || f>3);
    system("cls");
    if(f==1)//choix de la taille des arbres
    {
        do
        {
            std::cout<<"taille des arbres entre 1 et 10"<<std::endl;
            std::cin>>t;
        }
        while(t<1 || t>10);
    }
     if(f==2)// choix de la taille des roches
    {
        do
        {
            std::cout<<"taille des roche entre 1 et 10"<<std::endl;
            std::cin>>t;
        }
        while(t<1 || t>10);
    }
    system("cls");
    d=densitemp();
    system("cls");
    g=graine();
    system("cls");
    m=mutation();
    system("cls");
    col=coloravp(f);
    planavant a{col,g,f,0,600,d,m,t};
    return a;
}

planavant aleapav()// aleatoir du plan avant
{
    srand(time(NULL));
    int f=rand()%(4-1)+1;
    int t=rand()%10;
    int d=rand()%15;
    int g=rand()%100;
    int m=rand()%100;
    Couleur col =coloravp(f);
    planavant a{col,g,f,0,600,d,m,t};
    return a;
}

Couleur coloravp(int f)// choix automatique  de la couleur de l'avant plan
{
    Couleur vert{0,128,64};
    Couleur marron{128,0,0};
    Couleur b{193,97,0};
    Couleur a;
    if(f==1)
    {
        a=vert;
    }
    if(f==2)
    {
        a=b;
    }
    if(f==3)
    {
        a=marron;
    }
    return a;
}


