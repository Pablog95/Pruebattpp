#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <fstream>
#include "lista.h"
#include "escritor.h"
#include "lectura.h"
#include "historica.h"
#include "poema.h"
#include "novela.h"
#include "cuento.h"

using namespace std;

class Archivo
{
	private:
		Lista<Escritor>* escritor;
		Lista<Lectura>* lectura;
	public:
		Archivo();
		ifstream archivo;
		void leerArchivoEscritor();
		void leerArchivoLecturas();
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
