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
    ordem = 0;
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
    ordem = ordem + 1;
}

void Grafo::insereAresta(int nosaida, int noentrada, float peso)
{
    Aresta * aresta = new Aresta(peso);
    aresta->setId_no(noentrada);
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
    No * no = Noraiz;
    int id = id_no;
    while (no->getId_no() != id){
        no = no->getProxNo(); //acha o no a ser excluido
    }

}

void Grafo::excluiAresta(int id_no_saida, int id_chegada)
{   No * no = Noraiz;

    while(no->getId_no() != id_no_saida ){
           no =  no->getProxNo();

    }

}

int Grafo::retornaGrauNo(int id_no){
 No * no = Noraiz;
 Aresta * aresta;
    while(no->getId_no() != id_no ){
           no =  no->getProxNo();
    }
    aresta = no->getListaAresta();
    int i = 0 ;
    while(aresta != NULL){
        i++;
        aresta = aresta->getProxAresta();
    }
return i;
}

bool Grafo::verificaK(int regularidade){
     No * no = Noraiz;
    Aresta * aresta;

     while(no != NULL ){
            aresta = no->getListaAresta();

             int i = 0 ;
        while(aresta != NULL){
            i++;
            aresta = aresta->getProxAresta();
        }
           if(i != regularidade){
            return false;
           }

           no =  no->getProxNo();
    }

   return true;
}

int Grafo::getOrdem(){
int i = 0;
 No * no = Noraiz;

    while(no != NULL ){
    i++;
    no =  no->getProxNo();
    }

    return i;
}

bool Grafo::heTrivial(){
 if(ordem == 1){
    return true;
 }
 else
    return false;

}


bool Grafo::heNulo(){
if(ordem == 0 ){
    return true;
}
else
    return false;
}

void Grafo::sequenciaDeGraus(){
No * no = Noraiz;
 Aresta * aresta;

while(no != NULL ){
            aresta = no->getListaAresta();

             int i = 0 ;
        while(aresta != NULL){
            i++;
            aresta = aresta->getProxAresta();
        }
        cout << "No: ";
        cout << no->getId_no();
        cout << "Grau: " ;
         cout << i;
         cout << endl;


           no =  no->getProxNo();
    }


}


string Grafo::vizinhaFechada(int no){
    No * no = Noraiz;
     Aresta * aresta;
    string vizinhca = "{";
    while(no->getId_no() != id_no ){
           no =  no->getProxNo();
               }
               aresta = no->getListaAresta();
               while(aresta != NULL){
            vizinhaca = vizinhca + ", " + aresta->getId_no();
            aresta = aresta->getProxAresta();
        }
        vizinhaca = vizinha + "}";
return string;
}



