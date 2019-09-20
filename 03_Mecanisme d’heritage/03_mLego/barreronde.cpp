#include "barreronde.h"
#include <iostream>
using namespace std;

BarreRonde::BarreRonde(string _reference, float _longueur, float _densite,
                       string _alliage, float _diametre):
    Barre(_reference, _longueur, _densite, _alliage)
{
    cout << "Constructeur de la classe BarreRonde" << endl;
}

double BarreRonde::CalculerSection()
{
   double section = (3.14 * diametre * diametre) / 4;
   return section;
}
