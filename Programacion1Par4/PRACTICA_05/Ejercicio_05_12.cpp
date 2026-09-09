// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 09/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int GenerarNumerosAleatorios(int min, int max);
int TotalPanales(int n1,int n2, int n3);


int main(){
    int Nninos=0;
    srand(time(0));
    cout<<"Ingresa la cantidad de ninos que hay en la guarderia: "<<endl;
    cin>>Nninos;
    int ninos1 =GenerarNumerosAleatorios(0,Nninos);
    int resto1= Nninos- ninos1;
    int ninos2= GenerarNumerosAleatorios(0,resto1);
    int resto2= resto1-ninos2;
    int ninos3= GenerarNumerosAleatorios(0,resto2);
    cout<<"La cantidad de los ninos de un año es: "<< ninos1<< endl;
    cout<<"La cantidad de los ninos de dos año  es: "<< ninos2<< endl;
    cout<<"La cantidad de los ninos de tres años es: "<< ninos3<< endl;
    cout<< "La cantidad total de pañales a utilizar es: "<<TotalPanales(ninos1,ninos2,ninos3)<<endl;

    return 0;
}



int GenerarNumerosAleatorios(int min, int max){
return(rand()%(max-min+1))+min;
}

int TotalPanales(int n1,int n2, int n3){
    int resultado=0;
    n1=n1*6;
    n2=n2*3;
    n3=n3*2;  
    resultado=n1+n2+n3;
    return resultado;
}