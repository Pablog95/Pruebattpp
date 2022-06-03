#include "archivo.h"
#include "cola.h"
#include <iostream>
#include <string>

//enum genero{DRAMA = 1, COMEDIA, FICCION, SUSPENSO, TERROR, ROMANTICA, HISTORICA};

using namespace std;

Archivo :: Archivo (Lista<Escritor>* escritor,Lista<Lectura>* lectura, Cola<Lectura>* colaLectura) {
	this->escritor = escritor;
	this->lectura = lectura;
	this -> colaLectura = colaLectura;

}

void Archivo :: leerArchivoEscritor() {
	Escritor* nuevoEscritor = 0;
	string primero, nombreApellido, nacionalidad,anioNacimiento,anioFallecimiento, saltoLinea;
	
    archivo.open("textoescritor.txt", ios::in);

    if (archivo.fail()){
        cout << "No se puede abrir el archivo escritor." << endl;
        
    }else{
	
	while (!archivo.eof()){

		getline(archivo, primero);
		getline(archivo, nombreApellido);
		getline(archivo, nacionalidad);
		getline(archivo, anioNacimiento);
        int AniodeNacimiento = stoi(anioNacimiento);
		getline(archivo, anioFallecimiento);
        int AniodeFallecimiento = stoi(anioFallecimiento);
		getline(archivo, saltoLinea);

		nuevoEscritor = new Escritor(nombreApellido,nacionalidad,AniodeNacimiento,AniodeFallecimiento);
		escritor-> agregarElemento(nuevoEscritor);

		}

	}
	cout << "creo lista escritores"<< endl;

	archivo.close();	     
}

void Archivo :: leerArchivoLecturas(){
	string narracion, titulo,referenciaAutor = "anonimo";
	string anioPublicacion, minutos, datoSegunNarracion,tema,saltoLinea;
	
	archivoLectura.open("textolectura.txt", ios::in);
	
	if (archivoLectura.fail()){
		cout << "No se puede abrir el archivo lectura." << endl;
		
	}else{
	
		while (!archivoLectura.eof()){

            int tamanio = lectura->obtenerTamanio();

			getline(archivoLectura, narracion);
			getline(archivoLectura,titulo);
			getline(archivoLectura,minutos);
            unsigned int minutosLibro = stoi(minutos);
			getline(archivoLectura,anioPublicacion);
            int anioDePublicacion = stoi(anioPublicacion);
			
			if (narracion == "C"){
				getline(archivoLectura,datoSegunNarracion);
				getline(archivoLectura, referenciaAutor);
				Lectura* nuevoCuento = new Cuento(titulo,minutosLibro,anioDePublicacion,referenciaAutor,datoSegunNarracion);
				int posicion = compararLectura(nuevoCuento->obtenerAnio(),tamanio);

				lectura->agregarElemento(nuevoCuento,posicion,tamanio);

			 	colaLectura->agregarCola(nuevoCuento);
			}
			
			if(narracion == "P"){
				getline(archivoLectura,datoSegunNarracion);
				getline(archivoLectura, referenciaAutor);
				Lectura* nuevoPoema = new Poema(titulo, minutosLibro, anioDePublicacion, referenciaAutor, datoSegunNarracion);
				int posicion = compararLectura(nuevoPoema->obtenerAnio(),tamanio);

				lectura->agregarElemento(nuevoPoema,posicion,tamanio);

			 	colaLectura->agregarCola(nuevoPoema);
			}
			
			if(narracion == "N"){
				getline(archivoLectura,datoSegunNarracion);
				if (datoSegunNarracion == "HISTORICA"){
					getline(archivoLectura,tema);
					getline(archivoLectura, referenciaAutor);
					Lectura* nuevaHistorica = new Historica(titulo,minutosLibro,anioDePublicacion,referenciaAutor, datoSegunNarracion,tema);
					int posicion = compararLectura(nuevaHistorica->obtenerAnio(),tamanio);

					lectura->agregarElemento(nuevaHistorica, posicion, tamanio);
                    cout << "hola" << endl;
					
					colaLectura->agregarCola(nuevaHistorica);
				}else{
					getline(archivoLectura, referenciaAutor);
					Lectura* nuevaNovela = new Novela(titulo, minutosLibro, anioDePublicacion, referenciaAutor, datoSegunNarracion);
					int posicion = compararLectura(nuevaNovela->obtenerAnio(),tamanio);

					lectura->agregarElemento(nuevaNovela,posicion, tamanio);

			 		colaLectura->agregarCola(nuevaNovela);
			 	}
			 }
			getline(archivoLectura, saltoLinea);
		}
        cout << "hola" << endl;
	}
    cout << "hola" << endl;
	archivoLectura.close();
}

int Archivo :: compararLectura(int anioLectura, int tamanio)
{
	int dato = 0;

	for (int i = 1; i <= tamanio; i++)
	{
		if (lectura->obtenerDato(i)->obtenerAnio() > anioLectura && lectura->obtenerDato(i) != NULL){
			dato = 1;
		}
        else if(lectura->obtenerDato(i)->obtenerAnio() < anioLectura && lectura->obtenerDato(i) != NULL){
            dato = -1;
		}
	}
	return dato;
}
