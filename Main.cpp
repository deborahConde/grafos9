# include <iostream> // Necessário para std::cout e std::endl
#include "Leitor.h"


void menu(){

    int menu = 0;

    cout << "---===Menu===---";
    cout << "Digite 1 para incluir um nó." << endl;
    cout << "Digite 2 para incluir uma aresta" << endl;
    cout << "Digite 3 para excluir um nó." << endl;
    cout << "Digite 4 para excluir uma aresta." << endl;
    cout << "Digite 5 para exibir o grau do nó." << endl;
    cout << "Digite 6 para exibir K-regularidade." << endl;
    cout << "Digite 7 para exibir a ordem do grafo." << endl;
    cout << "Digite 8 para testar se o grafo é trivial." << endl;
    cout << "Digite 9 para testar se o grafo é nulo." << endl;
    cout << "Digite 10 para mostrar a vizinhança aberta de um nó." << endl;
    cout << "Digite 11 para mostrar a vizinhança fechada de um nó." << endl;
    cout << "Digite 12 para verificar se é multigrafo." << endl;
    cout << "Digite 13 para verificar se é grafo completo." << endl;
    cout << "Digite 14 para verificar se é bipartido." << endl;
    cout << "Digite 15 para exibir a sequência de graus." << endl;

    cin << menu;



    switch(menu){
    case 1: //Inclui Nó
        insereNo()
        break;
    case 2: //Inclui Aresta
        break;
    case 3: //Exclui Nó
        break;
    case 4: //Exclui Aresta - Rodar todo o grafo pelos nós até achar na lista das arestas de cada nó, aresta a ser excluida.
        break;
    case 5: //Retorna o grau de um nó
        break;
    case 6: //K-regularidade
        break;
    case 7: //Informar Ordem Grafo
        break;
    case 8: //Se é trivial
        break;
    case 9: //Se é nulo
        break;
    case 10: //Mostra vizinhança aberta de um dado nó
        break;
    case 11: //Mostra vizinhaça fechada
        break;
    case 12: //Verifica se é multigrafo
        break;
    case 13: // Verifica completo
        break;
    case 14: //Verifica Bipartido
        break;
    case 15: //Apresenta sequencia de graus;
        break;
    default:
        cout << "Inválido";
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
