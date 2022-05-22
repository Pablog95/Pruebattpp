#ifndef CUENTO_H
#define CUENTO_H
#include <iostream>
#include "lectura.h"

using namespace std;

class Cuento : public Lectura
{
	public:
		Cuento(string _titulo, unsigned int _minutos, int _anio, string _autor, string _tituloLibro);
	private:
		string tituloLibro;
		
};

#endif
