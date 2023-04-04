#include "DtFecha.h"
#include <stdexcept>

DtFecha::DtFecha() {}

DtFecha::DtFecha(int dia, int mes, int anio)
{
	if (dia<1 || dia>31 || mes<1 || mes>12 || anio<1900)
	{
		throw std::invalid_argument("Fecha no valida\n");
	}

	else
	{
		this->dia = dia;
		this->mes = mes;
		this->anio = anio;
		
	}
}

int DtFecha::getDia()
{
    return this->dia;
}


int DtFecha::getMes()
{
    return this->mes;
}

int DtFecha::getAnio()
{
    return this->anio;
}

std::ostream& operator << (std::ostream &o, const DtFecha &fecha)
{
    return std::cout << fecha.dia << "/" << fecha.mes << "/" << fecha.anio;
}

DtFecha::~DtFecha(){}