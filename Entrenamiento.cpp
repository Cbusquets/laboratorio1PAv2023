#include "Entrenamiento.h"

Entrenamiento::Entrenamiento() {}

Entrenamiento::Entrenamiento(int id, std::string nombre, Turno turno, bool enRambla):Clase(id, nombre, turno)
{
	this->enRambla = enRambla;
}

int Entrenamiento::cupo()
{
	return this->id;
}

bool Entrenamiento::getEnRambla()
{
	return this->enRambla;
}

Entrenamiento::~Entrenamiento(){}