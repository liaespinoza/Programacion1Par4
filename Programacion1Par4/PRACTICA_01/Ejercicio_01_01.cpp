// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 18/08/2026
#include <iostream>
using namespace std;

int main (){
    cout << "Descubre si un año es bisiesto o no" << endl;
    cout << "Ingresa el año: " << endl;

    int year = 0;
    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        cout << year << " es un año bisiesto" << endl;
    }
    else{
        cout << year << " no es un año bisiesto" << endl;
    }

    return 0;
}