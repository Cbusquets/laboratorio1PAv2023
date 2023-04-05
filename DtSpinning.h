#ifndef DTSPINNING
#define DTSPINNING
#include "DtClase.h""

class DtSpinning: public DtClase
{
	private:
		bool enRambla;

	public:
		DtSpinning();
		DtSpinning(int id, std::string nombre, Turno turno, bool enRambla);
		bool getEnRambla();
		std::string getenRamblaString();
        ~DtSpinning();
};

#endif
