#include "archivo.h"
#include "menu.h"
#include "grafo2.h"

int main()
{
	Lista<Escritor> escritor;
	Lista<Lectura> lecturas;
	Cola<Lectura> colaLectura;

	Archivo a1(& escritor, & lecturas , & colaLectura);
	Menu m1(& escritor, & lecturas, &colaLectura);
	

	a1.leerArchivoEscritor();
	a1.leerArchivoLecturas();
	
	m1.mostrarMenu();

	
    return 0;
    
}
