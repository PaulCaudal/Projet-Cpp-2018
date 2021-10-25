#ifndef FORME_H_INCLUDED
#define FORME_H_INCLUDED
#include"couleur.h"
//toute les forme descende de cette class
class forme//declaration de la class forme
{
protected :
    Couleur m_couleur;//chaque forme a une couleur

public:
    forme(Couleur m_couleur);
};

#endif // FORME_H_INCLUDED
