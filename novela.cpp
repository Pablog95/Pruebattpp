#include "novela.h"

Novela :: Novela(string _titulo, string _minutos, string _anio, string _autor, string _genero):
											Lectura(titulo,minutos,anio,autor)
{
	this->genero = _genero;
}

