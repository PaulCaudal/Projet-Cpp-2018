#ifndef LIGNE_H_INCLUDED
#define LIGNE_H_INCLUDED
#include"forme.h"
#include"couleur.h"
#include"svgfile.h"

class ligne: forme//declaration de la class ligne qui descnd de la class forme
{
protected:
    int m_x;
    int m_y;
    int m_x1;
    int m_y1;// coordonne des deux points a relié

public:
    ligne(int m_x,int m_y,int m_x1,int m_y1,Couleur m_couleur);
    void dessiner(Svgfile& svgout);
};


#endif // LIGNE_H_INCLUDED
