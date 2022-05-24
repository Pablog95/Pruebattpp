#include "cuento.h"

Cuento :: Cuento(string _titulo, string _minutos, string _anio, string _autor, string _tituloLibro) :
												Lectura (titulo,minutos,anio,autor)
																	
{
	this->tituloLibro = _tituloLibro;
}
