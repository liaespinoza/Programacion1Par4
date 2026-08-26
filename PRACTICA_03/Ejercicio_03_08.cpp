// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 26/08/2026

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

 int n=0;
 float precio=0;
 float utilidad=0;
 float iva=0;
 float total=0;
 float descuento=0;
 float precioFinal=0;
 float sumaTotal = 0;
 float totalIVA = 0;
 float totalDescuento = 0;
 float mayor = 0;
 float menor = 0;

cout << "Ingrese la cantidad de productos vendidos: ";
cin >> n;

srand(time(0));

 for (int i = 1; i <= n; i++){
  precio = 10 + rand() % 9991;
  utilidad = precio * 0.87;
  iva = precio * 0.13;
  total = utilidad + iva;

   if (total > 2500){
      descuento = total * 0.05;
    }
   else{
      descuento = 0;
    }

 precioFinal = total - descuento;
 sumaTotal = sumaTotal + precioFinal;
 totalIVA = totalIVA + iva;
 totalDescuento = totalDescuento + descuento;

   if (i == 1){
     mayor = precioFinal;
     menor = precioFinal;
    }
   else{
     if (precioFinal > mayor){
      mayor = precioFinal;
     }

   if (precioFinal < menor){
   menor = precioFinal;
   }
}
}

cout << "\nREPORTE DEL DIA" << endl;
cout << "Suma total: " << sumaTotal << " Bs" << endl;
cout << "IVA acumulado: " << totalIVA << " Bs" << endl;
cout << "Descuento total: " << totalDescuento << " Bs" << endl;
cout << "Producto mas caro: " << mayor << " Bs" << endl;
cout << "Producto mas barato: " << menor << " Bs" << endl;

return 0;
}
