#ifndef ESCRITOR_H
#define ESCRITOR_H
#include <iostream>

using namespace std;

class Escritor
{
    private:

        string referencia;
        string nombreApellido;
        string nacionalidad;
        int anioNacimiento;
        int anioFallecimiento;

	public:
		Escritor(string referencia,string _nombreApellido, string _nacionalidad, int _anioNacimiento, int _anioFallecimiento);
		void mostrarDatos();
		string obtenerNombreApellido();
		void cambiarFallecimiento();
        string obtenerReferencia();
		~Escritor(){};

};

#endif
