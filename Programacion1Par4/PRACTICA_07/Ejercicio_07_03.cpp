// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 30/09/2026

#include <iostream>
#include <vector>

using namespace std;

void IntroducirCalificaciones(vector<int> &c, int N);
int CalcularSuma(vector<int> &c, int N);
double CalcularPromedio(int suma, int N);
void CalcularDesviacion(vector<int> &c, vector<double> &d, int N, double promedio);
double CalcularVarianza(vector<double> &d, int N);

int main()
{
    int N;

    cout << "Ingresa la cantidad de calificaciones: ";
    cin >> N;

    vector<int> calificaciones(N);
    vector<double> desviacion(N);

    IntroducirCalificaciones(calificaciones, N);

    int suma = CalcularSuma(calificaciones, N);

    double promedio = CalcularPromedio(suma, N);

    CalcularDesviacion(calificaciones, desviacion, N, promedio);

    double varianza = CalcularVarianza(desviacion, N);

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    cout << "Calificacion - Desviacion:" << endl;

    for(int i=0; i<N; i++)
    {
        cout << calificaciones[i] << " - " << desviacion[i] << endl;
    }

    cout << "Varianza: " << varianza << endl;

    return 0;
}

void IntroducirCalificaciones(vector<int> &c, int N)
{
    cout << "Ingresa las calificaciones:" << endl;

    for(int i=0; i<N; i++)
    {
        cin >> c[i];
    }
}

int CalcularSuma(vector<int> &c, int N)
{
    int suma = 0;

    for(int i=0; i<N; i++)
    {
        suma = suma + c[i];
    }

    return suma;
}

double CalcularPromedio(int suma, int N)
{
    return (double)suma / N;
}

void CalcularDesviacion(vector<int> &c, vector<double> &d, int N, double promedio)
{
    for(int i=0; i<N; i++)
    {
        d[i] = c[i] - promedio;
    }
}

double CalcularVarianza(vector<double> &d, int N)
{
    double suma = 0;

    for(int i=0; i<N; i++)
    {
        suma = suma + d[i] * d[i];
    }

    return suma / N;
}