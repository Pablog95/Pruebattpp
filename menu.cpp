#include "menu.h"

#include <iostream>

using namespace std;


Menu :: Menu (Lista<Escritor>* escritores,Lista<Lectura>* lecturas){
	this->escritores = escritores;
	this->lecturas = lecturas;
	
}

void Menu :: mostrarMenu(){
	
	do{
		cout << "          --->>> MENU <<<---   "<< endl;
		cout << "			Elija una opcion: " << endl;
		cout << "--------------------------------------------" << endl;
		cout << "1- Agregar una nueva lectura a la lista."<< endl;
		cout << "2- Quitar una lectura de la lista."<< endl;
		cout << "3- Agregar un escritor."<< endl;
		cout << "4- Cambiar la fecha de fallecimiento de un escritor"<< endl;
		cout << "5- Listar los escritores."<< endl;
		cout << "6- Sortear una lectura random para leer."<< endl;
		cout << "7- Listar todas las lecturas."<< endl;
		cout << "8- Listar las lecturas entre determinados años."<< endl;
		cout << "9- Listar las lecturas de un determinado escritor"<< endl;
		cout << "10- Listar las novelas de determinado género."<< endl;
		cout << "11- Armar una cola ordenada."<< endl;
		cout << "12- Salir.."<< endl;
		cout << "--------------------------------------------" << endl;
		cin >> opcion;
		
		switch(opcion){
			case 1: agregarLectura();break;//agregarElemento(T* dato),
			case 2:break;//borrarDato(int posicion)
			case 3: agregarEscritores();break;//agregarElemento(T* escritor)
			case 4:break;
			case 5: listaEscritores(); break;
			case 6:break;
			case 7:break;
			case 8:break;
			case 9:break;
			case 10:break;
			case 11:break;
			case 12:break;
				
		}
		
		
		
	}while (opcion != 12);
}

void Menu :: listaEscritores(){
	int tamanio = escritores->obtenerTamanio();
	for (int i = 1; i < tamanio; i++){
		escritores->obtenerDato(i);
	}
}

void Menu :: agregarEscritores(){
	string nombreApellido, nacionalidad, anioNacimiento, anioFallecimiento;
	cout << "Ingrese nombre y apellido: "<< endl;
	cin >> nombreApellido;
	cout <<"Ingrese nacionalidad: " << endl;
	cin >> nacionalidad;
	cout<<"Ingrese anio de nacimiento; "<< endl;
	cin >> anioNacimiento;
	cout <<"Ingrese anio de fallecimiento: " << endl;
	cin >> anioFallecimiento;
	Escritor* escritores = new Escritor (nombreApellido, nacionalidad, anioNacimiento, anioFallecimiento);
}

void Menu :: agregarLectura(){
	string tipo,titulo, minutos, anio, autor;
	cout << "Ingrese el tipo de lectura. (CUENTO, NOVELA , HISTORICA, POEMA)" << endl;
	cin >> tipo;
	cout << "Ingrese el titulo del cuento:"<< endl;
	cin >> titulo;
	cout << "Ingrese cuantos minutos dura: "<< endl;
	cin >> minutos;
	cout << "Ingrese en que anio fue escrita: " << endl;
	cin >> anio;
	cout << "Ingrese el autor: " << endl;
	cin >> autor;
	
	while(tipo != "cuento" && tipo != "novela" && tipo != "poema" && tipo != "historica"){
		cout << "La lectura no es valida."<< endl;
		cin >> tipo;
	}
	if(tipo == "cuento"){
		string tituloCuento;
		cout << "Ingrese el titulo del libro: " << endl;
		cin >> titulo;
		Lectura* lecturas = new Cuento(titulo,minutos, anio, autor,tituloCuento);
	}
	if(tipo == "novela"){
		string genero;
		cout << "Ingrese el genero: " << endl;
		cin >> genero;
		if (genero == "historica"){
			string tema;
			cout << "Escriba de que trata la novela historica: " << endl;
			cin >> tema;
			Lectura* lecturas = new Historica(titulo, minutos, anio, autor, genero, tema);
		}else{
			Lectura* lecturas = new Novela(titulo, minutos, anio, autor, genero);
		}
		
	}
	if(tipo == "poema"){
	string cantidadVersos;
	cout << "Ingrese la cantidad de versos del poema: " << endl;
	cin >> cantidadVersos;
	Lectura* lecturas = new Poema(titulo, minutos, anio, autor, cantidadVersos);
	}
}
