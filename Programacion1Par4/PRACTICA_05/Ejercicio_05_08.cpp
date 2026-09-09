// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 09/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LazamientoMoneda(int intentos, int &contadorCara, int &contadorCruz);

int main (){
    srand(time(0));
    int lanzamientos=0;
    int cara=0;
    int cruz=0;
    int PorcentajeCara=0;
    int PorcentajeCruz=0;
    cout<<"Ingresa la cantidad de veces que deseas tirar la moneda: "<< endl;
    cin>> lanzamientos;
    LazamientoMoneda(lanzamientos, cara, cruz);
    PorcentajeCara=((cara*100)/lanzamientos);
    PorcentajeCruz=((cruz*100)/lanzamientos);

    cout << "El porcentaje de caras es: "<< PorcentajeCara<<"%"<<endl;
    cout << "El porcentaje de cruz es: "<< PorcentajeCruz<<"%"<<endl;

return 0;
}

void LazamientoMoneda(int intentos, int &contadorCara, int &contadorCruz){
for(int i=0;i<intentos;i++){
    int resultado=rand()%2;
    if (resultado==1){
        contadorCara++;
    }
    else{
        contadorCruz++;
    }
}
}