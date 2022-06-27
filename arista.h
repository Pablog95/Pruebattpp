#ifndef TP_3_ARISTA_H
#define TP_3_ARISTA_H
#include <iostream>
#include "lectura.h"
#include "vertice.h"

class Vertice;

class Arista {
private:
    unsigned int peso;
    Arista* siguiente;
    Vertice* destino;

    friend class Grafo;
    /*
    Vertice* destino;
    Lectura* lectura;
    unsigned int peso;*/

public:
    Arista(Vertice* destino,unsigned int peso);
    /*
    Arista(Vertice* destino, unsigned int peso);
    Vertice* obtenerDestino();
    unsigned int obtenerPeso();
    Lectura* obtenerLectura();
    void cambiarPeso(int peso);

    //DESTRUCTOR
    ~Arista();*/
};


#endif //TP_3_ARISTA_H
