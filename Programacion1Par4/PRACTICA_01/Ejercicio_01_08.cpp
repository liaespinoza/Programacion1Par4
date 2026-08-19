// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 19/08/2026
#include <iostream>
using namespace std;

int main (){
    int numero = 0;
    cout<< "Introduce una nota: "<<endl;
         cin>> numero;
     while ((numero<0) || (numero>100)){
        cout<< "Introduce una nota: "<<endl;
         cin>> numero;
     }
     cout<< "Nota registrada correctamente"<<endl;
     return 0;
    }