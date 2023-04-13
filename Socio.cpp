#include "Socio.h"

Socio::Socio() {}

Socio::Socio(std::string ci, std::string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

std::string Socio::getCi()
{
	return this->ci;
}

std::string Socio::getNombre()
{
	return this->nombre;
}

void Socio::setCi(std::string ci)
{
	this->ci = ci;
}

void Socio::setNombre(std::string nombre)
{
	this->nombre = nombre;
}

Socio::~Socio() {}