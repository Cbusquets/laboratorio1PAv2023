#ifndef CLASE
#define CLASE
#include <string>
#include "Definiciones.h"
#include "Inscripcion.h"
#include "Turno.h"

using namespace std;

class Clase
{
private:
	int id;
	string nombre;
	Turno turno;
	Inscripcion inscripciones[MAX_CLASES];
	int cantInscriptos;

public:
	Clase();
	Clase(int id, std::string nombre, Turno turno);

	// Getters
	int getId();
	string getNombre();
	Turno getTurno();
	int getCantInscriptos();
	Inscripcion *getInscriptos();

	// Setters
	void setId(int id);
	void setNombre(std::string nombre);
	void setTurno(Turno turno);
	void setCantInscriptos(int cant);
	virtual int cupo() = 0;
	void setInscripcion(Inscripcion ins);

	virtual ~Clase();
};

#endif
