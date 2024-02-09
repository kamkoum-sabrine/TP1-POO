#ifndef VERRE_H_INCLUDED
#define VERRE_H_INCLUDED

class Verre
{
    private:
        int contenance;
        int quantite;
    public:
        Verre(){
            contenance = 0;
            quantite = 0;
        }
        Verre(int);
        int getQuantite(){
            return quantite;
        }
        void setQuantite(int quantite){
            this->quantite = quantite;
        }
        void remplir(int);
        void boire(int);
};

#endif // VERRE_H_INCLUDED
