#include "barre.h"
#include <iostream>

using namespace std;

Barre::Barre(string _reference, int _longueur,int _densite, string _alliage):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    alliage(_alliage)
{
    cout << "Constructeur de la classe Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
    cout << "Référence: " << reference << endl;
    cout << "Longueur: " << longueur <<" cm" << endl;
    cout << "Densité : " << densite << endl;
    cout << "Nom de l'alliage: " << alliage << endl;
}
