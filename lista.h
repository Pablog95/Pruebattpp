#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

template <class T>
class Lista
{
	private:
		Nodo<T>* primero;
		Nodo<T>* cursor;
		int cantidad;
		Nodo<T>* obtenerNodo(int posicion);
	public:
		Lista();
		void agregarElementos(string dato, int posicion);
		bool listaVacia();
		
};

#endif
