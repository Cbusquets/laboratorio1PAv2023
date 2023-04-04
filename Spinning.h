#ifndef SPINNING
#define SPINNING
#include "Clase.h"

class Spinning: public Clase
{
	private:
		int cantBicicletas;

	public:
		Spinning();
		Spinning(int id, std::string nombre, Turno turno, int cantBicicletas);
		int getCantBicicletas();
        int cupo();
        ~Spinning();
};

#endif
