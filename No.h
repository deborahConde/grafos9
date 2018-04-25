#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

#include "Aresta.h"

class No{
    private:
        int iD;
        float pesoNo;
        No *proxNo;
        Aresta* listaAresta;
    public:
        No(int nome, float peso) {iD = nome; pesoNo = peso;};
        ~No();
        int getID() {return iD;};
        float getPeso();
        No* getProxNo() {return proxNo;};
        Aresta* getListaAresta() {return listaAresta;};
        void setPeso(float);
        void setProxNo(No* x) {proxNo = x;};
        void setListaAresta(Aresta*);
};

#endif // NO_H_INCLUDED
