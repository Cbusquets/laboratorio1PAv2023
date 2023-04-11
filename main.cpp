#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <exception>
#include "Definiciones.h"
#include "Sistema.h"
#include "DtSpinning.h"
#include "DtEntrenamiento.h"
#include "DtFecha.h"

using namespace std;
using std::cin;

int main()
{
    Sistema obj;
    bool salir = false;
    Sistema obj;

    do
    {

        cout << "\n----------------------------\n";
        cout << "Elige el numero de opcion que desees:\n \n";
        cout << "  1) Agregar Socio\n";
        cout << "  2) Agregar Clase\n";
        cout << "  3) Agregar Inscripcion\n";
        cout << "  4) Borrar Inscripcion\n";
        cout << "  5) Salir \n";
        cout << "  6) Imprimir todas las clases \n";
        cout << "  7) Imprimir todos los socios \n";
        cout << "----------------------------\n\n";

        int opc;
        cin >> opc;

        if (opc == 1) // Agregar socio
        {
            string ciSocio, nombreSocio;
            cout << "\nIngrese los siguientes datos por favor:\n";
            cout << "---------------------------------------\n\n";
            cout << "Ingrese la cedula del socio: ";
            cin >> ciSocio;
            cout << "Ingrese el nombre del socio: ";
            cin >> nombreSocio;

            try
            {
                obj.agregarSocio(ciSocio, nombreSocio);
            }
            catch (std::exception &e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        else if (opc == 2) // Agregar Clase
        {
            
            int idClase;
            string nombreClase;
            int idTurno;
            Turno turno;
            int idTipoClase;
            DtSpinning cSpinning;
            DtEntrenamiento cEntrenamiento;

            cout << "\nIngrese los siguientes datos por favor:\n";
            cout << "---------------------------------------\n\n";
            cout << "Ingresa id de la clase: ";
            cin >> idClase;
            cout << "Ingresa el nombre de la clase: ";
            cin >> nombreClase;

            // Solicita el turno
            do
            {
                cout << "Ingrese el turno: \n   1) Mañana \n   2) Tarde \n   3) Noche\n";
                cin >> idTurno;
            } while ((idTurno < 1) || (idTurno > 3));

            if (idTurno == 1)
            {
                turno = MANANA;
            }
            else if (idTurno == 2)
            {
                turno = TARDE;
            }
            else if (idTurno == 3)
            {
                turno = NOCHE;
            }

            // Pregunta tipo de clase
            do
            {
                cout << "Ingrese el tipo de clase: \n   1) Spinning \n   2) Entrenamiento\n";
                cin >> idTipoClase;
            } while ((idTipoClase < 1) || (idTipoClase > 2));

            // Crea el tipo de clase especifico
            if (idTipoClase == 1)
            { // Crear clase Spinning
                int cantBicis;

                do
                {
                    cout << "Ingrese la cantidad de bicis: ";
                    cin >> cantBicis;

                } while ((cantBicis > 50) || (cantBicis < 1));

                cSpinning = DtSpinning(idClase, nombreClase, turno, cantBicis, SPINNING);

                try
                {
                    obj.agregarClase(cSpinning);
                }
                catch (std::exception &e)
                {
                    std::cerr << e.what() << '\n';
                }
            }
            else
            { // Crear clase Entrenamiento
                int intEnRambla;
                bool enRambla;

                do
                {
                    cout << "¿Deseas que la clase sea en la rambla? \n   1) Sí \n   2) No \n";
                    cin >> intEnRambla;
                } while ((intEnRambla < 1) || (intEnRambla > 2));

                if (intEnRambla == 1)
                {
                    enRambla = true;
                }
                else
                {
                    enRambla = false;
                }

                cEntrenamiento = DtEntrenamiento(idClase, nombreClase, turno, enRambla, ENTRENAMIENTO);

                try
                {
                    obj.agregarClase(cEntrenamiento);
                }
                catch (std::exception &e)
                {
                    std::cerr << e.what() << '\n';
                }
            }
            cin.ignore();
        }
        else if (opc == 3) // Agregar Inscripcion
        {
            
            string ciSocio;
            int idClaseInscr;
            int diaInscr;
            int mesInscr;
            int anioInscr;

            cout << "Ingresa el numero de cedula del socio: " << endl;
            cin >> ciSocio;
            cout << "Ingresa el id de la clase a la que se desea inscribir: " << endl;
            cin >> idClaseInscr;
            cout << "Ingresa el dia de la inscripcion: " << endl;
            cin >> diaInscr;
            cout << "Ingresa el mes de la inscripcion: " << endl;
            cin >> mesInscr;
            cout << "Ingresa el anio de la inscripcion: " << endl;
            cin >> anioInscr;

            try
            {
                DtFecha fechaInscr(diaInscr, mesInscr, anioInscr);
                obj.agregarInscripcion(ciSocio, idClaseInscr, fechaInscr);
            }
            catch (std::exception &e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        else if (opc == 4) // Borrar inscripcion
        {
            cout << "   ERROR - No implementada";
        }
        else if (opc == 5) // Salir
        {
            cout << "  ¡Hasta la proxima!"<< endl;
            salir = true;
        }
        else if (opc == 6) // Imprimir todas las clases
        {
            obj.imprimirClases();
        }
        else if (opc == 7) // Imprimir todos los socios
        {
            obj.imprimirSocios();
        }
        else
        {
            cout << "  ERROR - Opcion incorrecta. \n";
        }

    } while (!salir);

    return 0;
}