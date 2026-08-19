// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 18/08/2026
#include <iostream>
using namespace std;

int main (){
    int numero = 0;

    cout << "Ingresa un numero entre 1 y 7:" << endl;
    cin >> numero;
    switch (numero){
        case 1: 
        cout << "Es el dia lunes" << endl;
        break;

        case 2: 
        cout << "Es el dia martes" << endl;
        break;

        case 3: 
        cout << "Es el dia miercoles" << endl;
        break;

        case 4: 
        cout << "Es el dia jueves" << endl;
        break;

        case 5: 
        cout << "Es el dia viernes" << endl;
        break;

        case 6: 
        cout << "Es el dia sabado" << endl;
        break;

        case 7: 
        cout << "Es el dia domingo" << endl;
        break;
        
        default:
        cout << "ERROR" << endl;
        break;
    }
    return 0;
}