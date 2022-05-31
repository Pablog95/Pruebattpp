#include "historica.h"

Historica :: Historica (string _titulo, string _minutos, string _anio, string _autor,string _genero, string _tema):
									Novela (titulo,minutos,anio,autor,genero)
{
	this->tema = _tema;
}

void Historica :: mostrarHistorica(){
	mostrarNovela();
	cout << "Tema: " << endl;
}
