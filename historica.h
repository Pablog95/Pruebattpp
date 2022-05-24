#ifndef HISTORICA_H
#define HISTORICA_H
#include <iostream>
#include "lectura.h"
#include "novela.h"

using namespace std;


class Historica : public Novela
{
	private:
		char tema;
	public:
		Historica(string _titulo, string _minutos, string _anio, string _autor, string _genero, string tema);
		
		
};

#endif
