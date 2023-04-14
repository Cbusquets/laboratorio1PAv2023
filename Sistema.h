#ifndef SISTEMA_H
#define SISTEMA_H
#include <string>
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <exception>
#include <typeinfo>
#include <fstream>
#include "Definiciones.h"
#include "Socio.h"
#include "Inscripcion.h"
#include "DtFecha.h"
#include "DtClase.h"
#include "DtSpinning.h"
#include "DtEntrenamiento.h"
#include "Clase.h"
#include "Spinning.h"
#include "Entrenamiento.h"

class Sistema
{
private:
	Socio *socios[MAX_SOCIOS];
	Clase *clases[MAX_CLASES];
	int sociosInscritos;
	int cantClasesCreadas;

public:
	Sistema();
	void agregarSocio(std::string ci, std::string nombre);
	void agregarClase(DtClase &clase);
	void agregarInscripcion(std::string ciSocio, int idClase, DtFecha fecha);
	void borrarInscripcion(std::string ciSocio, int idClase);
	void imprimirClases();
	void imprimirSocios();
	~Sistema();
};

#endif
