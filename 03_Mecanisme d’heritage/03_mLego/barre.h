#ifndef BARRE_H
#define BARRE_H

#include <string>
using namespace std;
class Barre
{
public:
    Barre(string _reference,int _longueur,int _densite,string _alliage);
    void AfficherCaracteristiques();
    protected:
     string reference;
     int longueur;
     int densite;
     string alliage;
};

#endif // BARRE_H
