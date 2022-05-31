#include "poema.h"

Poema :: Poema(string _titulo, string _minutos, string _anio,string _autor, string _cantidadVersos) : Lectura(_titulo, _minutos, _anio, _autor){
	this->cantidadVersos = _cantidadVersos;
}

void Poema :: mostrarPoema(){
	mostrarLectura();
	cout << "Cantidad de versos: " << cantidadVersos << endl;
}
