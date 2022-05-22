#include "menu.h"
#include <iostream>

using namespace std;


Menu :: Menu (int _opcion){
	
	int opcion = _opcion;
}

void Menu :: mostrarMenu(){
	
	do{
		cout << "1-Agregar una nueva lectura a la lista."<< endl;
		cout << "2-Quitar una lectura de la lista."<< endl;
		cout << "3-Agregar un escritor."<< endl;
		cout << "4-Cambiar la fecha de fallecimiento de un escritor"<< endl;
		cout << "5-Listar los escritores."<< endl;
		cout << "6-Sortear una lectura random para leer."<< endl;
		cout << "7-Listar todas las lecturas."<< endl;
		cout << "8-Listar las lecturas entre determinados años."<< endl;
		cout << "9-Listar las lecturas de un determinado escritor"<< endl;
		cout << "10-Listar las novelas de determinado género."<< endl;
		cout << "11-Armar una cola ordenada."<< endl;
		cout << "12-Salir.."<< endl;
		
		switch(opcion){
			case1:break;
			case2:break;
			case3:break;
			case4:break;
			case5:break;
			case6:break;
			case7:break;
			case8:break;
			case9:break;
			case10:break;
			case11:break;
			case12:break;
				
		}
		
		
		
	}while (opcion != 12);
}
