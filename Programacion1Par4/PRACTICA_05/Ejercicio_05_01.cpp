// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 09/09/2026
#include <iostream>
using namespace std;

void IntercambiarValores(int &x, int &y);


int main (){
    int n1=0;
    int n2=0;
cout << "Ingrese un valor"<< endl;
 cin>> n1;
cout << "Ingrese otro valor"<< endl;
 cin>> n2;
cout << "Los numeros que ingresaste fueron: "<< n1 << " y " << n2<< endl;

IntercambiarValores(n1,n2);

     cout <<"El nuevo valor del primer numero es: "<< n1 <<endl;
     cout <<"El nuevo valor del segundo numero es: "<< n2 <<endl;

return 0;
} 

void IntercambiarValores(int &x, int &y){
    int a=x;
    x=y;
    y=a;
}