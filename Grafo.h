#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

#include "No.h"

class Grafo{
    private:
        int ordem;
        int grauGrafo;
        int numArestas;
        No *Noraiz;

    public:
        Grafo();
        ~Grafo();
        No* getListaNos();
        void insereNo(No * inserir);
        void insereAresta(int nosaida, int noentrada, float peso);
        void setNumAresta(int a) {numArestas = a;}
        void setOrdem(int a) {ordem = a;}
        int getOrdem();
        int getGrau();
        int getNumArestas();
        void setListaNos(No*);
        void excluiAresta();
};

#endif // GRAFO_H_INCLUDED
