#ifndef ARESTA_H_INCLUDED
#define ARESTA_H_INCLUDED

class Aresta{
    private:
        float pesoAresta;
        int iD_No;
        Aresta *proxAresta;
    public:
        Aresta(float peso) { pesoAresta = peso;};
        ~Aresta();
        float getPesoAresta();
        int getIDNo();
        Aresta* getProxAresta() {return proxAresta;};
        void setPesoAresta(float);
        void setProxAresta(Aresta* x) {proxAresta = x ; };
        void setIdNo(int id_no) {iD_No = id_no;};
};


#endif // ARESTA_H_INCLUDED
