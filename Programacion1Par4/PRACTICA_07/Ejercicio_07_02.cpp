// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 30/09/2026

#include <iostream>
#include <vector>

using namespace std;

void IntroducirValores(vector<double> &v);

int main()
{
    vector<double> valores(9);

    IntroducirValores(valores);

    return 0;
}

void IntroducirValores(vector<double> &v)
{
    cout << "Ingresa los valores:" << endl;

    for(int i=0; i<9; i++)
    {
        cin >> v[i];
    }

    cout << "Valores ingresados:" << endl;

    for(int i=0; i<9; i++)
    {
        cout << v[i] << " ";

        if((i+1)%3==0)
        {
            cout << endl;
        }
    }
}