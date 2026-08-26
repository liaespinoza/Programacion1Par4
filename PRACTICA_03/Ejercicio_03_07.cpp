// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 26/08/2026
#include <iostream>
using namespace std;

 int main() {
  int numero=0;
  int suma = 0;

  cout << "Ingrese un numero: ";
   cin >> numero;

  for (int i = 1; i < numero; i++) {
    if (numero % i == 0){
      suma = suma + i;
     }
  }

    if (suma == numero){
       cout << "El numero es perfecto";
    }
    else{
       cout << "El numero no es perfecto";
    }

    return 0;
}
