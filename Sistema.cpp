#include <Socio.h>
#include <Definiciones.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <exception>

using namespace std;

Socio *socios[MAX_SOCIOS];
int sociosInscritos = 0;

void agregarSocio(string ci, string nombre)
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