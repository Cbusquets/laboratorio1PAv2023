#ifndef DTCLASE
#define DTCLASE
#include <iostream>
#include <string>
#include "Turno.h"
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
        Turno getTurno();
		virtual ~DtClase();
};

#endif
