// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 30/09/2026

#include <iostream>
#include <vector>

using namespace std;

void LeerVectores(vector<double> &v1, vector<double> &v2, int N);
void MultiplicarVectores(vector<double> &v1, vector<double> &v2, vector<double> &v3, int N);
void MostrarVector(vector<double> &v3, int N);

int main()
{
    int N;

    cout << "Ingresa la cantidad de elementos: ";
    cin >> N;

    vector<double> vector1(N);
    vector<double> vector2(N);
    vector<double> vector3(N);

    LeerVectores(vector1, vector2, N);
    MultiplicarVectores(vector1, vector2, vector3, N);
    MostrarVector(vector3, N);

    return 0;
}

void LeerVectores(vector<double> &v1, vector<double> &v2, int N)
{
    cout << "Ingresa los valores del vector 1:" << endl;

    for(int i=0; i<N; i++)
    {
        cin >> v1[i];
    }

    cout << "Ingresa los valores del vector 2:" << endl;

    for(int i=0; i<N; i++)
    {
        cin >> v2[i];
    }
}

void MultiplicarVectores(vector<double> &v1, vector<double> &v2, vector<double> &v3, int N)
{
    for(int i=0; i<N; i++)
    {
        v3[i] = v1[i] * v2[i];
    }
}

void MostrarVector(vector<double> &v3, int N)
{
    cout << "Resultado:" << endl;

    for(int i=0; i<N; i++)
    {
        cout << v3[i] << " ";
    }
}