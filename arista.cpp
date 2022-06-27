#include "arista.h"
using namespace std;

Arista :: Arista(Vertice* destino, unsigned int peso){
    this->destino = destino;
    this->peso = peso;
    this->siguiente = NULL;
}
/*
Arista :: Arista(Vertice* destino, unsigned int peso){
    if(destino != NULL){
        this->destino = destino;
        this->peso = peso;
    }
}

Vertice* Arista::obtenerDestino() {
    return this->destino;
}

unsigned int Arista ::obtenerPeso() {
    return this->peso;
}

Lectura* Arista ::obtenerLectura() {
    return this->lectura;
}

void Arista::cambiarPeso(int peso) {
    this->peso = peso;
}

Arista :: ~Arista(){

}*/