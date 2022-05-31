#include "archivo.h"
#include <iostream>
#include <string>


using namespace std;

Archivo :: Archivo (Lista<Escritor>* escritor,Lista<Lectura>* lectura) {
	this->escritor = escritor;
	this->lectura = lectura;

}

void Archivo :: leerArchivoEscritor() {
	Escritor* nuevoEscritor = 0;
	string primero, nombreApellido, nacionalidad,anioNacimiento,anioFallecimiento, saltoLinea;
	//int anioNacimiento, anioFallecimiento;
	
    archivo.open("C:\\Users\\Pablo\\OneDrive\\Documentos\\Algoritmo y Programacion II\\tp2\\textoescritor.txt", ios::in);

    if (archivo.fail()){
        cout << "No se puede abrir el archivo escritor." << endl;
        
    }else{
	
	while (!archivo.eof()){

		getline(archivo, primero);
		getline(archivo, nombreApellido);
		getline(archivo, nacionalidad);
		getline(archivo, anioNacimiento);
		//anioNacimiento = anioNacimientoStr;
		getline(archivo, anioFallecimiento);
		//anioFallecimiento = anioFallecimientoStr;
		getline(archivo, saltoLinea);
		
		nuevoEscritor = new Escritor(nombreApellido,nacionalidad, anioNacimiento, anioFallecimiento);
		escritor-> agregarElemento(nuevoEscritor);
		}
	}
		
	archivo.close();	     
}

void Archivo :: leerArchivoLecturas(){
	string narracion, titulo,referenciaAutor = "anonimo";
	string anioPublicacion, minutos, datoSegunNarracion,tema,saltoLinea;
	
	archivoLectura.open("C:\\Users\\Pablo\\OneDrive\\Documentos\\Algoritmo y Programacion II\\tp2\\textolectura.txt", ios::in);
	
	if (archivoLectura.fail()){
		cout << "No se puede abrir el archivo lectura." << endl;
		
	}else{
	
		while (!archivoLectura.eof()){
			getline(archivoLectura, narracion);
			getline(archivoLectura,titulo);
			getline(archivoLectura,minutos);
			getline(archivoLectura,anioPublicacion);
			getline(archivoLectura,datoSegunNarracion);
			
			
			if (narracion == "C"){
				cout << "Entro en cuento" << endl;
				getline(archivoLectura, referenciaAutor);
				Lectura* nuevoCuento = new Cuento(titulo,minutos,anioPublicacion,referenciaAutor,datoSegunNarracion);
			 	lectura->agregarElemento(nuevoCuento);
			}
			
			if(narracion == "P"){
				cout << "Entro en poema" << endl;
				getline(archivoLectura, referenciaAutor);
				Lectura* nuevoPoema = new Poema(titulo, minutos, anioPublicacion, referenciaAutor, datoSegunNarracion);
			 	lectura->agregarElemento(nuevoPoema);
			}
			/*
			if(narracion == "N"){
				if (datoSegunNarracion == "HISTORICA"){
					getline(archivoLectura,tema);
					getline(archivoLectura, referenciaAutor);
					cout << "Entro en Historica." << endl;
					Novela* nuevaHistorica = new Historica(titulo,minutos,anioPublicacion,referenciaAutor, datoSegunNarracion,tema);
				}else{
					getline(archivoLectura, referenciaAutor);
					cout << "Entro en Novela" << endl;
					Lectura* nuevaNovela = new Novela(titulo, minutos, anioPublicacion, referenciaAutor, datoSegunNarracion);
			 		lectura->agregarElemento(nuevaNovela);
			 	}
			}*/
			getline(archivoLectura, saltoLinea);
			
			cout << narracion << endl;
			cout << titulo << endl;
			cout << minutos << endl;
			cout << anioPublicacion << endl;
			cout << datoSegunNarracion << endl;
			cout << referenciaAutor << endl;
			cout << saltoLinea << endl;
			
			
			/*
			if(datoSegunNarracion == "HISTORICA"){
				getline(archivoLectura,tema);
				getline(archivoLectura,referenciaAutor);
				cout << tema << endl;
				cout << referenciaAutor << endl;
				nuevaLectura = new Historica(titulo,minutos,anioPublicacion,referenciaAutor, datoSegunNarracion,tema);
				cout << "Entro en historica " << endl;
				//lectura->agregarElemento(nuevaLectura);
			}
			getline(archivoLectura,referenciaAutor);
			cout << referenciaAutor << endl;
			getline(archivoLectura,saltoLinea);
			cout << saltoLinea << endl;
			
		
			if (narracion == "N"){
				
				if (datoSegunNarracion == "HISTORICA"){
				getline(archivoLectura,tema);
				getline(archivoLectura,referenciaAutor);
				cout << tema << endl;
				cout << referenciaAutor << endl;
				nuevaHistorica = new Historica(titulo,minutos,anioPublicacion,referenciaAutor, datoSegunNarracion,tema);
				lectura->agregarElemento(nuevaLectura);
				cout << "Entro en historica " << endl;
					
				}else{
				cout << "Novela" << endl;
				nuevaLectura = new Novela(titulo,minutos,anioPublicacion,referenciaAutor, datoSegunNarracion); 
				lectura->agregarElemento(nuevaLectura);
				cout << "Entro en novela " << endl;
				}
			if (narracion == "C"){
				cout << "Cuento" << endl;
			 	Lectura* nuevoCuento = new Cuento(titulo,minutos,anioPublicacion,referenciaAutor,datoSegunNarracion);
			 	lectura->agregarElemento(nuevoCuento);
				cout << "Entro en cuento " << endl;
			
			}else if(narracion == "P"){
				cout << "Poema" << endl;
			 	Lectura* nuevoPoema = new Poema(titulo, minutos, anioPublicacion, referenciaAutor, datoSegunNarracion);
			 	lectura->agregarElemento(nuevoPoema);
				cout << "Entro en poema " << endl;
			
			getline(archivoLectura,saltoLinea);
			cout << saltoLinea << endl;
			}*/
			//lectura->agregarElemento(nuevaLectura);
		}
	}
	archivoLectura.close();
}
