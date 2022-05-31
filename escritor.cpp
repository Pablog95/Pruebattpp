#include "escritor.h"
#include <iostream>

using namespace std;


Escritor :: Escritor(string _nombreApellido, string _nacionalidad, string _anioNacimiento, string _anioFallecimiento){
	this->nombreApellido = _nombreApellido;
	this->nacionalidad = _nacionalidad;
	this->anioNacimiento = _anioNacimiento;
	this->anioFallecimiento = _anioFallecimiento;
}

void Escritor :: mostrarDatos()
{
	cout << nombreApellido<<endl;
	cout << nacionalidad<<endl;
	cout << anioNacimiento<<endl;
	cout << anioFallecimiento<<endl;
};

void Escritor :: cambiarFallecimiento(){
	int anioFallecimientoNuevo;
	cout << "Ingrese el anio nuevo de fallecimiento: " << endl;
	cin >> anioFallecimientoNuevo;
	anioFallecimiento = anioFallecimientoNuevo;
	cout << "Se cambio la fecha de fallecimiento." << endl;
}
