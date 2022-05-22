#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <fstream>
//#include "lista.h"
#include "escritor.h"
#include "lectura.h"

using namespace std;

class Archivo
{
	private:
		Lista<Escritor>* escritor;
		Lista<Lectura>* lectura;
	public:
		Archivo();
		ifstream archivo;
		string primero;
		string nombreApellido;
		string nacionalidad;
		string anioNacimiento;
		string anioFallecimiento;
		void leerArchivoEscritor(Escritor* &escritor);
		Lectura* LeerArchivoLecturas();
		void mostrarArchivo();
		//void crearObjeto();
		//Escritor* procesarDatos();
		/*
		string nombreApellidoo();
		string nacionalidadd();
		int anioNacimientoo();
		int anioFallecimientoo();*/
};

#endif
