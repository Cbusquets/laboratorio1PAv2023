#include "Spinning.h"

Spinning::Spinning() {}

Spinning::Spinning(int id, std::string nombre, Turno turno, int cantBicicletas):Clase(id, nombre, turno)
{
	this->cantBicicletas = cantBicicletas;
}

int Spinning::cupo()
{
	return this->id;
}

int Spinning::getCantBicicletas()
{
	return this->cantBicicletas;
}

Spinning::~Spinning(){}