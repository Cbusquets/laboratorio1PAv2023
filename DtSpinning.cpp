#include "DtSpinning.h"

DtSpinning::DtSpinning() {}

DtSpinning::DtSpinning(int id, std::string nombre, Turno turno, bool enRambla):DtClase(id, nombre, turno)
{
	this->enRambla = enRambla;
}

bool DtSpinning::getEnRambla()
{
    return this->enRambla;
}

std::string DtSpinning::getenRamblaString()
{
    std::string result;

	switch (this->enRambla)
	{
		case true:
			result = "Si";
			break;
		case false:
			result = "No";
			break;
	}
	return result;
}

std::ostream& operator << (std::ostream &o, DtSpinning& dt)
{
	return o << "ID: " << dt.getId() << "\nNombre: " << dt.getNombre() << "\nTurno: " << dt.getTurno() << "\nEn Rambla: " << dt.getenRamblaString() << std::endl;
}

DtSpinning::~DtSpinning(){}