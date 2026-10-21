// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 21/10/2026
#include <iostream>
#include <vector>

using namespace std;

void OrdenarBurbuja(vector<int>& puntos);

void MostrarPodio(vector<int> puntos);

int main()
{
    int N;

    cout << "Cantidad de jugadores: ";
    cin >> N;

    if (N <= 0)
    {
        cout << "La cantidad debe ser positiva." << endl;
        return 0;
    }

    vector<int> puntos(N);

    for (int i = 0; i < N; i++)
    {
        do
        {
            cout << "Puntuacion del jugador " << i + 1
                 << " (1-100): ";
            cin >> puntos[i];
        }
        while (puntos[i] < 1 || puntos[i] > 100);
    }

    OrdenarBurbuja(puntos);
    MostrarPodio(puntos);

    return 0;
}

void OrdenarBurbuja(vector<int>& puntos)
{
    for (int i = 0; i < (int)puntos.size() - 1; i++)
    {
        for (int j = 0; j < (int)puntos.size() - 1 - i; j++)
        {
            if (puntos[j] < puntos[j + 1])
            {
                int aux = puntos[j];
                puntos[j] = puntos[j + 1];
                puntos[j + 1] = aux;
            }
        }
    }
}

void MostrarPodio(vector<int> puntos)
{
    int cantidad = puntos.size();

    if (cantidad > 3)
    {
        cantidad = 3;
    }

    cout << "\n--- PODIO ---" << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << i + 1 << ". Lugar: " << puntos[i] << " puntos" << endl;
    }
}