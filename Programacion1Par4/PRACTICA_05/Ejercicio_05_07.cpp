// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 09/09/2026
#include <iostream>
using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota);

int main (){
    double nota = 0;
    double totalnotas=0;
    int contadorNotas=0;
    int n=0;
    cout<<"Ingresa la cantidad de notas que deseas ingresar: "<< endl;
    cin>> n;
    for(int i=0;i<n;i++){
    cout<<"Ingresa tu nota: "<< endl;
    cin>> nota;
    agregarNota(totalnotas, contadorNotas, nota);
    }
    cout << "La suma de notas finales es: "<< totalnotas<<endl;
    cout << "La cantidad de notas ingresadas fue de: "<< contadorNotas<<endl;
return 0;
}

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota){
sumaTotal=sumaTotal + nuevaNota;
cantidadNotas=cantidadNotas+1;
}