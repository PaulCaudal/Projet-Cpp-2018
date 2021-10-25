#ifndef PLAN_H_INCLUDED
#define PLAN_H_INCLUDED
#include"couleur.h"
#include"svgfile.h"
//tout les plan vont descendre de cette class
class plan//declaration de la class plan
{
protected:
    Couleur m_couleur;//couleur
    int m_graine;//graine
    int m_forme;//forme
    int m_yhaut;
    int m_ybas;//hauteur du plan
    int m_d;//densité
    int m_m;//mutation des couleur
//tout les plan sont construit a partir de ces variable

public:
    plan(Couleur m_couleur, int m_graine,int m_forme,  int m_yhaut, int m_ybas, int m_d,int m_m);
};


#endif // PLAN_H_INCLUDED
