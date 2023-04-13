#ifndef SPINNING_H
#define SPINNING_H
#include "Clase.h"

class Spinning : public Clase
{
private:
	int cantBicicletas;

public:
	Spinning();
	Spinning(int id, std::string nombre, Turno turno, int cantBicicletas);
	int getCantBicicletas();
	virtual int cupo();
	~Spinning();
};

#endif
