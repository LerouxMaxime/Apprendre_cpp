#include "barrecarree.h"
#include <iostream>
using namespace std;

BarreCarree::BarreCarree(string _reference, int _longueur, int _densite, string _alliage, int _cote):
    Barre(_reference, _longueur, _densite, _alliage),
    cote(_cote)
{
cout << "Constructeur de la classe BarreCarree" << endl;
}


double BarreCarree::CalculerSection()
{
    double section = cote * cote;
    return section;
}

double BarreCarree::CalculerMasse()
{
    double section = CalculerSection();
    double masse = longueur * section * densite;
    return masse;
}
