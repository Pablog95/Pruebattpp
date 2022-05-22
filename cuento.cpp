#include "cuento.h"

Cuento :: Cuento(string _titulo, unsigned int _minutos, int _anio, string _autor, string _tituloLibro) :
																	Lectura (titulo,minutos,anio,autor)
																	
{
	this->tituloLibro = _tituloLibro;
}
