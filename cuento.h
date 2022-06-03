#ifndef CUENTO_H
#define CUENTO_H
#include <iostream>
#include "lectura.h"

using namespace std;

class Cuento : public Lectura
{
	public:
		Cuento(string _titulo, unsigned int _minutos, int _anio, string _autor, string _tituloLibro);
		void mostrar();
		string obtenerGenero();
        ~Cuento(){};
	private:
		string tituloLibro;
		
};

#endif
