#include "Lectura.h"
#include <iostream>

using namespace std;

Lectura :: Lectura (string _titulo, string _minutos, string _anio, string _autor)
{
	this->titulo = _titulo;
	this->minutos = _minutos;
	this->anio = _anio;
	this->autor = _autor;
}

void Lectura :: mostrarLectura(){
	cout << "Titulo: " << titulo << endl;
	cout << "Minutos: " << minutos << endl;
	cout << "Año: " << anio << endl;
	cout << "Autor: " << autor << endl;
	
}

string Lectura :: obtenerAnio(){
	return anio;
}
