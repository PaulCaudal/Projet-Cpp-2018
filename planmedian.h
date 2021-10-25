#ifndef PLANMEDIAN_H_INCLUDED
#define PLANMEDIAN_H_INCLUDED
#include "svgfile.h"
#include"plan.h"

class planmedian : plan//declaration de la class planmedian qui descend de la class plan
{
protected:
    int m_t;//taille des arbres

public:
    planmedian(Couleur couleur, int graine, int forme, int yhaut, int ybas, int d, int m_m,int m_t);
    void dessiner(Svgfile& svgout);
};

#endif // PLANMEDIAN_H_INCLUDED
