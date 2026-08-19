// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 18/08/2026
#include <iostream>
using namespace std;

int main (){
    int numero;

    cout << "Ingresa cualquier numero: " << endl;
    cin >> numero;
    if (numero%2==0){

        cout<< "El "<< numero << " es par"<< endl;
    }
    else {

         cout<<"El "<<  numero << " es impar"<< endl;
    }
    return 0;
}