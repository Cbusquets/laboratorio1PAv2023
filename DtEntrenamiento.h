#ifndef DTENTRENAMIENTO_H
#define DTENTRENAMIENTO_H
#include "DtClase.h"

class DtEntrenamiento : public DtClase
{
private:
	bool enRambla;

public:
	DtEntrenamiento();
	DtEntrenamiento(int id, std::string nombre, Turno turno, bool enRambla);
	bool getEnRambla();
	std::string getenRamblaString();
	friend std::ostream &operator<<(std::ostream &o, DtEntrenamiento &dt);
	~DtEntrenamiento();
};

#endif
