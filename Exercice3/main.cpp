#include <iostream>
#include "verre.h"
#include "Bouteille.h"
#include "Bouteille.cpp"
#include "verre.cpp"

using namespace std;

int main()
{
    Bouteille *B1;
    Bouteille *B2;
    B1 = new Bouteille(1000);
    B2 = new Bouteille(1000);

    Verre *V;
    V = new Verre(20);
    cout<<V->getQuantite();
    B1->verser_dans(V,15);
    //cout<<V->getQuantite();
    B2->verser_dans(V,5);
    //cout<<V->getQuantite();

    V->boire(V->getQuantite());

    cout<<V->getQuantite();
    return 0;
}
