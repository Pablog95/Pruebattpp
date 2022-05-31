#include <iostream>
#include "archivo.h"
#include "menu.h"

int main()
{
	Lista<Escritor> escritor;
	Lista<Lectura> lecturas;
	Archivo a1(& escritor, & lecturas);
	Menu m1(& escritor, & lecturas);
	a1.leerArchivoEscritor();
	a1.leerArchivoLecturas();
	m1.mostrarMenu();
	
    return 0;
    
}
