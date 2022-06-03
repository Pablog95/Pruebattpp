#include "lectura.h"
#include "lista.h"
#include "nodo.h"
#include <iostream>

using namespace std;

Lectura :: Lectura (string _titulo, unsigned int _minutos, int _anio, string _autor)
{
	this->titulo = _titulo;
	this->minutos = _minutos;
	this->anio = _anio;
	this->autor = _autor;
}

/*int Lectura :: compararLectura ()
{
    int dato = 0;

    for (int i = 1; i <= tamanio; i++)
    {
        if (lectura->obtenerDato(i)->obtenerAnio() > anioLectura && lectura->obtenerDato(i) != NULL){
            dato = 1;
        }
        else if(lectura->obtenerDato(i)->obtenerAnio() < anioLectura && lectura->obtenerDato(i) != NULL){
            dato = -1;
        }
    }
    return dato;
}*/


string Lectura :: obtenerTitulo(){
	return titulo;
}
unsigned int Lectura :: obtenerMinutos(){
	return minutos;
}
int Lectura :: obtenerAnio(){
	return anio;
}
string Lectura :: obtenerAutor(){
	return autor;
}
