#include "DtEntrenamiento.h"
#include "Turno.h"
#include "Definiciones.h"
#include <string>

DtEntrenamiento::DtEntrenamiento() {}

DtEntrenamiento::DtEntrenamiento(int id, std::string nombre, Turno turno, bool enRambla) : DtClase(id, nombre, turno)
{

	this->enRambla = enRambla;
}

bool DtEntrenamiento::getEnRambla()
{
	return this->enRambla;
}

std::string DtEntrenamiento::getenRamblaString()
{
	if (this->enRambla)
		return "Sí";
	else
		return "No";
}

std::ostream &operator<<(std::ostream &o, DtEntrenamiento &dt)
{
	return o << "ID: " << dt.getId() << "\nNombre: " << dt.getNombre() << "\nTurno: " << dt.getTurno() << "\nEn Rambla: " << dt.getenRamblaString() << std::endl;
}

DtEntrenamiento::~DtEntrenamiento() {}