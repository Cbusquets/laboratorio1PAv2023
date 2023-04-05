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
        std::string getTurno();
		virtual ~DtClase();
};

#endif
