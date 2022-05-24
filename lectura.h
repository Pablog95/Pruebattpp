#ifndef LECTURA_H
#define LECTURA_H
#include <iostream>

using namespace std;

class Lectura
{
	protected:
		string titulo;
		string minutos;
		string anio;
		string autor;
	public:
		Lectura (string _titulo, string _minutos, string _anio, string _autor);
		virtual void mostrarDatos();
		virtual ~Lectura(){};
};

#endif
