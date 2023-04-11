#include "Clase.h"

// ---------- Constructores
Clase::Clase() {}

Clase::Clase(int id, std::string nombre, Turno turno)
{
	this->id = id;
	this->nombre = nombre;
	this->turno = turno;
	this->cantInscriptos = 0;
}

//
// ---------- Getters

int Clase::getId()
{
	return this->id;
}

string Clase::getNombre()
{
	return this->nombre;
}

Turno Clase::getTurno()
{
	return this->turno;
}

int Clase::getCantInscriptos()
{
	return this->cantInscriptos;
}

Inscripcion *Clase::getInscriptos()
{
	return this->inscripciones;
}

//
// ---------- Setters

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

void Clase::setCantInscriptos(int cant)
{
	this->cantInscriptos = cant;
}

void Clase::setInscripcion(Inscripcion inscr)
{
	this->inscripciones[cantInscriptos] = inscr;
	this->cantInscriptos++;
}

//
// ---------- Destructores

Clase::~Clase() {}