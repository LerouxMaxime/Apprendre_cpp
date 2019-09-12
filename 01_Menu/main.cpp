#include <iostream>
#include "menu.h"
using namespace std;

int main()
{
    int choix;
    Menu leMenu("Menu.txt");
    choix = leMenu.Afficher();
    cout << "vous avez choisi l'option : " << choix << endl;
    return 0;
}
