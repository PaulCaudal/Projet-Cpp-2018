#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include"plan.h"
#include"planarriere.h"
#include "planmedian.h"
#include"util.h"
#include"couleur.h"
#include <iostream>
#include<stdlib.h>
#include"planavant.h"
///prototype des menu et des aleatoire
planarriere menuplanarrierecrea();
planmedian menuplanmediancrea();
planavant menuplanavantcrea();
planarriere aleapa();
planmedian aleapm();
planavant aleapav();
int densiteap();
int densitemp();
int graine();
int mutation();
Couleur colorap(int f);
Couleur colormp(int f);
Couleur coloravp(int f);
int menu();
int menu2();
#endif // MENU_H_INCLUDED
