#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED
#include <string>
class Compte
{
    private:
       int numCompte;
       std::string nomProprietaire;
       float solde;
    public:
        Compte(){
            numCompte=0;
            nomProprietaire="";
            solde=0.0;
        };
        Compte(int,std::string,float);
        bool retirerArgent(float montant);
        void deposerArgent(float montant);
        void consulterSolde();
};

#endif // COMPTE_H_INCLUDED
