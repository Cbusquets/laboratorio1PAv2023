#include "DtSpinning.h"
#include "Definiciones.h"

DtSpinning::DtSpinning() {}

DtSpinning::DtSpinning(int id, std::string nombre, Turno turno, int cantBicicletas) : DtClase(id, nombre, turno)
{
	this->cantBicicletas = cantBicicletas;
}

int DtSpinning::getCantBicicletas()
{
	return this->cantBicicletas;
}

std::ostream &operator<<(std::ostream &o, DtSpinning &dt)
{
	return o << "ID: " << dt.getId() << "\nNombre: " << dt.getNombre() << "\nTurno: " << dt.getTurno() << "\nCantidad de bicicletas: " << dt.getCantBicicletas() << std::endl;
}

DtSpinning::~DtSpinning() {}