#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"

class BarreCarree: public Barre
{
public:
    BarreCarree(string _reference, int _longueur,int _densite, string _nomDeAlliage, int _cote);
    double CalculerSection();
       double CalculerMasse();
private:
    int cote;
};

#endif // BARRECARREE_H
