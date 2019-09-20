#include "barrerectangle.h"
#include <iostream>
using namespace std;

BarreRectangle::BarreRectangle(string _reference, int _longueur, int _densite, string _alliage, int _largeur):
    Barre(_reference, _longueur, _densite, _alliage),
    largeur(_largeur)
{
cout << "Constructeur de la classe BarreRectangle" << endl;
}

double BarreRectangle::CalculerSection()
{
    double section = largeur * longueur;
    return section;
}
