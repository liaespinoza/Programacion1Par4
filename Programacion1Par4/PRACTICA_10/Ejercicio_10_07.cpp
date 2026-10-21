
// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 21/10/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void ImprimirBoletin(vector<string> nombres, int notas[5][3],vector<float> promedios);
void CalcularPromedios(int notas[5][3], vector<float>& promedios);
void OrdenarAlumnos(vector<string>& nombres, int notas[5][3], vector<float>& promedios);

int main()
{
    vector<string> nombres(5);
    int notas[5][3];
    vector<float> promedios(5);

    for (int i = 0; i < 5; i++)
    {
        cout << "Nombre del alumno " << i + 1 << ": ";
        cin >> nombres[i];

        for (int j = 0; j < 3; j++)
        {
            cout << "Nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }

    CalcularPromedios(notas, promedios);

    OrdenarAlumnos(nombres, notas, promedios);

    ImprimirBoletin(nombres, notas, promedios);

    return 0;
}


void CalcularPromedios(int notas[5][3], vector<float>& promedios)
{
    for (int i = 0; i < 5; i++)
    {
        promedios[i] =
            (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;
    }
}

void OrdenarAlumnos(vector<string>& nombres, int notas[5][3], vector<float>& promedios)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (nombres[j] > nombres[j + 1])
            {
                string auxNombre = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = auxNombre;

                for (int k = 0; k < 3; k++)
                {
                    int auxNota = notas[j][k];
                    notas[j][k] = notas[j + 1][k];
                    notas[j + 1][k] = auxNota;
                }

                float auxPromedio = promedios[j];
                promedios[j] = promedios[j + 1];
                promedios[j + 1] = auxPromedio;
            }
        }
    }
}

void ImprimirBoletin(vector<string> nombres, int notas[5][3],vector<float> promedios)
{
    cout << "Nombre | Nota 1 | Nota 2 | Nota 3 | Promedio"
         << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << nombres[i] << " | "
             << notas[i][0] << " | "
             << notas[i][1] << " | "
             << notas[i][2] << " | "
             << promedios[i] << endl;
    }
}