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


void Grafo::insereNo(No *inserir)
{
    No * prox;
    No * aux;
    if(Noraiz == NULL)
    {
        Noraiz = inserir;
    }
    else
    {

        prox = Noraiz->getProxNo();

        while( prox != NULL)
        {
            aux = prox;
            prox = prox->getProxNo();

        }
        aux->setProxNo(inserir);

    }
}

void Grafo::insereAresta(int nosaida, int noentrada, float peso)
{
    Aresta * aresta = new Aresta(peso);
    aresta->setIdNo(noentrada);
    No * no = Noraiz;
    Aresta * aux2;
    Aresta * proxAresta;

    while( no->getId_no() != nosaida)
    {
        no = no->getProxNo();
    }

    proxAresta = no->getListaAresta();

    while( proxAresta != NULL)
    {
        aux2 = proxAresta;
        proxAresta = proxAresta->getProxAresta();

    }
    aux2->setProxAresta(aresta);
}

void Grafo::excluiNo(int id_no){
    int id = id_no;
    while (no->getId_no() != id){
        no = no->getProxNo(); //acha o no a ser excluido
    }

}

void Grafo::excluiAresta(int id_aresta)
{
    while(no->getProxNo()){

    }

}

int Grafo::retornaGrauNo(int id_no){

}

bool verificaK()


