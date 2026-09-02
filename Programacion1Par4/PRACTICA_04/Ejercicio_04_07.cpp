// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
double MRU (double v, double t);

int main(){
    double velocidad, tiempo = 0;
    double distancia = 0;
    cout<< "Escriba el valor de velocidad: "<< endl;
    cin>> velocidad;
    cout << "Escriba el tiempo registrado: "<< endl;
    cin>>tiempo;
    distancia = MRU (velocidad,tiempo);
    cout << "La distancia recorrida por el objeto es: "<< distancia << endl;
    return 0;

}
double MRU (double v, double t){
    double calculo= v*t;
    return calculo;
}