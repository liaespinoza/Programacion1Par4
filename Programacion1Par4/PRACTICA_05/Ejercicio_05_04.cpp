// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 09/09/2026
#include <iostream>
using namespace std;

double CalcularPrecioTotal(double x, double PorcentajeImpuesto=13.0);// si ya puse el valor de la variable en esta parte ya no se pone en la funcion de abajo


int main (){
 double costo=0;
cout << "Ingrese el precio de su producto: "<< endl;
 cin>> costo;
cout << "El precio total del producto considerando el impuesto es:  "<< CalcularPrecioTotal(costo) <<  endl;
return 0;
} 

double CalcularPrecioTotal(double x, double PorcentajeImpuesto){
    double costoImpuesto=0;
    double impuesto=0;
    impuesto=(x*(PorcentajeImpuesto/100));
    costoImpuesto=x+impuesto;
    return costoImpuesto;
}