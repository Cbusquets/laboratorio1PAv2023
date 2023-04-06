#include <string>
#include "Sistema.h"

Sistema::Sistema(){}

void Sistema::agregarSocio(std::string ci, std::string nombre){}

void Sistema::agregarClase(DtClase& clase){}

void Sistema::agregarInscripcion(std::string ciSocio, int idClase, DtFecha fecha){}

void Sistema::borrarInscripcion(std::string ciSocio, int idClase){}

Sistema::~Sistema(){}