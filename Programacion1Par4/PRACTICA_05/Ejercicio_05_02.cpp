// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 09/09/2026
#include <iostream>
using namespace std;

void ModificarValores(int x, int &y);


int main (){
 int n1=0;
 int n2=0;
cout << "Ingrese un valor"<< endl;
 cin>> n1;
cout << "Ingrese otro valor"<< endl;
 cin>> n2;
cout << "Los numeros que ingresaste fueron: "<< n1 << " y " << n2<< endl;

ModificarValores(n1,n2);

     cout <<"El nuevo valor del segundo numero es (+10) : "<< n2 <<endl;
     
return 0;
} 

void ModificarValores(int x, int &y){
    x=x*2;
    y=y+10;
    cout <<"El nuevo valor del primer numero es (Multiplicado por 2): "<< x <<endl;
}