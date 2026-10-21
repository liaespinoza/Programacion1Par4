
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

void ImprimirLista(vector<string> lista);
void OrdenarAlfabeticamente(vector<string>& lista);
vector<string> GenerarNombres(vector<string> nombres, vector<string> apellidos, int N);



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

    cout << "Cantidad de estudiantes: ";
    cin >> N;

    if (N <= 0)
    {
        cout << "La cantidad debe ser positiva." << endl;
        return 0;
    }

    vector<string> lista =
        GenerarNombres(Nombres, Apellidos, N);

    cout << "\nLista original:" << endl;
    ImprimirLista(lista);

    OrdenarAlfabeticamente(lista);

    cout << "\nLista alfabetica:" << endl;
    ImprimirLista(lista);

    return 0;
}

vector<string> GenerarNombres(vector<string> nombres, vector<string> apellidos, int N)
{
    vector<string> lista(N);

    for (int i = 0; i < N; i++)
    {
        int n = rand() % 10;
        int a = rand() % 10;

        lista[i] = nombres[n] + " " + apellidos[a];
    }

    return lista;
}

void OrdenarAlfabeticamente(vector<string>& lista)
{
    for (int i = 0; i < (int)lista.size() - 1; i++)
    {
        for (int j = 0; j < (int)lista.size() - 1 - i; j++)
        {
            if (lista[j] > lista[j + 1])
            {
                string aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
}

void ImprimirLista(vector<string> lista)
{
    for (int i = 0; i < (int)lista.size(); i++)
    {
        cout << i + 1 << ". " << lista[i] << endl;
    }
}
