#ifndef CLASE
#define CLASE
#include <string>
#include "Definiciones.h"
#include "Inscripcion.h"
#include "Turno.h"

class Clase
{
	protected:
		int id;
		std::string nombre;
        Turno turno;
		Inscripcion* inscripciones[MAX_CLASES];

	public:
		Clase();
		Clase(int id, std::string nombre, Turno turno);
        int getId();
        std::string getNombre();
		Turno getTurno();
		void setId(int id);
		void setNombre(std::string nombre);
		void setTurno(Turno turno);
        virtual int cupo() = 0;
		virtual ~Clase();
};

#endif

