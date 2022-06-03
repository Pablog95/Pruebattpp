#ifndef LECTURA_H
#define LECTURA_H
#include <iostream>
#include "escritor.h"

using namespace std;

class Lectura
{
	protected:
		string titulo;
		unsigned int minutos;
		int anio;
		string autor;
		//NombreApellido* autor;
	public:
		Lectura (string _titulo, unsigned int _minutos, int _anio, string _autor);
		//virtual void mostrarLectura() = 0;
		string obtenerTitulo();
        unsigned int obtenerMinutos();
		int obtenerAnio();
		string obtenerAutor();
		virtual void mostrar() = 0;
		virtual string obtenerGenero() = 0;
		//int compararLectura();
        //int compararLectura(string anioLectura, int tamanio);
		virtual ~Lectura(){};
};

#endif
