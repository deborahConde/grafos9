#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include <string>
#include "No.h"
#include <iostream>

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
        void excluiAresta(int id_no_saida, int id_chegada);
        void excluiNo(int id_no);
        int retornaGrauNo(int id_no);
        bool verificaK(int regularidade);
        bool heTrivial();
        bool heNulo();
        void sequenciaDeGraus();
        string vizinhaFechada(int no);
};

#endif // GRAFO_H_INCLUDED
