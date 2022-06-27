#include "vertice.h"

using namespace std;

Vertice :: Vertice(string nombre)
{
    this->nombre = nombre;
    this->siguiente = nullptr;
    this->arista = nullptr;

}
