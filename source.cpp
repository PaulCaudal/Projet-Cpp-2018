#include"biblio.h"
#include<iostream>
#include<vector>
#include"util.h"

std::vector<int>grainearriereplan(int x1,int x2,int y1, int y2, int k, int d)//sous programme qui genere des coordonnee aleatoire pour l'ariere plan

{
    std::vector<int>graine;
    std::mt19937 rg1{k};
    for (int i=0; i<(5*d); ++i)
    {
        int j=util::alea(x1, x2, rg1);
        graine.push_back(j);
        int v=util::alea(y1, y2, rg1);
        graine.push_back(v);

    }
    return graine;
}
std::vector<int>grainemont( int k, int d)//sous programme qui genere des coordonnee aleatoire pour les montagne

{
    std::vector<int>graine;
    std::mt19937 rg1{k};
    int z,x,w;
    int j=0;
    for (int i=0; i<d; ++i)
    {
        int b=util::alea(600, 700, rg1);
        graine.push_back(b);
        int v=util::alea(200, 400, rg1);
        graine.push_back(v);
        if(j==0)// on essaye d'avoir une repartition equivalente des montagne sur l'ecran
        {
            w=util::alea(0, 600, rg1);
            graine.push_back(w);


        }
        if(j==1)
        {
            w=util::alea(400, 1000, rg1);
            graine.push_back(w);

        }
        do
        {
            if(j==0)
            {
                z=util::alea(0, 600, rg1);


            }
            if(j==1)
            {
                z=util::alea(400, 1000, rg1);

            }

            x=(z-w);
            if(x<0)
                x=-x;

        }
        while((x>300)||(x<200));//on blinde la taille des montagnes


        graine.push_back(z);
        if(j==1)
        {
            j=0;
        }
        else
        {
            j=1;
        }

    }

    return graine;
}
std::vector<int>grainels( int k)//sous programme qui genere des coordonnee aleatoire et une taille aleatoir pour la lune et pour le soleil
{
    std::vector<int>graine;
    std::mt19937 rg1{k};
    int j=util::alea(0, 1000, rg1);
    graine.push_back(j);
    int v=util::alea(0, 100, rg1);
    graine.push_back(v);
    return graine;
}
std::vector<int>grainecol(int k, int d)//sous programme qui genere des coordonnee et une taille aleatoire pour les collines
{
    std::vector<int>graine;
    std::mt19937 rg1{k};
    for(int i=0; i<d; i++)

    {
        int j=util::alea(0, 1000, rg1);
        graine.push_back(j);
        int v=util::alea(600, 700, rg1);
        graine.push_back(v);
        int w=util::alea(100, 200, rg1);
        graine.push_back(w);
    }
    return graine;
}
std::vector<int>graineherbe(int k, int d)//sous programme qui genere des coordonnee aleatoire pour l'herbe
{
    std::vector<int>graine;
    std::mt19937 rg1{k};
    for(int i=0; i<d; i++)

    {
        int j=util::alea(0, 1000, rg1);
        graine.push_back(j);
        int v=util::alea(600, 900, rg1);
        graine.push_back(v);

    }
    return graine;
}

std::vector<int>trie(std::vector<int>tab)// sous programme de trie pour avoir une sequence d'affichage logique par rapport au coordonné des objets
{
    size_t j=tab.size();// on prend la taille du tableau passer en parametre
    std::vector<int>tab2;//on en declare un deuxieme
    int y, y2,x2,v;
    for(size_t k=0; k<(j/2); k++)// premiere boucle
    {
        y2=900;//on initialyse la variable de comparaison
        for(size_t i=0; i<j; i++)
        {
            y=tab[i+1];// on ne s'interresse que aux Y
            if(y<y2)// on comare tout les Y du tableau j'usqu a trouver le plan petit
            {
                y2=y;// on retient les coordonné trouvé, et leurs positions
                x2=tab[i];
                v=i;
            }
            i=i+1;
        }
        tab2.push_back(x2);// on stock les coordonne dans le deuxieme tableau
        tab2.push_back(y2);
        tab[v]=900;//on les " efface"
        tab[v+1]=900;
    }
    return tab2;
}





