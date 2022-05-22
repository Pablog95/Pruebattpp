#include "archivo.h"
#include "cuento.h"
#include "novela.h"
#include "poema.h"
#include <iostream>

using namespace std;

Archivo :: Archivo () {

}

void Archivo :: leerArchivoEscritor(Escritor* &escritor) {
    archivo.open("texto.txt", ios::in);

    if (archivo.fail()){
        cout << "No se puede abrir el archivo." << endl;
        exit(1);
    }
	while (!archivo.eof()){

		getline(archivo, primero,'\n');
		getline(archivo, nombreApellido,'\n');
		getline(archivo, nacionalidad,'\n');
		getline(archivo, anioNacimiento,'\n');
		getline(archivo, anioFallecimiento,'\n');
		
    	cout << primero << endl;
    	cout << nombreApellido << endl;
    	cout << nacionalidad << endl;
    	cout << anioNacimiento << endl;
    	cout << anioFallecimiento << endl;
    	
		escritor = new Escritor(nombreApellido,nacionalidad,anioNacimiento,anioFallecimiento);
		}
		
	archivo.close();	     
}

Lectura* Archivo :: LeerArchivoLecturas(){
	string narracion, titulo,referenciaAutor = "anonimo";
	string anioPublicacion, minutos, datoSegunNarracion;
	archivo.open(,ios::in);
	
	if (archivo.fail()){
		cout << "No se puede abrir el archivo." << endl;
		exit(1);
	}
	while (archivo.eof()){
		getline(archivo, narracion);
		getline(archivo,titulo);
		getline(archivo,minutos);
		getline(archivo,anioPublicacion);
		getline(archivo,datoSegunNarracion);
		getline(archivo,referenciaAutor);
		
		if (narracion == "N"){
			cout << "Novela" << endl;
			new Novela(titulo,minutos,anioPublicacion,referenciaAutor, datoSegunNarracion); 
		}
		if (narracion == "C"){
			cout << "Cuento" << endl;
			new Cuento(titulo,minutos,anioPublicacion,referenciaAutor,datoSegunNarracion);
		}
		if(narracion == "P"){
			cout << "Poema" << endl;
			new Poema(titulo, minutos, anioPublicacion, referenciaAutor, datoSegunNarracion);
		}
		
	}
	
}
/*
Escritor* Archivo :: procesarDatos(){
	new Escritor (nombreApellido,nacionalidad,anioNacimiento,anioFallecimiento);
}
string Archivo :: nombreApellidoo(){
	return nombreApellido;
}

string Archivo :: nacionalidadd(){
	return nacionalidad;
}

int Archivo :: anioNacimientoo(){
	return atoi(anioNacimiento);
}

int Archivo :: anioFallecimientoo(){
	return atoi(anioFallecimiento);
}
*/
void Archivo :: mostrarArchivo() {

    cout << primero << endl;
    cout << nombreApellido << endl;
    cout << nacionalidad << endl;
    cout << anioNacimiento << endl;
    cout << anioFallecimiento << endl;

}
