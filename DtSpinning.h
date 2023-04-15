#ifndef DTSPINNING_H
#define DTSPINNING_H
#include <string>
#include "DtClase.h"

using namespace std;

class DtSpinning : public DtClase
{
private:
	int cantBicicletas;

public:
	DtSpinning();
	DtSpinning(int id, string nombre, Turno turno, int cantBicicletas);

	int getCantBicicletas();

	friend ostream &operator<<(ostream *o, DtSpinning &dt);

	~DtSpinning();
};

#endif
