#ifndef FOND_H_INCLUDED
#define FOND_H_INCLUDED
#include"forme.h"
#include"couleur.h"
#include"svgfile.h"

class fond: forme//declaration de la class fond qui descend de le class form
{
protected:
    int m_x1;
    int m_x2;
    int m_y1;
    int m_y2;// coordonne de la diagonal du fond

public:
    fond(int m_x1,int m_x2,int m_y1,int m_y2,Couleur m_couleur);
    void dessiner(Svgfile& svgout);
};


#endif // FOND_H_INCLUDED
