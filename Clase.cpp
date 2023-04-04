#include "Clase.h"

Clase::Clase() {}

Clase::Clase(int id, std::string nombre, Turno turno)
{
	this->id = id;
	this->nombre = nombre;
	this->turno = turno;
}

int Clase::getId()
{
	return this->id;
}

std::string Clase::getNombre()
{
	return this->nombre;
}

Turno Clase::getTurno()
{
	return this->turno;
}

void Clase::setId(int id)
{
	this->id = id;
}

void Clase::setNombre(std::string nombre)
{
	this->nombre = nombre;
}

void Clase::setTurno(Turno turno)
{
	this->turno = turno;
}

Clase::~Clase(){}