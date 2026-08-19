// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 18/08/2026
#include <iostream>
using namespace std;

int main (){
    double practicas=0;
    double teoria=0;
    double participacion=0;
    double notaPR=0;
    double notaT=0;
    double notaPA=0;
    double notaF=0;

     cout << "Escribe tu nota en practicas:" << endl;
      cin>> practicas;
     cout << "Escribe tu nota en teoria:" << endl;
      cin>> teoria;
     cout << "Escribe tu nota de participacion:" << endl;
      cin>> participacion;
         notaPR= practicas * 0.30;
         notaT= teoria * 0.60;
         notaPA= participacion * 0.10;
         notaF= notaPR+notaT+notaPA;
             cout<< "Tu nota final es:  " << notaF << endl;
    return 0;
}