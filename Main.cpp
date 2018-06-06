# include <iostream> // Necess�rio para std::cout e std::endl
#include "Leitor.h"


void menu(){

    int menu = 0;

    cout << "---===Menu===---";
    cout << "Digite 1 para incluir um n�." << endl;
    cout << "Digite 2 para incluir uma aresta" << endl;
    cout << "Digite 3 para excluir um n�." << endl;
    cout << "Digite 4 para excluir uma aresta." << endl;
    cout << "Digite 5 para exibir o grau do n�." << endl;
    cout << "Digite 6 para exibir K-regularidade." << endl;
    cout << "Digite 7 para exibir a ordem do grafo." << endl;
    cout << "Digite 8 para testar se o grafo � trivial." << endl;
    cout << "Digite 9 para testar se o grafo � nulo." << endl;
    cout << "Digite 10 para mostrar a vizinhan�a aberta de um n�." << endl;
    cout << "Digite 11 para mostrar a vizinhan�a fechada de um n�." << endl;
    cout << "Digite 12 para verificar se � multigrafo." << endl;
    cout << "Digite 13 para verificar se � grafo completo." << endl;
    cout << "Digite 14 para verificar se � bipartido." << endl;
    cout << "Digite 15 para exibir a sequ�ncia de graus." << endl;

    cin << menu;



    switch(menu){
    case 1: //Inclui N�
        insereNo()
        break;
    case 2: //Inclui Aresta
        break;
    case 3: //Exclui N�
        break;
    case 4: //Exclui Aresta - Rodar todo o grafo pelos n�s at� achar na lista das arestas de cada n�, aresta a ser excluida.
        break;
    case 5: //Retorna o grau de um n�
        break;
    case 6: //K-regularidade
        break;
    case 7: //Informar Ordem Grafo
        break;
    case 8: //Se � trivial
        break;
    case 9: //Se � nulo
        break;
    case 10: //Mostra vizinhan�a aberta de um dado n�
        break;
    case 11: //Mostra vizinha�a fechada
        break;
    case 12: //Verifica se � multigrafo
        break;
    case 13: // Verifica completo
        break;
    case 14: //Verifica Bipartido
        break;
    case 15: //Apresenta sequencia de graus;
        break;
    default:
        cout << "Inv�lido";
    }
}





int main()
{ //TESTEEEEE
    Leitor* x = new Leitor();
    Grafo * grafo = new Grafo();
    grafo = x->ler();
    No vertice = new No();

    menu();
}
