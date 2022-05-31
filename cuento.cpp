#include "cuento.h"

Cuento :: Cuento(string _titulo, string _minutos, string _anio, string _autor, string _tituloLibro) :
																	Lectura (_titulo, _minutos, _anio, _autor)
																	
{
	this->tituloLibro = _tituloLibro;
}


void Cuento:: mostrarCuento(){
	mostrarLectura();
	cout <<"Titulo del libro: " <<tituloLibro << endl;
}
