#include "DtEntrenamiento.h"

DtEntrenamiento::DtEntrenamiento() {}

DtEntrenamiento::DtEntrenamiento(int id, std::string nombre, Turno turno, int cantBicicletas):DtClase(id, nombre, turno)
{
	this->cantBicicletas = cantBicicletas;
}

int DtEntrenamiento::getCantBicicletas()
{
	return this->cantBicicletas;
}

std::ostream& operator << (std::ostream &o, DtEntrenamiento& dt)
{
	return o << "ID: " << dt.getId() << "\nNombre: " << dt.getNombre() << "\nTurno: " << dt.getTurno() << "\nCantidad de Bicicletas: " << dt.getCantBicicletas() << std::endl;
}

DtEntrenamiento::~DtEntrenamiento(){}