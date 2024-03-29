#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"
#include "lectura.h"

using namespace std;

const int POSICION_NO_ENCONTRADA = -1;
const string NOMBRE_NO_ENCONTRADO = "";

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
	    	// Constructor
    		// PRE: Ninguna
    		// POST: Lista vacia.
		Lista();
	
		//Destructor.
		//PRE: Lista creada.
		//POST: Libera los recursos de la lista.
	        ~Lista();
	
		//PRE: Lista creada.
		//POST: Agrega un elemento.
		void agregarElemento(T* dato);
	
		//PRE: Lista creada.
		//POST: Agrega un elemento.
		void agregarElemento(T* dato, int lug, int pos);
	
		//PRE: Lista creada
		//POST: TRUE si es vacia, de lo contrario FALSE
		bool listaVacia();
	
		//PRE: Lista creada y no vacia.
		//POST: Elimina un dato en determinada posicion.
		void borrarDato(int posicion);

		//PRE: Lista creada.
		//POST: Muestra lista.
		void mostrarLista();
	
		//PRE: Lista creada.
		//POST: Devuelve tamanio de la lista.
		int obtenerTamanio();

		//PRE: Lista creada, no vacia.
		//POST: Devuelve el dato del puntero en esa posicion.
		T* obtenerDato(int posicion);

        string obtenerNombre(int posicion);

        int obtenerPosicion(string nombre);
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

	}else{
        nuevo->cambiarSiguiente(primero);
        primero = nuevo;
    }
	cantidad++;
}

template<class T>
void Lista<T> :: agregarElemento(T* dato, int lug ,int pos){
	Nodo<T>* nuevo = new Nodo<T>(dato);

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
        }
    }
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

template<class T>
string Lista<T>::obtenerNombre(int posicion) {
    int i = 0;
    Nodo<T>* auxiliar = primero;

    if(posicion > cantidad){
        return NOMBRE_NO_ENCONTRADO;
    }

    while(i != posicion - 1){
        auxiliar = auxiliar -> obtenerSiguiente();
        i++;
    }
    return auxiliar->obtenerDato();
}

template <class T>
int Lista<T>::obtenerPosicion(string nombre) {
    bool elementoEncontrado = false;
    int i = 0;
    Nodo<T>* auxiliar = primero;

    while(!elementoEncontrado && i < cantidad){
        if(auxiliar -> obtenerNombre() == nombre){
            elementoEncontrado = true;
        }
        i++;
        auxiliar = auxiliar -> obtenerSiguiente();
    }

    if(!elementoEncontrado){
        return POSICION_NO_ENCONTRADA;
    }
    return i - 1;
}
#endif
