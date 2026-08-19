// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 18/08/2026
#include <iostream>
using namespace std;

int main (){
    float practicas, teoria, participacion, notaF=0;

     cout << "Escribe tu nota en practicas:" << endl;
      cin>> practicas;

     cout << "Escribe tu nota en teoria:" << endl;
      cin>> teoria;

     cout << "Escribe tu nota de participacion:" << endl;
      cin>> participacion;

        practicas *= 0.30;
        teoria *= 0.60;
        participacion *= 0.10;
         notaF= practicas+teoria+participacion;

             cout<< "Tu nota final es:  " << notaF << endl;
             
    return 0;
}