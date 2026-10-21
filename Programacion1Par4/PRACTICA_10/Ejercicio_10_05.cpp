// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 21/10/2026

#include <iostream>
#include <string>

using namespace std;

void OrdenarCaracteres(string& palabra);

int main()
{
    string palabra;

    cout << "Ingrese una palabra sin espacios: ";
    cin >> palabra;

    OrdenarCaracteres(palabra);

    cout << "Caracteres ordenados: " << palabra << endl;

    return 0;
}

void OrdenarCaracteres(string& palabra)
{
    for (int i = 1; i < (int)palabra.length(); i++)
    {
        char aux = palabra[i];
        int j = i - 1;

        while (j >= 0 && palabra[j] > aux)
        {
            palabra[j + 1] = palabra[j];
            j--;
        }

        palabra[j + 1] = aux;
    }
}
