#include "barrehexagonale.h"
#include <iostream>
#include <math.h>

BarreHexagonale::BarreHexagonale(string _reference, int _longueur, float _densite, string _alliage, double _diametre):
    Barre(_reference,_longueur,_densite, _alliage ),
    diametre(_diametre)
{
    cout << "Constructeur de la classe BarreHexagone" << endl;
}

double BarreHexagonale::CalculerSection()
{
  double section = (2 * sqrt((3*diametre * diametre) / 4));
  return section;

}


double BarreHexagonale::CalculerMasse()
{
    double section = CalculerSection();
    double masse = longueur * section * densite;
    return masse;
}
