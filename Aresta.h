#ifndef ARESTA_H_INCLUDED
#define ARESTA_H_INCLUDED

class Aresta{
    private:
        float pesoAresta;
        int id_aresta;
        Aresta *proxAresta;
    public:
        Aresta(float peso) { pesoAresta = peso;};
        ~Aresta();
        float getPesoAresta();
        int getId_no() {return id_aresta;};
        Aresta* getProxAresta() {return proxAresta;};
        void setPesoAresta(float);
        void setProxAresta(Aresta* x) {proxAresta = x ; };
        void setId_no(int id_aresta) {id_aresta = id_aresta;};
};


#endif // ARESTA_H_INCLUDED
