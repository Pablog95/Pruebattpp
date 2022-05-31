#include "archivo.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

Archivo :: Archivo (Lista<Escritor>* escritor,Lista<Lectura>* lecturas) {
	/*
	escritor = new Lista<Escritor>;
	lectura = new Lista<Lectura>;
	*/
	this->escritor = escritor;
	this->lectura = lecturas;

}

void Archivo :: leerArchivoEscritor() {
	Escritor* nuevoEscritor = 0;
	string primero, nombreApellido, nacionalidad, anioNacimiento,anioFallecimiento, saltoLinea;
    archivo.open("textoEscritores.txt", ios::in);

    if (archivo.fail()){
        cout << "No se puede abrir el archivo E." << endl;

    }
    else{

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
			
            }
            lectura->agregarElemento(nuevaLectura);

        }
    }
    archivo.close();
}

