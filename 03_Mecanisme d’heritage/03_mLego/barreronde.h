#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"

class BarreRonde: public Barre
{
public:
    BarreRonde(string _reference, float _longueur, float _densite, string _alliage, float _diametre );
    double  CalculerSection();
private:
    float diametre;
};

#endif // BARRERONDE_H
