// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
int EncontrarMax(int numero1, int numero2, int numero3);
int main(){
    int n1,n2,n3, mayor=0;
    cout << "Escriba un numero: " << endl;
    cin >> n1;
    cout << "Escriba otro numero: " << endl;
    cin >> n2;
    cout << "Escriba otro numero mas: " << endl;
    cin >> n3;
    mayor = EncontrarMax(n1,n2,n3);
    cout << "De los tres numeros, el mayor es el: "<< mayor << endl;
    return 0;

}
int EncontrarMax(int numero1, int numero2, int numero3){
    int numeroMax=0;
    if (numero1> numero2 && numero1>numero3 ){
        numeroMax=numero1;
    }
    if (numero2> numero1 && numero2>numero3 ){
        numeroMax=numero2;
    }
    if (numero3> numero1 && numero3>numero2 ){
        numeroMax=numero3;
    }
    return numeroMax;
}