// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
double Volumen (double r, double h);

int main(){
    double radio, altura = 0;
    double VolumendelCilindro = 0;
    cout<< "Escriba el radio del cilindo"<< endl;
    cin>>radio;
    cout << "Escriba la altura del cilindro"<< endl;
    cin>>altura;
    VolumendelCilindro = Volumen(radio,altura);
    cout << "El volumen del cilindro es: "<< VolumendelCilindro << endl;
    return 0;

}
double Volumen(double r,double h){
    double pi = 3.1416;
    double volumenC=(r*r*pi*h);
    return volumenC;
}