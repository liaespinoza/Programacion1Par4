// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 07/10/2026

#include <iostream>
#include <string>
using namespace std;

void BuscarContactos(string contactos[], int cantidad, string prefijo);

int main()
{
    string contactos[5] = {"Marcelo", "Maria", "Martin", "Juan", "Marcos"};

    string prefijo;

    cout << "Ingrese el prefijo de 3 letras: ";
    cin >> prefijo;

    cout << "Contactos encontrados:" << endl;

    BuscarContactos(contactos, 5, prefijo);

    return 0;
}

void BuscarContactos(string contactos[], int cantidad, string prefijo)
{
    for (int i = 0; i < cantidad; i++)
    {
        string nombre = contactos[i];

        if (nombre.length() >= 3)
        {
            char letra1 = nombre[0];
            char letra2 = nombre[1];
            char letra3 = nombre[2];

            char prefijo1 = prefijo[0];
            char prefijo2 = prefijo[1];
            char prefijo3 = prefijo[2];

            if (tolower(letra1) == tolower(prefijo1) &&
                tolower(letra2) == tolower(prefijo2) &&
                tolower(letra3) == tolower(prefijo3))
            {
                cout << nombre << endl;
            }
        }
    }
}