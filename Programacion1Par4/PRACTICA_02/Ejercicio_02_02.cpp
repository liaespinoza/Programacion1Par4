// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 26/08/2026
#include <iostream>
using namespace std;

int main (){
int suma=0;
int cuadrado=0;
 
 for(int i =1;i<=10;i++){
    cuadrado=i*i;
    suma+=cuadrado;// suma=suma=cuadrado
 }
  cout <<"El resultado de la suma es: "<< suma << endl;

   return 0;
}