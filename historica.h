#ifndef HISTORICA_H
#define HISTORICA_H
#include <iostream>
#include "novela.h"
#include "lectura.h"

using namespace std;


class Historica : public Novela
{
	private:
		char* tema;

	public:
		Historica(string _titulo, unsigned int _minutos, int _anio, string _autor, string _genero, string _tema);
		void mostrar();
		string obtenerGenero();
        char* obtenerTema();
        ~Historica();
		
		
};

#endif
