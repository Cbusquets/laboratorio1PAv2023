#include "Sistema.h"

using namespace std;

Socio *socios[MAX_SOCIOS];
int sociosInscritos = 0;
Clase *clases[MAX_CLASES];
int cantClasesCreadas = 0;

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

        if (existeSocio)
        {
            throw std::invalid_argument("No es posible agregar mas socios");
        }
        else
        {
            Socio *s = new Socio(ci, nombre);
            socios[sociosInscritos] = s;
            sociosInscritos++;
            cout << "OK - '" << nombre << "' fue agregado correctamente." << '\n';
        }
    }
    else
    {
        throw std::invalid_argument("No es posible agregar mas socios");
    }
}

void Sistema::agregarClase(DtClase &clase)
{
    if (cantClasesCreadas < MAX_CLASES)
    { // Valida que no se haya llegado al tope de clases
        bool existeClase = false;
        int iter = 0;
        cout << "iter::"<<iter<<"cantClasesCreadas::"<<cantClasesCreadas<<endl;
        cout << "!existeClase::" << !existeClase << endl;

        while ((!existeClase) && (iter <= cantClasesCreadas)) // Verifica que no exista otra clase con el mismo id
        {
            cout << "Before IF line 57 "<< clase.getId() << endl;
            //if(clases[iter] != null){}
            if (clases[iter]->getId() == clase.getId())
            {
                existeClase = true;
            } else {
                cout << "Inside else line 62 "<< clases[iter]->getId()<<endl;
            }
            iter++;
        }

        if (existeClase)
        {
            throw std::invalid_argument("Ya existe una clase con este id");
        }
        else
        {
            if(clase.getType() == 0){
                DtSpinning *dtSpinning= dynamic_cast<DtSpinning*>(&clase);
                clases[cantClasesCreadas]=new Spinning(dtSpinning->getId(), dtSpinning->getNombre(), dtSpinning->getTurno(), dtSpinning->getCantBicicletas());
            } else {
                DtEntrenamiento *dtEntrenamiento= dynamic_cast<DtEntrenamiento*>(&clase);
                clases[cantClasesCreadas]=new Entrenamiento(dtEntrenamiento->getId(), dtEntrenamiento->getNombre(), dtEntrenamiento->getTurno(), dtEntrenamiento->getEnRambla());
            }
            
            cout << clases[cantClasesCreadas]->getNombre();
        }
    }
    else
    {
        throw std::invalid_argument("No es posible crear más clases");
    }
}

void Sistema::agregarInscripcion(std::string ciSocio, int idClase, DtFecha fecha) {}

void Sistema::borrarInscripcion(std::string ciSocio, int idClase) {}

Sistema::~Sistema() {}