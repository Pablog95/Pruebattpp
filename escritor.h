#ifndef ESCRITOR_H
#define ESCRITOR_H
#include <iostream>
#include "lista.h"

using namespace std;

class Escritor
{
    private:
        string nombreApellido;
        string nacionalidad;
        string anioNacimiento;
        string anioFallecimiento;

    public:
		Escritor(string _nombreApellido, string _nacionalidad, string _anioNacimiento, string anioFallecimiento);
		void mostrarDatos();
		void cambiarFallecimiento();
		~Escritor(){};

};

#endif
