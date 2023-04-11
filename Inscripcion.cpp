#include "Inscripcion.h"

Inscripcion::Inscripcion() {}

Inscripcion::Inscripcion(DtFecha fecha, Socio *socio)
{
    this->fecha = fecha;
    this->socio = socio;
}

DtFecha Inscripcion::getFecha()
{
    return this->fecha;
}

Socio *Inscripcion::getSocio()
{
    return this->socio;
}

void Inscripcion::setFecha(DtFecha fecha)
{
    this->fecha = fecha;
}

void Inscripcion::setSocio(Socio *socio)
{
    this->socio = socio;
}

Inscripcion::~Inscripcion() {}