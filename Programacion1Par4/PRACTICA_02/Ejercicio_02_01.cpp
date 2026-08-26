// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 26/08/2026
#include <iostream>
using namespace std;
int main (){

int numero;

 do {
  cout<<"Escriba un numero: "<<endl;
  cin>> numero;
 }while((numero<1)||(numero>10));
 
 for(int i=1; i<=20;i++){
    cout<< numero << "*"<<i<<"="<< numero*i<< endl;
 }
 return 0;
}
