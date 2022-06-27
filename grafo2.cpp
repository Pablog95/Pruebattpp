#include "grafo2.h"

#include <iostream>

using namespace std;

const int INFINITO = 99999999;

Grafo2 ::Grafo2() {
    matrizAdyacencia = nullptr;
    vertices = new ListaGrafo<Vertice2>();
}

void Grafo2 :: agrandarMatrizAdyacencia(){
    int ** auxMatrix;
    int nuevaCantidadVertice = vertices->obtenerCantidadElementos() + 1;

    auxMatrix = new int*[nuevaCantidadVertice];
    for(int i = 0; i < nuevaCantidadVertice; i++){
        auxMatrix[i] = new int[nuevaCantidadVertice];
    }
    copiarMatrizAdyacencia(auxMatrix);
    agregarNuevoVertice(auxMatrix);
    liberarMatrizAdyacencia();
    matrizAdyacencia = auxMatrix;
}


void Grafo2 :: copiarMatrizAdyacencia(int **nuevaAdyacente){
    for(int i = 0; i<vertices->obtenerCantidadElementos(); i++){
        for (int j = 0; j < vertices->obtenerCantidadElementos(); j++)
            nuevaAdyacente[i][j] = matrizAdyacencia[i][j];
    }
}

void Grafo2 ::agregarNuevoVertice(int **nuevaAdyacente){
    for(int i = 0; i<vertices->obtenerCantidadElementos(); i++){
        nuevaAdyacente[vertices->obtenerCantidadElementos()][i] = INFINITO;
        nuevaAdyacente[i][vertices->obtenerCantidadElementos()] = INFINITO;
    }
    nuevaAdyacente[vertices->obtenerCantidadElementos()][vertices->obtenerCantidadElementos()] = 0;
}

void Grafo2 :: liberarMatrizAdyacencia(){
    for(int i = 0; i < vertices->obtenerCantidadElementos(); i++){
        delete[] matrizAdyacencia[i];
    }
    delete[] matrizAdyacencia;
}

void Grafo2 :: agregarVertice(L* verticeNuevo){
    agrandarMatrizAdyacencia();
    vertices->agregarElemento(verticeNuevo);
}

void Grafo2 :: agregarArista(L* origen, L* destino, int peso){
    int posicionOrigen = vertices->obtenerPosicion(origen);
    int posicionDestino = vertices->obtenerPosicion(destino);

    if(posicionOrigen == POSICION_NO_ENCONTRADA){
        cout << "El vertice " << origen << " no existe." << endl;
    }
    if(posicionDestino == POSICION_NO_ENCONTRADA){
        cout << "El vertice " << destino << " no existe." << endl;
    }

    if(!(posicionDestino == POSICION_NO_ENCONTRADA || posicionOrigen == POSICION_NO_ENCONTRADA))
    {
        matrizAdyacencia[posicionOrigen][posicionDestino] = peso;
    }

}
void Grafo2 :: mostrarGrafo(){
    return;
}
