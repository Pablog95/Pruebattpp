#ifndef GRAFO_H
#define GRAFO_H
#include <iostream>
#include "vertice.h"
#include "lista.h"
#include "arista.h"

using namespace std;

class Grafo{
	private:
        Vertice* primero;
        int tamanio;
		/*
		int** matrizAdyacencia;	
		unsigned int tamanio;
		Lista<Vertice> * vertices;
		void liberarMatrizAdyacencia();
*/
	public:
        Grafo();
        bool estaVacio();
        Vertice* obtenerVertice(string nombre);
        void insertarVertice(string nombre);
        void insertarArista(string origen, string destino, int peso);
        void mostrarListaAdyacencia();
        void prim(string origen);
    /*
		Grafo ();
		~Grafo ();
        unsigned int obtenerTamanio();
        Lista<Vertice>* obtenerVertices();
        Vertice* obtenerVerticeIndice(unsigned int indice);
		void agregarArista(Lectura* lecturaOrigen, Lectura* lecturaDestino, unsigned int peso);
        bool grafoVacio();
		*/
		
};

#endif