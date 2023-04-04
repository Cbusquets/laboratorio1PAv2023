#ifndef ENTRENAMIENTO
#define ENTRENAMIENTO
#include "Clase.h"

class Entrenamiento: public Clase
{
	private:
		bool enRambla;

	public:
		Entrenamiento();
		Entrenamiento(int id, std::string nombre, Turno turno, bool enRambla);
		bool getEnRambla();
        int cupo();
        ~Entrenamiento();
};

#endif
