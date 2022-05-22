#include "escritor.h"
#include <iostream>

using namespace std;


Escritor :: Escritor(string _nombreApellido, string _nacionalidad, string _anioNacimiento, string _anioFallecimiento){
	this->nombreApellido = _nombreApellido;
	this->nacionalidad = _nacionalidad;
	this->anioNacimiento = _anioNacimiento;
	this->anioFallecimiento = _anioFallecimiento;
	//escritor = new Lista<Escritor*>(); 
}

Escritor :: Escritor(){

}

void Escritor :: mostrarDatos()
{
	cout << nombreApellido<<endl;
	cout << nacionalidad<<endl;
	cout << anioNacimiento<<endl;
	cout << anioFallecimiento<<endl;
};
