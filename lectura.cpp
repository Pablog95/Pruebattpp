#include "Lectura.h"

Lectura :: Lectura (string _titulo, unsigned int _minutos, int _anio, string _autor)
{
	this->titulo = _titulo;
	this->minutos = _minutos;
	this->anio = _anio;
	this->autor = _autor;
}

void Lectura :: mostrarDatos(){
	cout << "Titulo: " << titulo << endl;
	cout << "Minutos: " << titulo << endl;
	cout << "A�o: " << titulo << endl;
	cout << "Autor: " << titulo << endl;
	
}
