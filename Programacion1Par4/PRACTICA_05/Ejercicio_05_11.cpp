// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 09/09/2026
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int GenerarNumeroAleatorio(int min,int max);
bool SumatoriaPares(int n);
bool PromedioImpares(int n);
bool numeroPrimo(int n);

int main (){
    int numero=0;
    int resultado1=0;
    int resultado2=0;
    int resultado3=0;
    int numerosPantalla=0;
    int PrimoMayor=0;
    int sumaPar=0;
    int contador=0;
    int sumaImpar=0;
    int promedio=0;
    srand(time(0));
    cout<<" Cuantos numeros desea generar: "<< endl;
    cin>> numero;
    cout <<"Los numeros generados son: " <<endl;
    for (int i=1;i<=numero;i++){
       numerosPantalla=GenerarNumeroAleatorio(1,1000);
       cout << numerosPantalla<<endl; 
       resultado1=SumatoriaPares(numerosPantalla);
       resultado2=PromedioImpares(numerosPantalla);
       resultado3=numeroPrimo(numerosPantalla);
       if (resultado1==true){
        sumaPar+=numerosPantalla;
       }
       if (resultado2==true){
        sumaImpar+=numerosPantalla;
        contador++;
       }
      if (resultado3==true){ //la pelota es azul(es primo)? (analogia para entender el concepto)
        if (numerosPantalla>PrimoMayor){// Es mas grande que el anterior valor guardado?
            PrimoMayor=numerosPantalla;// si lo es, se reemplaza
        }
    }
    
}
   if (contador>0){
   promedio=sumaImpar/contador;
   }else{
    promedio=0;
    cout<<"No hay numeros impares"<<endl;
   }
    cout << "La suma de todos los pares del conjunto es: "<< sumaPar <<endl;
    cout << "El promedio de todos los numeros impares es: "<< promedio<<endl;
    cout << "El numero primo de mayor valor del conjunto es: "<< PrimoMayor <<endl;
return 0;
}

int GenerarNumeroAleatorio(int min, int max){
    return(rand()%(max-min+1))+min;
}

bool numeroPrimo(int n){

 for(int i=2;i<=n/2;i++){
    if ((n%i==0)){
        return false;
    }
}
  return true;
}
bool SumatoriaPares(int n){
    if (n%2==0){
        return true;
    }else {
        return false;
    }
}
bool PromedioImpares(int n){
    if (n%2!=0){
        return true;
    }else {
        return false;
    }
}