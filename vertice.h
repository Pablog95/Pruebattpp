#ifndef VERTICE_H
#define VERTICE_H
#include <iostream>
#include "arista.h"

using namespace std;

class Arista;

class Vertice
{
	public:
        Vertice(string nombre);

	private:
        string nombre;
        Vertice* siguiente;
        Arista* arista;

        friend class Grafo;

};

#endif