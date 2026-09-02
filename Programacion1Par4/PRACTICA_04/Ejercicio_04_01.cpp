// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
double AreaGeometrica (double x, double y);

int main(){
    double base, altura = 0;
    double Areadeltriangulo = 0;
    cout<< "Escriba la base del triangulo"<< endl;
    cin>>base;
    cout << "Escriba el alto de triangulo"<< endl;
    cin>>altura;
    Areadeltriangulo = AreaGeometrica(base,altura);
    cout << "La base del triangulo es: "<< Areadeltriangulo << endl;
    return 0;

}
double AreaGeometrica(double x,double y){
    double area=(x*y)/2;
    return area;
}