#ifndef ELLIPSE_H_INCLUDED
#define ELLIPSE_H_INCLUDED
#include"forme.h"
#include"couleur.h"
#include"svgfile.h"

class ellipse: forme// classe ellipse qui descend de la forme
{
protected:
    int m_x;
    int m_y;//coordonne
    int m_rx;
    int m_ry;//rayons

public:
    ellipse(int m_x,int m_y, int m_rx, int m_ry, Couleur m_couleur);
    void dessiner(Svgfile& svgout);
};


#endif // ELLIPSE_H_INCLUDED
