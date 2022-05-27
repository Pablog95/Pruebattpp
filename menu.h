#ifndef MENU_H
#define MENU_H
#include "lista.h"
#include "escritor.h"
#include "lectura.h"
#include "cuento.h"
#include "poema.h"
#include "historica.h"
#include "novela.h"
#include <iostream>

using namespace std;

class Menu
{
	public:
		Menu(Lista<Escritor>* escritores,Lista<Lectura>* lecturas);
		void mostrarMenu();
		void listaEscritores();
		void borrarLectura ();
		void agregarEscritores();
		void agregarLectura();
		void sortearLectura();
	private:
		Lista<Escritor>* escritores;
		Lista<Lectura>* lecturas;
		int opcion;
};

#endif
