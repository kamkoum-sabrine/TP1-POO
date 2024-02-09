#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED

#include <string>

class Etudiant
{
    private:
        std::string nom;
        std::string prenom;
        float tab_notes[10];

    public:
        Etudiant(){
            nom ="";
            prenom = "";
            for (int i=0; i<10;i++){
                tab_notes[i]=0;
            }
        }

        Etudiant(std::string nom, std::string prenom, float tab_notes[10])
        {
            this->nom = nom;
            this->prenom = prenom;
            for (int i=0;i<10;i++){
                this->tab_notes[i] = tab_notes[i];
            }
        }

        void saisir();
        void afficher();
        float moyenne();
        bool admis();
        int exae_quo(Etudiant *E);

};

#endif // ETUDIANT_H_INCLUDED
