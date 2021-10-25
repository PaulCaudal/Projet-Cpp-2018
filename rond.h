#ifndef ROND_H_INCLUDED
#define ROND_H_INCLUDED
#include"forme.h"
#include"couleur.h"
#include "svgfile.h"
class rond: forme// class rond qui descend de forme
{
protected:
    int m_x;
    int m_y;//coordonne
    int m_r;//rayon
public:
    rond(Couleur _couleur, int m_r, int m_x, int m_y);
    void dessiner(Svgfile& svgout);

};

#endif // ROND_H_INCLUDED
