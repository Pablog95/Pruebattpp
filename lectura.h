#ifndef LECTURA_H
#define LECTURA_H
#include <iostream>
#include "escritor.h"

using namespace std;

class Lectura
{
	protected:
		string titulo;
		string minutos;
		string anio;
		string autor;
		//NombreApellido* autor;
	public:
		Lectura (string _titulo, string _minutos, string _anio, string _autor);
		virtual void mostrarLectura();
		string obtenerAnio();
		virtual ~Lectura(){};
};

#endif
