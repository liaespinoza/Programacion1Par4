// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 21/10/2026
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void GenerarNombres(vector<string> nombres, vector<string> apellidos, int N);

int main()
{
    srand(time(0));

    vector<string> Nombres = {
        "Ana", "Luis", "Maria", "Carlos", "Sofia",
        "Pedro", "Lucia", "Diego", "Valeria", "Juan"
    };

    vector<string> Apellidos = {
        "Perez", "Lopez", "Gomez", "Flores", "Rojas",
        "Mamani", "Vargas", "Torrez", "Castro", "Rivera"
    };

    int N;

    cout << "Cuantos nombres desea generar: ";
    cin >> N;

    if (N > 0)
    {
        GenerarNombres(Nombres, Apellidos, N);
    }
    else
    {
        cout << "Ingrese una cantidad positiva." << endl;
    }

    return 0;
}


void GenerarNombres(vector<string> nombres, vector<string> apellidos, int N)
{
    for (int i = 0; i < N; i++)
    {
        int n = rand() % 10;
        int a = rand() % 10;

        cout << nombres[n] << " " << apellidos[a] << endl;
    }
}