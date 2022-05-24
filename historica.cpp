#include "historica.h"

Historica :: Historica (string _titulo, string _minutos, string _anio, string _autor,string _genero, char _tema):
									Novela (titulo,minutos,anio,autor,genero)
{
	this->tema = _tema;
}
