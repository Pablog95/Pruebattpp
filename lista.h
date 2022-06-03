#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"
#include "lectura.h"

template <class T>
class Lista
{
	private:
		T* dato;
		Nodo<T>* primero;
		Nodo<T>* cursor;
		int cantidad;
		Nodo<T>* obtenerNodo(int posicion);

	public:
		Lista();
		void agregarElemento(T* dato);
		void agregarElemento(T* dato, int lug, int pos);
		bool listaVacia();
		void borrarDato(int posicion);
		void mostrarLista();
		int obtenerTamanio();
		T* obtenerDato(int posicion);
		void ordenarLista();
        ~Lista();
		
};

template<class T>
Lista<T> :: Lista(){
	primero = 0;
	cantidad = 0;
}

template<class T>
Lista<T>::~Lista(){
	while (!this -> listaVacia()){
		this->borrarDato(1);
	}
}

template<class T>
bool Lista<T> :: listaVacia(){
	return (cantidad == 0);
}

template <class T> 
void Lista <T> :: agregarElemento(T* dato){
	Nodo<T>* nuevo = new Nodo<T>(dato);
	if (!(this->listaVacia())){
		nuevo->cambiarSiguiente(primero);
		primero = nuevo;
	}
	cantidad++;
}

template<class T>
void Lista<T> :: agregarElemento(T* dato, int lug ,int pos){
	Nodo<T>* nuevo = new Nodo<T>(dato);
	cout << "entro" << endl;

    if (lug == 0) {
        nuevo->cambiarSiguiente(primero);
        primero = nuevo;
    }

    else {
        if (lug == 1) {
            nuevo->cambiarSiguiente(primero);
            primero = nuevo;

        } if (lug == -1) {

            Nodo<T> *anterior = obtenerNodo(pos);
            nuevo->cambiarSiguiente(anterior->obtenerSiguiente());
            anterior->cambiarSiguiente(nuevo);
            cout << "holaaaa" << endl;
        }

    }
	cout << "elemento agregado." << endl;

	cantidad++;
}

template <class T>
T* Lista<T> :: obtenerDato(int posicion){
	Nodo<T>* aux = primero;
	int contador = 1;
	while (contador < posicion && aux->obtenerSiguiente()){
		aux = aux->obtenerSiguiente();
		contador++;
	}
	return aux->obtenerDato();
}


template<class T>
Nodo<T>* Lista<T>::obtenerNodo(int posicion){
	Nodo<T>* aux = primero;
	int contador = 1;
	while (contador < posicion){
		aux = aux->obtenerSiguiente();
		contador++;
	}
	return aux;
}

template <class T>
void Lista<T> :: borrarDato(int posicion){
	Nodo<T>* auxBorrar = primero;
	if(!listaVacia()){
		if (posicion == 1){
			primero = primero->obtenerSiguiente();
		}
		else{
			Nodo<T>* anterior = obtenerNodo(posicion - 1);
			auxBorrar = anterior->obtenerSiguiente();
			anterior->cambiarSiguiente(auxBorrar->obtenerSiguiente());
		}
		cantidad--;
		delete auxBorrar;
	}
}

template <class T>
void Lista<T> :: mostrarLista(){
	
	Nodo<T>* actual = new Nodo<T>();
	actual = primero;
	
	while(actual != NULL){
		cout << actual->obtenerDato() << endl;
		actual = actual->obtenerSiguiente();
	}
}
template <class T>
int Lista<T> :: obtenerTamanio(){
	return cantidad;
}
#endif
