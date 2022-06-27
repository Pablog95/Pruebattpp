#include "grafo.h"
#include <iostream>

using namespace std;

Grafo :: Grafo (){
    primero = nullptr;
    tamanio = 0;
}

bool Grafo ::estaVacio() {
    return tamanio == 0;
}

Vertice* Grafo :: obtenerVertice(string nombre){
    Vertice* i = primero;
    while(i != NULL)
    {
        if (i->nombre == nombre)
            return i;

        i = i->siguiente;
    }
    return NULL;
}

void Grafo :: insertarVertice(string nombre){

    if (obtenerVertice(nombre) == NULL){
        Vertice* nuevo= new Vertice(nombre);

        if (estaVacio())
            primero = nuevo;
        else
        {
            Vertice* i = primero;

            while (i->siguiente != NULL)
                i = i->siguiente;

            i->siguiente = nuevo;
        }
    }
}

void Grafo :: insertarArista(string origen, string destino, int peso){
    Vertice* verticeOrigen = obtenerVertice(origen);
    Vertice* verticeDestino = obtenerVertice(destino);

    if(verticeOrigen == nullptr)
        cout << "El vertice "<< verticeOrigen << " no existe" << endl;

    if(verticeDestino == nullptr)
        cout << "El vertice " << verticeDestino << " no existe"<< endl;

    if (verticeOrigen != nullptr && verticeDestino != nullptr)
    {
        Arista* nueva = new Arista(verticeDestino, peso);
        if (verticeOrigen->arista == nullptr)
            verticeOrigen->arista = nueva;
        else
        {
            Arista* j = verticeOrigen->arista;

            while (j->siguiente != nullptr)
                j = j->siguiente;

            j->siguiente = nueva;
        }
    }
}
void Grafo :: mostrarListaAdyacencia(){
    Vertice* i = primero;

    while (i != nullptr)
    {
        Arista* j = i->arista;
        cout << i->nombre << " = ";

        while ( j != nullptr)
        {
            cout << i->nombre << "->" << j->peso << "->" << j->destino->nombre << ",";
            j = j->siguiente;
        }
        cout << endl;
        i = i->siguiente;
    }
}

/*
Grafo :: Grafo (){
    this->vertices = new Lista<Vertice>();
    this->tamanio = 0;
}

bool Grafo :: grafoVacio(){
    return tamanio == 0;
}

unsigned int Grafo ::obtenerTamanio() {
    return this->tamanio;
}

Lista<Vertice>* Grafo ::obtenerVertices() {
    return this->vertices;
}

void Grafo ::agregarArista(Lectura *lecturaOrigen, Lectura *lecturaDestino, unsigned int peso) {

    Vertice* origen = vertices->obtenerPosicion(lecturaOrigen);
    Vertice* destino = vertices->obtenerPosicion(lecturaDestino);
}
*/
