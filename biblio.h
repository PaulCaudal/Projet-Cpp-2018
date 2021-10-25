#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED
#include<iostream>
#include<vector>
#include"svgfile.h"
///prototype de nos fonction pour la graine
std::vector<int>grainearriereplan(int x1,int x2,int y1, int y2, int k, int d);
std::vector<int>grainemont( int k, int d);
std::vector<int>grainels( int k);
std::vector<int>grainecol(int k, int d);
std::vector<int>graineherbe(int k, int d);
std::vector<int>trie(std::vector<int>tab);
#endif // BIBLIO_H_INCLUDED
