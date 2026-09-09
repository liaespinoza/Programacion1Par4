// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 09/09/2026
#include <iostream>
using namespace std;

void CalcularTiempo (int totalSegundos, int &horas, int &minutos, int
&segundos);

int main (){
    int segundosTotales = 0;
    int h=0;
    int min=0;
    int segundos=0;
    cout<<"Ingresa el tiempo total en segundos: "<< endl;
    cin>> segundosTotales;
CalcularTiempo(segundosTotales,h,min,segundos);
cout << "Las horas pasadas son: "<< h<<endl;
cout << "Los minutos pasados son: "<< min<<endl;
cout << "Los segundos pasados son: "<< segundos<<endl;


return 0;
}

void CalcularTiempo (int totalSegundos, int &horas, int &minutos, int
&segundos){
    int minutos1=0;
    horas = totalSegundos/3600;
    minutos1=totalSegundos%3600;
    minutos = minutos1/60;
    segundos= minutos1%60;
}