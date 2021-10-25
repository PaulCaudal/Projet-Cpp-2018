#ifndef PLANAVANT_H_INCLUDED
#define PLANAVANT_H_INCLUDED
#include"plan.h"
#include "svgfile.h"
class planavant :public plan//declaration de la class planavant qui descend de la class plan
{
protected:
    int m_t;//taille des arbre
public:
    planavant(Couleur couleur, int graine, int forme, int yhaut, int ybas, int d,int m, int m_t);
    void dessiner(Svgfile& svgout);
};


#endif // PLANAVANT_H_INCLUDED
