#include "archivo.h"
#include "cola.h"
#include <iostream>
#include <string>

//enum genero{DRAMA = 1, COMEDIA, FICCION, SUSPENSO, TERROR, ROMANTICA, HISTORICA};

using namespace std;

Archivo :: Archivo (Lista<Escritor>* escritor,Lista<Lectura>* lectura) {
	this->escritor = escritor;
	this->lectura = lectura;
	colaLectura = new Cola<Lectura>;

}

void Archivo :: leerArchivoEscritor() {
	Escritor* nuevoEscritor = 0;
	string primero, nombreApellido, nacionalidad,anioNacimiento,anioFallecimiento, saltoLinea;
	//int anioNacimiento, anioFallecimiento;
	
    archivo.open("textoescritor.txt", ios::in);

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
			getline(archivoLectura,anioPublicacion);
			
			if (narracion == "C"){
				getline(archivoLectura,datoSegunNarracion);
				getline(archivoLectura, referenciaAutor);
				Lectura* nuevoCuento = new Cuento(titulo,minutos,anioPublicacion,referenciaAutor,datoSegunNarracion);
				int posicion = compararLectura(nuevoCuento->obtenerAnio(),tamanio);
				cout << "Posicion<---------------------------/" << posicion<< endl;
				lectura->agregarElemento(nuevoCuento,posicion,tamanio);
			 	//lectura->agregarElemento(nuevoCuento);
			 	//colaLectura->agregarCola(nuevoCuento);
			}
			
			if(narracion == "P"){
				getline(archivoLectura,datoSegunNarracion);
				getline(archivoLectura, referenciaAutor);
				Lectura* nuevoPoema = new Poema(titulo, minutos, anioPublicacion, referenciaAutor, datoSegunNarracion);
				int posicion = compararLectura(nuevoPoema->obtenerAnio(),tamanio);
				cout << "Posicion<---------------------------/" << posicion << endl;
				lectura->agregarElemento(nuevoPoema,posicion,tamanio);
				//posicion= comparar(nuevoPoema->obtenerAnio())
			 	//lectura->agregarElemento(nuevoPoema, pos);
			 	//colaLectura->agregarCola(nuevoPoema);
			}
			
			if(narracion == "N"){
				getline(archivoLectura,datoSegunNarracion);
				if (datoSegunNarracion == "HISTORICA"){
					getline(archivoLectura,tema);
					getline(archivoLectura, referenciaAutor);
					Lectura* nuevaHistorica = new Historica(titulo,minutos,anioPublicacion,referenciaAutor, datoSegunNarracion,tema);
					int posicion = compararLectura(nuevaHistorica->obtenerAnio(),tamanio);
					cout << "Posicion<---------------------------/" << posicion<< endl;
					lectura->agregarElemento(nuevaHistorica, posicion, tamanio);
					
					//colaLectura->agregarCola(nuevaHistorica);
				}else{
					getline(archivoLectura, referenciaAutor);
					Lectura* nuevaNovela = new Novela(titulo, minutos, anioPublicacion, referenciaAutor, datoSegunNarracion);
					int posicion = compararLectura(nuevaNovela->obtenerAnio(),tamanio);
					cout << "Posicion<---------------------------/" << posicion<< endl;
					lectura->agregarElemento(nuevaNovela,posicion, tamanio);
			 		//lectura->agregarElemento(nuevaNovela);
			 		//colaLectura->agregarCola(nuevaNovela);
			 	}
			 }
			getline(archivoLectura, saltoLinea);
		}
	}
	cout << "Crea lista lectura" << endl;
	archivoLectura.close();
}

int Archivo :: compararLectura(string anioLectura, int tamanio)
{
	cout << "comparar" << endl;
	int dato = 0;
	//int i = 0;

	if(lectura->listaVacia()){
		cout << "if lista vacia "<< endl;
		dato = 1;
		//i++;
	}

	//while(i <tamanio && !lectura->listaVacia())
	for (int i = 1; i <= tamanio; i++)
	{
		cout << "entra al for " << endl;
		if (lectura->obtenerDato(i)->obtenerAnio() > anioLectura && lectura->obtenerDato(i) != NULL){
			cout << "else if 1" << endl;
			cout << "-----------" << endl;
			cout << anioLectura << endl;
			cout << "----------"<< endl;
			cout << "----------"<< endl;
			lectura->obtenerDato(i)->mostrar();
			dato = 1;
			cout << dato << endl;
		}else if(lectura->obtenerDato(i)->obtenerAnio() < anioLectura && lectura->obtenerDato(i) != NULL){
			cout << "-----------" << endl;
			cout << "else if 2" << endl;
			cout << anioLectura << endl;
			cout << "----------"<< endl;
			cout << "----------"<< endl;
			lectura->obtenerDato(i)->mostrar();

			dato = -1;
			cout << dato << endl;
		}
		cout << "sale al for " << endl;
	//i++;
	}
	cout << dato << "Dato salida " << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<< endl;
	return dato;
}
