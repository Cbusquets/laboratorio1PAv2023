#include "DtClase.h"

DtClase::DtClase() {}

DtClase::DtClase(int id, std::string nombre, Turno turno)
{
	this->id = id;
    this->nombre = nombre;
    this->turno = turno;
}

int DtClase::getId()
{
    return this->id;
}

std::string DtClase::getNombre()
{
    return this->nombre;
}

std::string DtClase::getTurno()
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

DtClase::~DtClase(){}