#ifndef TP_3_GRAFONODO_H
#define TP_3_GRAFONODO_H
#include <iostream>
#include "lectura.h"
using namespace std;

template <class T>
class GrafoNodo {
private:
    T* elemento;
    GrafoNodo<T>* siguiente;

public:

    GrafoNodo(T* nombre);
    GrafoNodo<T>* obtenerSiguiente();
    string obtenerNombre();
    void cambiarSiguiente(GrafoNodo<T> * siguiente);
    ~GrafoNodo();


};

template <class T>
GrafoNodo<T> ::GrafoNodo(T* nombre) {
    elemento = nombre;//new T(nombre);
    siguiente = nullptr;
}

template <class T>
GrafoNodo<T>* GrafoNodo<T> ::obtenerSiguiente() {
    return siguiente;
}

template <class T>
string GrafoNodo<T> ::obtenerNombre() {
    return elemento->obtenerNombre();
}

template <class T>
void GrafoNodo<T> ::cambiarSiguiente(GrafoNodo<T> *siguiente) {
    this->siguiente = siguiente;
}

template <class T>
GrafoNodo<T> :: ~GrafoNodo() {
    delete elemento;
}

#endif //TP_3_GRAFONODO_H
