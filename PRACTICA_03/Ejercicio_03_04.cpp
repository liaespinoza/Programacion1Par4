// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 26/08/2026

#include <iostream>
using namespace std;

int main (){
    int numero=0;
    int factorial=1;
    int suma=0;

    cout<<"Escriba el numero de elementos: "<< endl;
     cin >> numero;

     for (int i=1;i<=numero;i++){
        factorial*=i;
        suma+=factorial;
     }

         cout<<"La suma de los numeros es: "<< suma << endl;
         return 0;
    }