#ifndef PLANARRIERE_H_INCLUDED
#define PLANARRIERE_H_INCLUDED
#include"plan.h"
#include "svgfile.h"
class planarriere :public plan//declaration de la class planarriere qui descend de la class plan
{
public:
    planarriere(Couleur couleur, int graine, int forme, int yhaut, int ybas, int d,int m);
    void dessiner(Svgfile& svgout);
};


#endif // PLANARRIERE_H_INCLUDED
