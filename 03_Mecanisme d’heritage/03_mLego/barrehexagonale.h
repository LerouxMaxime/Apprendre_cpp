#ifndef BARREHEXAGONALE_H
#define BARREHEXAGONALE_H
#include "barre.h"

class BarreHexagonale : public Barre
{
public:
    BarreHexagonale(string _reference, int _longueur,float _densite, string _alliage, double _diametre);
    double  CalculerSection();
    double CalculerMasse();
protected:
    double diametre;
};

#endif // BARREHEXAGONALE_H
