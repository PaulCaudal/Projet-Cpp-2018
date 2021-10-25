#ifndef ETOILE_H_INCLUDED
#define ETOILE_H_INCLUDED
#include "objet.h"
#include "svgfile.h"
#include "couleur.h"
class etoile:objet//declaration de la class etoile qui descend de la class objet
{
protected:
    int m_x;
    int m_y;//coordonee
    Couleur m_couleur;//couleur

public:
    etoile(int d,int m_x, int m_y, Couleur m_couleur);
    void dessiner(Svgfile& svgout);
};

#endif // ETOILE_H_INCLUDED
