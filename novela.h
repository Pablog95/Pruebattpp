#ifndef NOVELA_H
#define NOVELA_H
#include <iostream>
#include "lectura.h"

using namespace std;

class Novela : public Lectura
{
    protected:
        string genero;

	public:
		Novela(string _titulo, unsigned int _minutos, int _anio, string _autor, string _genero);
		void mostrar();
		string obtenerGenero();
		virtual ~Novela(){};
};

#endif
