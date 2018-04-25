#ifndef LEITOR_H
#define LEITOR_H
#include "../Grafo.h"

class Leitor
{
    public:
        Leitor();
        virtual ~Leitor();
        Grafo* ler();
    protected:

    private:
};

#endif // LEITOR_H
