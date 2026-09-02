// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
double ConversorDivisasO(double m);
double ConversorDivisasP(double m);
int main(){
    double monto,monto1,monto2=0;
    cout << "Ingrese su monto en bolivianos: "<< endl;
    cin>> monto;
    monto1= ConversorDivisasO(monto);
    monto2= ConversorDivisasP(monto);
    cout << "El monto en dolares al cambio oficial es: "<< monto1 << endl;
    cout << "El monto en dolares al cambio paralelo es: "<< monto2 << endl;
    return 0;
}
double ConversorDivisasO(double m){
    double cambioOficial=11.92;
    double conversorOfi= m/cambioOficial;
    return conversorOfi;
}
double ConversorDivisasP(double m){
    double cambioParalelo=12.24;
    double conversorPara= m/cambioParalelo;
    return conversorPara;
  

}