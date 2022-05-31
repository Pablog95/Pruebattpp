#include "novela.h"

Novela :: Novela(string _titulo, string _minutos, string _anio, string _autor, string _genero):
											Lectura(_titulo, _minutos, _anio, _autor)
{
	this->genero = _genero;
}

void Novela :: mostrarNovela(){
	mostrarLectura();
	cout << "Genero de la novela: " << genero << endl;
}
