#ifndef SISTEMA
#define SISTEMA
#include <string>
#include "Definiciones.h"
#include "Socio.h"
#include "Inscripcion.h"
#include "DtFecha.h"
#include "DtClase.h"

class Sistema
{
	private:
		Socio* socios[MAX_SOCIOS];
		int cantSocios;
		
	public:
		Sistema();
		void agregarSocio(std::string ci, std::string nombre);
		void agregarClase(DtClase& clase);
		void agregarInscripcion(std::string ciSocio, int idClase, DtFecha fecha);
		void borrarInscripcion(std::string ciSocio, int idClase);
        ~Sistema();
};

#endif
