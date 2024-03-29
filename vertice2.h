#ifndef TP_3_VERTICE2_H
#define TP_3_VERTICE2_H
#include <iostream>

using namespace std;


template <class T>
class Vertice2 {
private:
    T* nombre;

public:
    Vertice2(T* nombre);
    T* obtenerNombre();

    ~Vertice2();


};

template <class T>
Vertice2<T> ::Vertice2(T* nombre) {
    this->nombre = nombre;
}

template <class T>
T* Vertice2<T>::obtenerNombre() {
    return this->nombre;
}

template <class T>
Vertice2<T> :: ~Vertice2() {

}


#endif //TP_3_VERTICE2_H
