// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 26/08/2026
#include <iostream>
using namespace std;

 int main() {
 int a=0;
 int b=0;

 cout << "Ingrese el primer numero: ";
   cin >> a;

 cout << "Ingrese el segundo numero: ";
   cin >> b;

   if (a > b){
     for (int i = a; i >= b; i--){
       cout << i << " ";
        }
    }
   else{
     for (int i = a; i <= b; i++){
       cout << i << " ";
        }
}
  return 0;
}