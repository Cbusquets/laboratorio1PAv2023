#include "Spinning.h"

Spinning::Spinning() {}

Spinning::Spinning(int id, std::string nombre, Turno turno, int cantBicicletas) : Clase(id, nombre, turno)
{
	this->cantBicicletas = cantBicicletas;
}

int Spinning::cupo()
{
	// Para la clase de Spinning el cupo es igual a la cantidad de bicis
	return getCantBicicletas();
}

int Spinning::getCantBicicletas()
{
	return this->cantBicicletas;
}

Spinning::~Spinning() {}