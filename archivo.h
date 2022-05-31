#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <fstream>

#include "lista.h"
#include "escritor.h"
#include "lectura.h"
#include "cuento.h"
#include "novela.h"
#include "poema.h"
#include "historica.h"


using namespace std;

class Archivo
{
	private:
		Lista<Escritor>* escritor;
		Lista<Lectura>* lectura;
	public:
		Archivo(Lista<Escritor>* escritor,Lista<Lectura>* lectura);
		ifstream archivo;
		ifstream archivoLectura;
		void leerArchivoEscritor();
		void leerArchivoLecturas();
};

#endif
