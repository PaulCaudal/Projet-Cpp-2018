#ifndef LUNESOLEIL_H_INCLUDED
#define LUNESOLEIL_H_INCLUDED
#include"objet.h"
#include "rond.h"
#include "couleur.h"
#include "svgfile.h"
#include<vector>
//iln'y a qu'une class pour ces deux objet car mise a part leurs couleur ils sont identique
class lunesoleil: objet//declaration de la class lune soleil qui descend de le class objet
{
protected:
    int m_g;//graine
    Couleur m_couleur;//couleur

public:
    lunesoleil(int m_d,int m_g, Couleur m_couleur);
    void dessiner( Svgfile& svgout);
};

#endif // LUNESOLEIL_H_INCLUDED
