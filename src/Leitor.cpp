#include "Leitor.h"
#include <iostream>
#include <fstream>
#include <string>
#include "../Grafo.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

Grafo* Leitor::ler(){
char letra;                 //VARIAVEIS
string linha;
int contaAresta = -1;
int ordem2 = 0;
No * no;
int numero[3];
int i;

ifstream leitura;
leitura.open("grafo.txt"); // ABRE ARQUIVO COM OS DADOS DO GRAFO

if(!leitura.is_open( )) // VERIRICA SE FOI POSSIVEL ABRIR O ARQUIVO
{
cout<<"Não foi possível abrir arquivo! Programa será terminado!\n";
leitura.clear( ); //reseta o objeto leitura, para limpar memória do sistema}
}


leitura.get(letra); // SALVA O PRIMEIRO CARACTERE DO TXT, A ORDEM DO GRAFO
ordem2 =  letra - 48;



Grafo* grafo = new Grafo(); // CRIA UM NOVO GRAFO

while (!leitura.eof()) { // VERIFICA SE POSSIU MAIS DADOS NO TXT


getline(leitura, linha); // FAZ A LEITURA DA LINHA
cout << linha;
 cout << endl;

char *cstr = new char[linha.length() + 1];   // NECESSARIO PARA CONVERSÃO DE CHAR EM INTEIRO
strcpy(cstr, linha.c_str());  // CONVERTE

  char * pch;

  pch = strtok (cstr," ,.-");
  i = 0;
  while (pch != NULL)  { // SEPARA CADA NUMERO E CONVERTE PARA INTEIRO
    numero[i] = atoi(pch);
    pch = strtok (NULL, " ,.-");
    /*cout << "numero" ;
    cout <<  numero[i]; APENAS PARA FIM DE VERIFICAÇÃO, APAGAR DPS
    cout << endl;*/
    i++;
  }

no = new No(numero[1] , 0);   // USA OS DADOS PARA CRIAR O NÓ


// CHAMA A FUNÇÃO DO GRAFO P INSERÇÃO DE NÓ(FAZER)!
//CHAMA A FUNÇÃO DO GRAFO QE INSERE A ARESTA(FAZER)!

cout << endl;

contaAresta++; // CONTADOR DO NUMERO DE ARESTAS
}

leitura.close(); // FECHA O AQRUIVO DO GRAFO
cout<< endl;


grafo->setNumAresta(contaAresta); // INSERER INFORAMÇÕES NO GRAFO
grafo->setOrdem(ordem2);
return grafo; //RETORNA O GRAFO CRIADO

}


Leitor::Leitor()
{
    //ctor
}

Leitor::~Leitor()
{
    //dtor
}
