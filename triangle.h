#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
#include"forme.h"
#include"couleur.h"
#include"svgfile.h"
class triangle: forme//creation de la class triangle qui descend de la class forme
{
protected:
    int m_x1;
    int m_x2;
    int m_x3;
    int m_y1;
    int m_y2;
    int m_y3;// declaration des 6 coordone qui vont representer les trois sommets du triangle


public:
    triangle(int m_x1, int m_x2, int m_x3, int m_y1, int m_y2, int m_y3 , Couleur m_couleur);
    void dessiner(Svgfile& svgout);
};

#endif // TRIANGLE_H_INCLUDED
