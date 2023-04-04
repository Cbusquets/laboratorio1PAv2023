#ifndef INSCRIPCION
#define INSCRIPCION
#include "DtFecha.h"
#include "Socio.h"
class Inscripcion
{
	private:
		DtFecha fecha;
        Socio* socio;
	public:
		Inscripcion();
		Inscripcion(DtFecha fecha, Socio* socio);
		DtFecha getFecha();
		Socio* getSocio();
		void setFecha(DtFecha fecha);
		void setSocio(Socio* socio);
	     ~Inscripcion();
};

#endif
