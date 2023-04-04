#ifndef DTENTRENAMIENTO
#define DTENTRENAMIENTO
#include "DtClase.h""

class DtEntrenamiento: public DtClase
{
	private:
		int cantBicicletas;

	public:
		DtEntrenamiento();
		DtEntrenamiento(int id, std::string nombre, Turno turno, int cantBicicletas);
		int getCantBicicletas();
        ~DtEntrenamiento();
};

#endif
