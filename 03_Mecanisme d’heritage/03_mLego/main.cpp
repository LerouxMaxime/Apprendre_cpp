#include <iostream>
#include "barre.h"
#include "barreronde.h"
#include "barrerectangle.h"
#include "barrecarree.h"
#include "barrehexagonale.h"
using namespace std;

int main()
{

    BarreHexagonale laBarre("0B-42",50,2,"FER" ,5);
    double section = laBarre.CalculerSection();
        cout << section << endl;
        double masse = laBarre.CalculerMasse();
        cout << masse << endl;
    return 0;
}
