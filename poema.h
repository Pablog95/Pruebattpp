#ifndef POEMA_H
#define POEMA_H
#include "lectura.h"

class Poema : public Lectura
{
	public:
		Poema(string _titulo, string _minutos, string _anio,string _autor, string _cantidadVersos);
	private:
		string cantidadVersos;
		
};

#endif
