// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 30/09/2026

#include <iostream>
#include <vector>

using namespace std;

void LeerVectores(vector<int> &v1, vector<int> &v2, int N);
void CombinarVectores(vector<int> &v1, vector<int> &v2, vector<int> &v3, int N);
void MostrarVector(vector<int> &v3, int N);

int main()
{
    int N;

    cout << "Ingresa la cantidad de elementos: ";
    cin >> N;

    vector<int> vector1(N);
    vector<int> vector2(N);
    vector<int> vector3(2*N);

    LeerVectores(vector1, vector2, N);
    CombinarVectores(vector1, vector2, vector3, N);
    MostrarVector(vector3, 2*N);

    return 0;
}

void LeerVectores(vector<int> &v1, vector<int> &v2, int N)
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

void CombinarVectores(vector<int> &v1, vector<int> &v2, vector<int> &v3, int N)
{
    for(int i=0; i<N; i++)
    {
        v3[i] = v1[i];
    }

    for(int i=0; i<N; i++)
    {
        v3[i+N] = v2[i];
    }
}

void MostrarVector(vector<int> &v3, int N)
{
    cout << "Vector combinado:" << endl;

    for(int i=0; i<N; i++)
    {
        cout << v3[i] << " ";
    }
}