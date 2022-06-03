#ifndef POEMA_H
#define POEMA_H
#include "lectura.h"
#include <iostream>

using namespace std;

class Poema : public Lectura
{
    private:
        string cantidadVersos;

    public:
		Poema(string _titulo, unsigned int _minutos, int _anio,string _autor, string _cantidadVersos);
		void mostrar();
		string obtenerGenero();
        ~Poema(){};
		
};

#endif
