#ifndef COLA_H
#define COLA_H
#include "nodo.h"

template <class T>
class Cola
{
	public:
		Cola();
		~Cola();
		bool colaVacia();
		void agregarCola(T d);
		T bajaCola();
	private:
		Nodo<T>* primero;
		Nodo<T>* ultimo;
		
};

template <class T>
Cola<T> :: cola(){
	primero = 0;
	ultimo = 0;
}

template <class T>
Cola<T> :: ~Cola(){
	while(!(colaVacia())){
		bajaCola();
	}
}

template <class T>
bool Cola<T> :: colaVacia(){
	return (primero == 0);
}

templeate <class T>
void Cola<T> :: agregarCola(T d){
	T* dato= new T(d);
	Nodo<T>* nodo = new Nodo<T>(dato);
	if(this->colaVacia()){
		primero = nodo;
	}
	else{
		ultimo->cambiarSiguiente(nodo);
	}
	ultimo = nodo;
}

T Cola<T> :: bajaCola(){
	if(primero == ultimo)
		ultimo = 0;
	Nodo<T>* pAux = primero;
	T aux= *(primero->obtenerDato());
	primero = pAux->obtenerSiguiente();
	delete pAux;
	return aux;
}

#endif
