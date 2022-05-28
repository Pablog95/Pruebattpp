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

        while (!archivo.eof()){

            getline(archivo, primero);
            getline(archivo, nombreApellido);
            getline(archivo, nacionalidad);
            getline(archivo, anioNacimiento);
            getline(archivo, anioFallecimiento);
            getline(archivo, saltoLinea);

            cout << primero << endl;
            cout << nombreApellido << endl;
            cout << nacionalidad << endl;
            cout << anioNacimiento << endl;
            cout << anioFallecimiento << endl;

            nuevoEscritor = new Escritor(nombreApellido,nacionalidad,anioNacimiento,anioFallecimiento);
            escritor-> agregarElemento(nuevoEscritor);
        }

    }
	archivo.close();	     
}

void Archivo :: leerArchivoLecturas(){
	Lectura* nuevaLectura = 0;
	string narracion, titulo,referenciaAutor;
	string anioPublicacion, minutos, datoSegunNarracion,tema,saltoLinea;
	archivo.open("lecturas.txt",ios::in);
	
	if (archivo.fail()){
		cout << "No se puede abrir el archivo L." << endl;
	}
    else{

        while (archivo.eof()) {
            getline(archivo, narracion);
            getline(archivo, titulo);
            getline(archivo, minutos);
            getline(archivo, anioPublicacion);
            getline(archivo, datoSegunNarracion);
            if (datoSegunNarracion == "HISTORICA") {
                getline(archivo, tema);
                getline(archivo, referenciaAutor);

                nuevaLectura = new Historica(titulo, minutos, anioPublicacion, referenciaAutor, datoSegunNarracion,tema);
            } else {
                getline(archivo, referenciaAutor);
            }
            getline(archivo, saltoLinea);


            if (narracion == "N") {
                cout << "Novela" << endl;
                nuevaLectura = new Novela(titulo, minutos, anioPublicacion, referenciaAutor, datoSegunNarracion);
            }
            if (narracion == "C") {
                cout << "Cuento" << endl;
                nuevaLectura = new Cuento(titulo, minutos, anioPublicacion, referenciaAutor, datoSegunNarracion);
            }
            if (narracion == "P") {
                cout << "Poema" << endl;
                nuevaLectura = new Poema(titulo, minutos, anioPublicacion, referenciaAutor, datoSegunNarracion);
            }
            lectura->agregarElemento(nuevaLectura);

        }
    }
    archivo.close();
}

