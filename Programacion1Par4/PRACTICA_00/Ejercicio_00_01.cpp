// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 18/08/2026
#include <iostream>
using namespace std;

int main (){
    int numero1=0;
    int numero2=0;
    int resta = 0;
    int suma = 0;
    int multiplicacion = 0;
    int division = 0;
    cout << "Ingresa un numero: " << endl;
    cin>> numero1;
    cout << "Ingresa otro numero: " << endl;
    cin>> numero2;
      suma= numero1+numero2;
      resta= numero1-numero2;
      multiplicacion=numero1*numero2;
      division=numero1/numero2;
        cout<<"La suma de estos dos numeros es: "<< suma << endl;
        cout<<"La resta de estos dos numeros es: "<< resta << endl;
        cout<<"La multiplicacion de estos dos numeros es: "<< multiplicacion << endl;
        cout<<"La division de estos dos numeros es: "<< division << endl;
    return 0;
}

