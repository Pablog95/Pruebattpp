#ifndef COLA_H
#define COLA_H
#include "nodo.h"

template <class T>
class Cola
{
    private:
        T* dato;
        Nodo<T>* primero;
        Nodo<T>* ultimo;


    public:
		Cola();
		~Cola();
		bool colaVacia();
		void agregarCola(T* dato);
		T* obtenerDatoCola();
		T* bajaCola();
};

template <class T>
Cola<T> :: Cola(){
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

template <class T>
T* Cola<T> :: obtenerDatoCola(){
	return primero->obtenerDato();

}
template <class T>
T* Cola<T> :: bajaCola(){
	if(primero == ultimo)
		ultimo = 0;
	Nodo<T>* pAux = primero;
	T* aux= (primero->obtenerDato());
	primero = pAux->obtenerSiguiente();
	delete pAux;
	return aux;
}


template <class T>

void Cola<T>::agregarCola(T *dato) {
    Nodo<T>* nuevo = new Nodo<T>(dato);
    if (primero)
        ultimo->cambiarSiguiente(nuevo);
    else
        primero = nuevo;
    ultimo = nuevo;
}

#endif
