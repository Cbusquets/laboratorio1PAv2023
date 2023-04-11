#include "Sistema.h"
#include "Clase.h"

using namespace std;

Sistema::Sistema()
{
    this->sociosInscritos = 0;
    this->cantClasesCreadas = 0;

    for (int index = 0; index < MAX_CLASES; index++)
    {
        clases[index] = NULL;
    }
}

void Sistema::agregarSocio(string ci, string nombre)
{
    if (sociosInscritos < MAX_SOCIOS) // Valida que no se haya llegado al máximo cupo de socios
    {
        bool existeSocio = false;
        int iter = 0;

        if (sociosInscritos > 0)
        {
            while ((existeSocio == false) && (iter < sociosInscritos))
            {
                if (socios[iter]->getCi() == ci)
                {
                    existeSocio = true;
                }
                iter++;
            }
        }

        if (existeSocio)
        {
            throw std::invalid_argument("  ERROR - Ya existe un usuario con esa CI");
        }
        else
        {
            Socio *s = new Socio(ci, nombre);
            socios[sociosInscritos] = s;
            sociosInscritos++;
            cout << "   OK - '" << nombre << "' fue agregado correctamente." << '\n';
        }
    }
    else
    {
        throw std::invalid_argument("  ERROR - No es posible agregar mas socios");
    }
}

void Sistema::agregarClase(DtClase &clase)
{
    if (cantClasesCreadas < MAX_CLASES)
    { // Valida que no se haya llegado al tope de clases
        bool existeClase = false;
        int iter = 0;

        if (cantClasesCreadas > 0)
        {
            while ((!existeClase) && (iter < cantClasesCreadas)) // Verifica que no exista otra clase con el mismo id
            {
                if (clases[iter]->getId() == clase.getId())
                {
                    existeClase = true;
                }
                iter++;
            }
        }

        if (existeClase)
        {
            throw std::invalid_argument("  ERROR - Ya existe una clase con este id");
        }
        else
        {
            if (clase.getType() == 0)
            {
                DtSpinning *dtSpinning = dynamic_cast<DtSpinning *>(&clase);
                clases[cantClasesCreadas] = new Spinning(dtSpinning->getId(), dtSpinning->getNombre(), dtSpinning->getTurno(), dtSpinning->getCantBicicletas());
            }
            else
            {
                DtEntrenamiento *dtEntrenamiento = dynamic_cast<DtEntrenamiento *>(&clase);
                clases[cantClasesCreadas] = new Entrenamiento(dtEntrenamiento->getId(), dtEntrenamiento->getNombre(), dtEntrenamiento->getTurno(), dtEntrenamiento->getEnRambla());
            }
            cout << "   OK - Clase '" << clases[cantClasesCreadas]->getNombre() << "' fue agregada correctamente";
            cantClasesCreadas++;
        }
    }
    else
    {
        throw std::invalid_argument("  ERROR - No es posible crear más clases");
    }
}

void Sistema::agregarInscripcion(std::string ciSocio, int idClase, DtFecha fecha)
{

    bool existeSocio = false;
    int iterSocio = 0;
    bool existeClase = false;
    int iterClase = 0;

    if (sociosInscritos > 0) // Verifica que exista al menos un socio ingresado al sistema
    {

        while ((!existeSocio) && (iterSocio < sociosInscritos)) // Verifica que exista el socio
        {
            if (socios[iterSocio]->getCi() == ciSocio)
            {
                existeSocio = true;
            }
            if (!existeSocio)
            {
                iterSocio++;
            }
        }
    }
    else
    {
        throw std::invalid_argument("  ERROR - No hay ningun socio ingresado al sistema");
    }

    if (cantClasesCreadas > 0) // Verifica que exista al menos una clase ingresada en el sistema
    {
        while ((!existeClase) && (iterClase < cantClasesCreadas)) // Verifica que exista la clase
        {
            if (clases[iterClase]->getId() == idClase)
            {
                existeClase = true;
            }
            if (!existeClase)
            {
                iterClase++;
            }
        }
    }
    else
    {
        throw std::invalid_argument("  ERROR - No hay ninguna clase ingresada en el sistema");
    }

    if (!existeSocio) // Si no existe el socio
    {
        throw std::invalid_argument("  ERROR - No existe un socio con esa CI");
    }
    else if (!existeClase) // Si no existe la clase
    {
        throw std::invalid_argument("  ERROR - No existe un socio con esa CI");
    }
    else // Si existe el socio y la clase
    {
        if (clases[iterClase]->getCantInscriptos() < clases[iterClase]->cupo()) // Verifica que hayan cupos disponibles
        {
            int iter = 0;
            bool socioInscrito = false;
            Inscripcion *inscriptos = clases[iterClase]->getInscriptos(); // Obtengo el arreglo de los socios incriptos a esa clase

            while ((!socioInscrito) && (iter < clases[iterClase]->getCantInscriptos()))
            { // Verifica que el socio ya no este inscripto en esa clase
                if (inscriptos[iter].getSocio()->getCi() == ciSocio)
                {
                    socioInscrito = true;
                }
                iter++;
            }

            if (socioInscrito)
            {
                throw std::invalid_argument("  ERROR - El socio ya está inscripto a esta clase");
            }
            else
            {
                Inscripcion *inscr = new Inscripcion(fecha, socios[iterSocio]);
                clases[iterClase]->setInscripcion(*inscr);
                cout << "   OK - La inscripcion de '" << ciSocio << "' a la clase '" << idClase << "' fue agregada correctamente." << '\n';
            }
        }
        else
        {
            throw std::invalid_argument("  ERROR - No hay cupos disponibles para esta clase");
        }
    }
}

void Sistema::borrarInscripcion(string ciSocio, int idClase) {}

/* TEST */

void Sistema::imprimirClases()
{
    if (cantClasesCreadas == 0)
    {
        cout << "No hay clases creadas";
    }
    else
    {
        for (int i = 0; i < cantClasesCreadas; i++)
        {
            cout << "Id: " << clases[i]->getId() << "\n";
            cout << "Nombre: " << clases[i]->getNombre() << "\n";
            cout << "Turno: " << clases[i]->getTurno() << "\n";
            cout << "Cant inscriptos: " << clases[i]->getCantInscriptos() << "\n";
        }
    }
}

void Sistema::imprimirSocios()
{
    if (sociosInscritos == 0)
    {
        cout << "No hay ningun socio inscrito \n";
    }
    else
    {
        for (int i = 0; i < sociosInscritos; i++)
        {
            cout << "CI: " << socios[i]->getCi() << "\n";
            cout << "Nombre: " << socios[i]->getNombre() << "\n";
        }
    }
}

Sistema::~Sistema() {}