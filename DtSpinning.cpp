#include "DtSpinning.h"
#include "Definiciones.h"

using namespace std;

DtSpinning::DtSpinning() {}

DtSpinning::DtSpinning(int id, string nombre, Turno turno, int cantBicicletas) : DtClase(id, nombre, turno)
{
	this->cantBicicletas = cantBicicletas;
}

int DtSpinning::getCantBicicletas()
{
	return this->cantBicicletas;
}

ostream &operator<<(ostream &o, DtSpinning &dt)
{
	o << "Id Clase: " << dt.getId() << "\nNombre: " << dt.getNombre() << "\nTurno: " << dt.getTurno() << "\nCantidad de bicicletas: " << dt.getCantBicicletas() << endl;
}

DtSpinning::~DtSpinning() {}
