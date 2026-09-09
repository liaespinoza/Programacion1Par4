// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 09/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int GenerarNumeroAleatorio(int min,int max);
int CalcularFactorial(int n);

int main (){
    int numero=0;
    int resultado=0;
    srand(time(0));
    numero=GenerarNumeroAleatorio(1,10);
    resultado=CalcularFactorial(numero);
    cout << "EL numero generado aleatoreamente es: "<< numero<<endl;
    cout << "Su factorial es: "<< resultado <<endl;

return 0;
}

int GenerarNumeroAleatorio(int min, int max){
    return(rand()%(max-min+1))+min;
}

int CalcularFactorial(int n){
 int factorial=1;
 for(int i=1;i<=n;i++){
    factorial*=i;
 }
 return factorial;
}