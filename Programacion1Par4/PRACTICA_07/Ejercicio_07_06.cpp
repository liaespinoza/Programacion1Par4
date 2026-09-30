// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 30/09/2026

#include <iostream>
#include <vector>

using namespace std;

void LeerVectores(vector<int> &v1, vector<int> &v2);
void SumarVectores(vector<int> &v1, vector<int> &v2, vector<int> &v3);
void MostrarVector(vector<int> &v3);

int main()
{
    vector<int> vector1(5);
    vector<int> vector2(5);
    vector<int> vector3(5);

    LeerVectores(vector1, vector2);
    SumarVectores(vector1, vector2, vector3);
    MostrarVector(vector3);

    return 0;
}

void LeerVectores(vector<int> &v1, vector<int> &v2)
{
    cout << "Ingresa los valores del vector 1:" << endl;

    for(int i=0; i<5; i++)
    {
        cin >> v1[i];
    }

    cout << "Ingresa los valores del vector 2:" << endl;

    for(int i=0; i<5; i++)
    {
        cin >> v2[i];
    }
}

void SumarVectores(vector<int> &v1, vector<int> &v2, vector<int> &v3)
{
    for(int i=0; i<5; i++)
    {
        v3[i] = v1[i] + v2[i];
    }
}

void MostrarVector(vector<int> &v3)
{
    cout << "Vector3:" << endl;

    for(int i=0; i<5; i++)
    {
        cout << v3[i] << " ";
    }
}