// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 09/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int GenerarNumeroAleatorio(int min,int max);
bool numeroPrimo(int n);

int main (){
    int numero=0;
    int resultado=0;
    int numerosPantalla=0;
    int contador2=0;
    srand(time(0));
    cout<<" Cuantos numeros desea generar: "<< endl;
    cin>> numero;
    for (int i=1;i<=numero;i++){
       numerosPantalla=GenerarNumeroAleatorio(1,10000);
       cout <<"Los numeros generados son: " <<endl;
       cout << numerosPantalla<<endl; 
       resultado=numeroPrimo(numerosPantalla);
      if (resultado==true){
        contador2++; 
    }
}
    cout << "La cantidad de números primos de ese conjunto son: "<< contador2 <<endl;
return 0;
}

int GenerarNumeroAleatorio(int min, int max){
    return(rand()%(max-min+1))+min;
}

bool numeroPrimo(int n){
 int contador1=0;
 for(int i=2;i<=n/2;i++){
    if ((n%i==0)){
        contador1++;
        if (contador1>1){
        return false;
        }
    }
}
  return true;
}
