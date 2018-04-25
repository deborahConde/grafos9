# include <iostream> // Necessário para std::cout e std::endl
#include "Leitor.h"


int main()
{
    Leitor* x = new Leitor();
    Grafo * grafo = new Grafo();
    grafo = x->ler();

}
