#include "novela.h"

Novela :: Novela(string _titulo, unsigned int _minutos, int _anio, string _autor, string _genero):
											Lectura(titulo,minutos,anio,autor)
{
	this->genero = _genero;
}

