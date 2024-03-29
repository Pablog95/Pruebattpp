#ifndef TP_3_GRAFO2_H
#define TP_3_GRAFO2_H
#include <iostream>
#include "listagrafo.h"
#include "vertice2.h"
#include "lectura.h"

using namespace std;

matrizPesos[4][4] = {
	
	{1,0,10,15},
	{0,8,5,20},
	{10,5,30,60},
	{15,20,60,80}
}

vectorLetras[4]= ["P","C","N","H"];


template <class T>
class Grafo2 {

private:
    int** matrizAdyacencia;
    ListaGrafo<T>* vertices;

    void agrandarMatrizAdyacencia();
    void copiarMatrizAdyacencia(int **nuevaAdyacente);
    void agregarNuevoVertice(int **nuevaAdyacente);
    void liberarMatrizAdyacencia();

public:
    Grafo2();
    void agregarVertice(T* verticeNuevo);
    void agregarArista(T* origen, T* destino, int peso);
    void mostrarGrafo();

};


template <class T>
Grafo2<T> ::Grafo2() {
    this->matrizAdyacencia = nullptr;
    this->vertices = new ListaGrafo<T>;
}


template <class T>
void Grafo2<T> :: agrandarMatrizAdyacencia(){
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


template <class T>
void Grafo2<T> :: copiarMatrizAdyacencia(int **nuevaAdyacente){
    for(int i = 0; i<vertices->obtenerCantidadElementos(); i++){
        for (int j = 0; j < vertices->obtenerCantidadElementos(); j++)
            nuevaAdyacente[i][j] = matrizAdyacencia[i][j];
    }
}


template <class T>
void Grafo2<T> ::agregarNuevoVertice(int **nuevaAdyacente){
    for(int i = 0; i<vertices->obtenerCantidadElementos(); i++){
        nuevaAdyacente[vertices->obtenerCantidadElementos()][i] = 99999999;
        nuevaAdyacente[i][vertices->obtenerCantidadElementos()] = 99999999;
    }
    nuevaAdyacente[vertices->obtenerCantidadElementos()][vertices->obtenerCantidadElementos()] = 0;
}


template <class T>
void Grafo2<T> :: liberarMatrizAdyacencia(){
    for(int i = 0; i < vertices->obtenerCantidadElementos(); i++){
        delete[] matrizAdyacencia[i];
    }
    delete[] matrizAdyacencia;
}


template <class T>
void Grafo2<T> :: agregarVertice(T* verticeNuevo){
    agrandarMatrizAdyacencia();
    vertices->agregarElementos(verticeNuevo);
}


template <class T>
void Grafo2<T> :: agregarArista(T* origen, T* destino, int peso){
    int posicionOrigen = vertices->obtenerPosicion(origen);
    int posicionDestino = vertices->obtenerPosicion(destino);

    if(posicionOrigen == -1){
        cout << "El vertice " << origen << " no existe." << endl;
    }
    if(posicionDestino == -1){
        cout << "El vertice " << destino << " no existe." << endl;
    }

    if(!(posicionDestino == -1 || posicionOrigen == -1))
    {
        matrizAdyacencia[posicionOrigen][posicionDestino] = peso;
    }

}

template <class T>
void Grafo2<T> :: mostrarGrafo(){
    return;
}


#endif //TP_3_GRAFO2_H
