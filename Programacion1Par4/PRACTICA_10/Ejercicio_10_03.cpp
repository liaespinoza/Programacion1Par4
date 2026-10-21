// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 21/10/2026
#include <iostream>
#include <vector>

using namespace std;

void ImprimirTiempos(vector<float> tiempos);

void OrdenarInsercion(vector<float>& tiempos);

int main()
{
    int N;

    cout << "Cantidad de corredores: ";
    cin >> N;

    if (N <= 0)
    {
        cout << "Cantidad incorrecta" << endl;
    }
    else
    {
        vector<float> tiempos(N);

        for (int i = 0; i < N; i++)
        {
            cout << "Ingrese el tiempo del corredor "
                 << i + 1 << ": ";
            cin >> tiempos[i];
        }

        cout << "Tiempos originales:" << endl;
        ImprimirTiempos(tiempos);

        OrdenarInsercion(tiempos);

        cout << "Tiempos ordenados:" << endl;
        ImprimirTiempos(tiempos);
    }

    return 0;
}

void ImprimirTiempos(vector<float> tiempos)
{
    for (int i = 0; i < tiempos.size(); i++)
    {
        cout << tiempos[i] << " segundos" << endl;
    }
}

void OrdenarInsercion(vector<float>& tiempos)
{
    for (int i = 1; i < tiempos.size(); i++)
    {
        float aux = tiempos[i];
        int j = i - 1;

        while (j >= 0 && tiempos[j] > aux)
        {
            tiempos[j + 1] = tiempos[j];
            j--;
        }

        tiempos[j + 1] = aux;
    }
}
