// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 07/10/2026


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string nombres[10] = {"Amelia", "Juan", "Diego", "Daniel", "Nicol", "Fabricio", "Ignacio", "Cristina", "Pedro", "Juliana"};
string apellidos[10] = {"Fernandez", "Zegarra", "Alvarez", "Castillo", "Cuba", "Ortiz", "Gutierrez", "Rojas", "Peralta", "Valdez"};
string edades[10] = {"17", "19", "21", "15", "22", "20", "30", "29", "41", "31"};

void MostrarNombre (string nombres[]);
void MostrarApellidos (string apellidos[]);
void MostrarEdades (string edades[]);

int main (){
    srand (time(NULL));
    int n;
    cout << "Ingrese cuantos datos desee generar: "<< endl;
    cin>>n;

    for(int i=0;i<n;i++){
        MostrarNombre(nombres);
        MostrarApellidos(apellidos);
        MostrarEdades(edades);
    }




    return 0;
}


void MostrarNombre (string nombres[]){
    int n1= rand ()% (9+1);
    cout << "Nombre:"<< nombres[n1]<<endl;
}



void MostrarApellidos (string apellidos[]){
    int n2= rand ()% (9+1);
    cout << "Apellidos:"<< apellidos[n2]<<endl;

}


void MostrarEdades (string edades[]){
       int n3 = rand ()% (9+1);
    cout << "Edades:"<< edades[n3]<<endl;

}