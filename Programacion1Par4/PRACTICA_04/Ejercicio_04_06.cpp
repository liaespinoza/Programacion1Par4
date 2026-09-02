// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
int SumatoriaNaturales(int num);
int main(){
    int numero=0; 
    int resultado=0;
      cout<<"Ingrese un numero: "<< endl;
       cin>>numero;
    resultado=SumatoriaNaturales(numero);
       cout << "La suma de todos los numeros entre el 1 y el "<< numero<<" es " << resultado << endl;
    return 0;
}


 int SumatoriaNaturales(int num)
  {
    int suma= 0; 
    int N = 0;
     for (int i=1;i<=num;i++){
        if (num>0){
         suma+=i;
        }
        else{
            cout<<"Debe ser un valor entero positivo";
        }
      }
      return suma;
}