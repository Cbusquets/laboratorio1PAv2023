#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <exception>
#include "Definiciones.h"
#include "Sistema.h"

using namespace std;

int main()
{

    char *comando = new (char[MAX_COMANDO]);
    char *opc, *param1 = NULL, *param2 = NULL, *param3 = NULL;
    bool salir = false;

    do
    {
        param1 = NULL;
        param2 = NULL;
        param3 = NULL;
        cout << "\n----------------------------\n";
        cout << "Elegi la opcion que desees\n \n";
        cout << "agregarSocio(ci, nombre)\n";
        cout << "agregarClase(clase)\n";
        cout << "agregarInscripcion(ciSocio, idClase, fecha)\n";
        cout << "borrarInscripcion(ciSocio, idClase)\n";
        cout << "salir \n";
        cout << "----------------------------\n\n";

        fflush(stdin);
        fgets(comando, MAX_COMANDO, stdin);

        // Busca el salto de linea y lo cambia por una finalización de string
        char *p = strchr(comando, '\n');
        if (p != NULL)
        {
            *p = '\0';
        }

        opc = strtok(comando, "( ,)");

        if (strcasecmp(opc, "agregarSocio") == 0)
        {
            param1 = strtok(NULL, "( ,)");
            param2 = strtok(NULL, "( ,)");

            if ((param1 != NULL) && (param2 != NULL))
            {
                try
                {
                    Sistema obj;
                    obj.agregarSocio(param1, param2);
                }
                catch (std::exception &e)
                {
                    std::cerr << " - ERROR: " << e.what() << '\n';
                }
            }
            else
            {
                cout << " - ERROR: Faltan parámetros\n";
            }
        }
        else if (strcasecmp(opc, "agregarClase") == 0)
        {
            param1 = strtok(NULL, "( ,)");

            if (param1 != NULL)
            {
                // To-DO llamada a agregarClase()
                cout << "Funcion " << opc << " con los parametros " << param1 << "\n";
            }
            else
            {
                cout << " - ERROR: Faltan parámetros\n";
            }
        }
        else if (strcasecmp(opc, "agregarInscripcion") == 0)
        {
            param1 = strtok(NULL, "( ,)");
            param2 = strtok(NULL, "( ,)");
            param3 = strtok(NULL, "( ,)");

            if ((param1 != NULL) && (param2 != NULL) && (param3 != NULL))
            {
                // To-DO llamada a agregarInscripcion()
                cout << "Funcion " << opc << " con los parametros " << param1 << " " << param2 << " " << param3 << "\n";
            }
            else
            {
                cout << " - ERROR: Faltan parámetros\n";
            }
        }
        else if (strcasecmp(opc, "borrarInscripcion") == 0)
        {
            param1 = strtok(NULL, "( ,)");
            param2 = strtok(NULL, "( ,)");

            if ((param1 != NULL) && (param2 != NULL))
            {
                // To-DO llamada a borrarInscripcion()
                cout << "Funcion " << opc << " con los parametros " << param1 << " " << param2 << "\n";
            }
            else
            {
                cout << " - ERROR: Faltan parámetros\n";
            }
        }
        else if (strcasecmp(opc, "salir") == 0)
        {
            salir = true;
        }
        else
        {
            cout << " - ERROR: Opcion incorrecta";
        }

    } while (!salir);

    delete[] comando;
}