#ifndef LECTURA_H
#define LECTURA_H
#include <iostream>

using namespace std;

class Lectura
{
	protected:
		string titulo;
		unsigned int minutos;
		int anio;
		string autor;
	public:
		Lectura (string _titulo, unsigned int _minutos, int _anio, string _autor);
		virtual void mostrarDatos();
		virtual ~Lectura(){};
};

#endif
