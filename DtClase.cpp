#include "DtClase.h"
#include "Definiciones.h"

DtClase::DtClase() {}

DtClase::DtClase(int id, std::string nombre, Turno turno, claseType type)
{
	this->id = id;
    this->nombre = nombre;
    this->turno = turno;
	this->type=type;
}

int DtClase::getId()
{
    return this->id;
}

std::string DtClase::getNombre()
{
    return this->nombre;
}

std::string DtClase::getTurnoString()
{
    std::string result;

	switch (this->turno)
	{
		case MANANA:
			result = "MAÑANA";
			break;
		case TARDE:
			result = "TARDE";
			break;
		case NOCHE:
			result = "NOCHE";
			break;
	}
	return result;
}

Turno DtClase::getTurno()
{
	return this->turno;
}

claseType DtClase::getType(){
	return this->type;
}

DtClase::~DtClase(){}