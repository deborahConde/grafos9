#include "Leitor.h"
#include <iostream>
#include <fstream>
#include <string>
#include "../Grafo.h"
#include "No.h"
#include "Aresta.h"
using namespace std;






Grafo::Grafo()
{
    Noraiz =  NULL;
}

Grafo::~Grafo()
{
    //dtor
}

void Grafo::insereNo(No *inserir){
No * prox;
No * aux;
if(Noraiz == NULL){
    Noraiz = inserir;
}
else{

prox = Noraiz->getProxNo();

        while( prox != NULL){
            aux = prox;
            prox = prox->getProxNo();

        }
 aux->setProxNo(inserir);

}


}

void Grafo::insereAresta(int nosaida, int noentrada, float peso){
Aresta * aresta = new Aresta(peso);
aresta->setIdNo(noentrada);
No * no = Noraiz;
Aresta * aux2;
Aresta * proxAresta;

 while( no->getID() != nosaida){
            no = no->getProxNo();
        }

proxAresta = no->getListaAresta();

  while( proxAresta != NULL){
            aux2 = proxAresta;
            proxAresta = proxAresta->getProxAresta();

        }
aux2->setProxAresta(aresta);

}



