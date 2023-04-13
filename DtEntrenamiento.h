#ifndef DTENTRENAMIENTO_H
#define DTENTRENAMIENTO_H
#include "DtClase.h"
#include <string>

using namespace std;

class DtEntrenamiento : public DtClase
{
private:
	bool enRambla;

public:
	DtEntrenamiento();
	DtEntrenamiento(int id, string nombre, Turno turno, bool enRambla);

	bool getEnRambla();
	string getenRamblaString();

	friend ostream &operator<<(ostream *o, DtEntrenamiento &dt);
	~DtEntrenamiento();
};

#endif
