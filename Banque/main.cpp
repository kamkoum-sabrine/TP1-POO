#include <iostream>
#include <string>
#include "compte.h"
#include "compte.cpp"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Compte * C1;
    C1 = new Compte(6001, "BEN SALEH MOHAMED", 850.175);
    C1->deposerArgent(100);
    cout<<"Apres depot du montant "<<endl;
    C1->consulterSolde();
    C1->retirerArgent(50);
    cout<<"Apres retrait du montant "<<endl;
    C1->consulterSolde();
    return 0;
}
