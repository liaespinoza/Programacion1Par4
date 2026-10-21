// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 21/10/2026
#include <iostream>
#include <vector>

using namespace std;


void OrdenarSeleccion(vector<double>& precios);
void MostrarPrecios(vector<double> precios);
void MostrarBarato(vector<double> precios);
void MostrarCaro(vector<double> precios);
void MostrarMediana(vector<double> precios);


int main()
{
    int N;

    cout << "Cantidad de productos: ";
    cin >> N;

    if (N <= 0)
    {
        cout << "Cantidad incorrecta" << endl;
    }
    else
    {
        vector<double> precios(N);

        for (int i = 0; i < N; i++)
        {
            cout << "Ingrese el precio " << i + 1 << ": ";
            cin >> precios[i];
        }

        OrdenarSeleccion(precios);

        cout << "Precios ordenados:" << endl;
        MostrarPrecios(precios);

        MostrarBarato(precios);
        MostrarCaro(precios);
        MostrarMediana(precios);
    }

    return 0;
}


void OrdenarSeleccion(vector<double>& precios)
{
    for (int i = 0; i < precios.size() - 1; i++)
    {
        int menor = i;

        for (int j = i + 1; j < precios.size(); j++)
        {
            if (precios[j] < precios[menor])
            {
                menor = j;
            }
        }

        double aux = precios[i];
        precios[i] = precios[menor];
        precios[menor] = aux;
    }
}

void MostrarPrecios(vector<double> precios)
{
    for (int i = 0; i < precios.size(); i++)
    {
        cout << precios[i] << endl;
    }
}

void MostrarBarato(vector<double> precios)
{
    cout << "Precio mas barato: " << precios[0] << endl;
}

void MostrarCaro(vector<double> precios)
{
    cout << "Precio mas caro: "
         << precios[precios.size() - 1] << endl;
}

void MostrarMediana(vector<double> precios)
{
    int N = precios.size();

    if (N % 2 == 1)
    {
        cout << "Mediana: " << precios[N / 2] << endl;
    }
    else
    {
        double mediana =
            (precios[N / 2 - 1] + precios[N / 2]) / 2;

        cout << "Mediana: " << mediana << endl;
    }
}
