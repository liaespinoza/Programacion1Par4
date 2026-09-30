// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 30/09/2026

#include <iostream>
#include <vector>

using namespace std;

void LlenarVector(vector<int> &v);
void MostrarVector(vector<int> &v, int cantidad);

int main()
{
    vector<int> vector1(100);

    LlenarVector(vector1);

    return 0;
}

void LlenarVector(vector<int> &v)
{
    int numero;
    int cantidad = 0;

    cout << "Ingresa los numeros:" << endl;

    while(cantidad < 100)
    {
        cin >> numero;

        if(numero < 0)
        {
            break;
        }

        v[cantidad] = numero;
        cantidad++;
    }

    MostrarVector(v, cantidad);
}

void MostrarVector(vector<int> &v, int cantidad)
{
    cout << "Vector:" << endl;

    for(int i=0; i<cantidad; i++)
    {
        cout << v[i] << " ";
    }
}