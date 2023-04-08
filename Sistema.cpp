#include "Sistema.h"
#include "Socio.h"
#include "Definiciones.h"

using namespace std;

Socio *socios[MAX_SOCIOS];
int sociosInscritos = 0;

Sistema::Sistema() {}

void Sistema::agregarSocio(std::string ci, std::string nombre)
{
    if (sociosInscritos < MAX_SOCIOS) // Valida que no se haya llegado al máximo cupo de socios
    {
        bool existeSocio = false;
        int iter = 0;

        while ((existeSocio == false) && (iter < sociosInscritos))
        {
            if (socios[iter]->getCi() == ci)
            {
                existeSocio = true;
            }
            iter++;
        }

        if (!existeSocio)
        { // Agrega al socio
            Socio *s = new Socio(ci, nombre);
            socios[sociosInscritos] = s;
            sociosInscritos++;
            cout << "OK - '" << nombre << "' fue agregado correctamente." << '\n';
        }
        else
        {
            throw std::invalid_argument("Ya existe ese usuario en el sistema");
        }
    }
    else
    {
        throw std::invalid_argument("No es posible agregar mas socios");
    }
}

void Sistema::agregarClase(DtClase &clase) {}

void Sistema::agregarInscripcion(std::string ciSocio, int idClase, DtFecha fecha) {}

void Sistema::borrarInscripcion(std::string ciSocio, int idClase) {}

Sistema::~Sistema() {}