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
    int contador=0;

    srand(time(NULL));//NUMERO ALEATORIO
    dato=1 + rand()%(100);// limite superior mas 1 menos el limite inferior


    do{
        cout<<"Escriba un numero: "<< endl;
        cin >> numero;
        
        if (numero>dato){
          cout<<"Escriba un numero menor "<< endl;  
        }
        if (numero<dato){
          cout<<"Escriba un numero mayor "<< endl;  
        }
        contador++;

    }while(numero!=dato);


       cout<<"FELICITACIONES!! ADIVINASTE EL NUMERO "<< endl;
       cout<<"Numero de intentos: "<< contador<< endl;
        system("pause"); 
        return 0;
    }