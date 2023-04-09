#ifndef ENTRENAMIENTO_H
#define ENTRENAMIENTO_H
#include "Clase.h"

class Entrenamiento : public Clase
{
private:
	bool enRambla;

public:
	Entrenamiento();
	Entrenamiento(int id, std::string nombre, Turno turno, bool enRambla);
	bool getEnRambla();
	void setEnRambla(bool rambla);
	virtual int cupo();
	~Entrenamiento();
};

#endif
