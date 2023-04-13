#include "DtSocio.h"

DtSocio::DtSocio() {}

DtSocio::DtSocio(int ci, std::string nombre)
{
    this->ci = ci;
    this->nombre = nombre;
}

int DtSocio::getCi()
{
    return this->ci;
}

std::string DtSocio::getNombre()
{
    return this->nombre;
}

DtSocio::~DtSocio() {}