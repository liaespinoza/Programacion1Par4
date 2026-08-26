// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 26/08/2026

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
    int numero=0;
    int dato=0;
    int sumaTotal=0;
    int sumaPares=0;
    int sumaImpares=0;
    int sumaPrimos=0;
    int siPrimo=0;


    srand(time(NULL));//NUMERO ALEATORIO
    cout<<"Escriba un numero: "<< endl;
        cin >> numero;
        for(int i=0; i<numero;i++){
            dato=1 + rand()%(100);// limite superior mas uno (+1) menos (-) el limite inferior
            sumaTotal+=dato;
            if (dato%2==0){
              sumaPares+=dato;
            }
            if (dato%2!=0){
                sumaImpares+=dato;
            }
            siPrimo = 1;

for(int j = 2; j < dato; j++){

    if(dato % j == 0){

        siPrimo = 0;
    }
}

if(siPrimo == 1){

    sumaPrimos += dato;
}
        }
        cout << "la suma total es: "<< sumaTotal << endl;
        cout << "la suma de numero pares es: "<< sumaPares << endl;
        cout << "la suma de numeros impares es: "<< sumaImpares << endl;
        cout << "la suma de numeros primos es: "<< sumaPrimos << endl;
return 0;
}