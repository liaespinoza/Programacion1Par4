// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 26/08/2026
#include <iostream>
using namespace std;

int main (){
    int numero=0;
    int suma=0;

     do{
         cout<<"Escriba un numero: "<< endl;
         cin >> numero;
         
         if (numero>0){
            suma+=numero;
         }
     }while((numero>30)||(numero<20)&& (numero!=0));

        cout<< "\nLa suma es: "<< suma<< endl;
     return 0;
    }