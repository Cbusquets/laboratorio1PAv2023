#ifndef DTCLASE_H
#define DTCLASE_H
#include <iostream>
#include <string>
#include "Turno.h"
#include "Definiciones.h"

class DtClase
{
protected:
	int id;
	std::string nombre;
	Turno turno;

public:
	DtClase();
	DtClase(int id, std::string nombre, Turno turno);
	int getId();
	std::string getNombre();
	std::string getTurnoString();
	Turno getTurno();
	virtual ~DtClase();
};

#endif
