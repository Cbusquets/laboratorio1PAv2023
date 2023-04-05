#include "Entrenamiento.h"

Entrenamiento::Entrenamiento() {}

Entrenamiento::Entrenamiento(int id, std::string nombre, Turno turno, bool enRambla):Clase(id, nombre, turno)
{
	this->enRambla = enRambla;
}

int Entrenamiento::cupo()
{
	if (this->enRambla){
		return 20;
	}
	else{
		
	}
}

bool Entrenamiento::getEnRambla()
{
	return this->enRambla;
}

Entrenamiento::~Entrenamiento(){}