#include "lectura.h"
#include <iostream>

using namespace std;

Lectura :: Lectura (string _titulo, string _minutos, string _anio, string _autor)
{
	this->titulo = _titulo;
	this->minutos = _minutos;
	this->anio = _anio;
	this->autor = _autor;
}

string Lectura :: obtenerTitulo(){
	return titulo;
}
string Lectura :: obtenerMinutos(){
	return minutos;
}
string Lectura :: obtenerAnio(){
	return anio;
}
string Lectura :: obtenerAutor(){
	return autor;
}
