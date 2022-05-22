#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;

template <class T>
class Nodo

{
	private:
		T dato;
		Nodo<T>* siguiente;
	public:
		
		Nodo(T _dato);
		void cambiarSiguiente(Nodo* _siguiente);
		Nodo<T>* obtenerSiguiente();
		T obtenerDato();
};

#endif
