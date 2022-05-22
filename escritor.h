#ifndef ESCRITOR_H
#define ESCRITOR_H
#include <iostream>
#include "lista.h"

using namespace std;

class Escritor
{
	public:
		Escritor();
		Escritor(string _nombreApellido, string _nacionalidad, string _anioNacimiento, string anioFallecimiento);
		void mostrarDatos();
		~Escritor(){};
		
	private:
		string nombreApellido;
		string nacionalidad;
		string anioNacimiento;
		string anioFallecimiento;
		//Lista<Escritor*>* escritor;
};

#endif
