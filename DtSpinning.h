#ifndef DTSPINNING
#define DTSPINNING
#include "DtClase.h"

class DtSpinning : public DtClase
{
private:
	int cantBicicletas;

public:
	DtSpinning();
	DtSpinning(int id, std::string nombre, Turno turno, int cantBicicletas);
	int getCantBicicletas();
	~DtSpinning();
};

#endif
