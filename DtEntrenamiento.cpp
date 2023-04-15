#include "DtEntrenamiento.h"
#include "Turno.h"
#include "Definiciones.h"
#include <string>

using namespace std;

DtEntrenamiento::DtEntrenamiento() {}

DtEntrenamiento::DtEntrenamiento(int id, std::string nombre, Turno turno, bool enRambla) : DtClase(id, nombre, turno)
{

	this->enRambla = enRambla;
}

bool DtEntrenamiento::getEnRambla()
{
	return this->enRambla;
}

string DtEntrenamiento::getenRamblaString()
{
	if (this->enRambla)
		return "Sí";
	else
		return "No";
}

ostream &operator<<(ostream &o, DtEntrenamiento &dt)
{
	o<< "Id Clase: " << dt.getId() << "\nNombre: " << dt.getNombre() << "\nTurno: " << dt.getTurno() << "\nEn Rambla: " << dt.getenRamblaString() << std::endl;
}

DtEntrenamiento::~DtEntrenamiento() {}