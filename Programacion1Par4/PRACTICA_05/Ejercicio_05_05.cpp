// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 09/09/2026
#include <iostream>
using namespace std;

double CalcularArea (double x);
double CalcularArea (double a, double h);
double CalcularArea (float r, float pi=3.1416);


int main (){
    int opcion = 0;
    double lado = 0;
    double altura = 0;
    double ancho = 0;
    float radio=0;

    do{
        cout << "Elige cual de los casos deseas calcular: "<< endl;
        cout << "\b0. Salir del menu"<<endl;
        cout << "\b1. Area de un cuadrado"<<endl;
        cout << "\b2. Area de un rectangulo"<<endl;
        cout << "\b3. Area de un circulo"<<endl;
        cin>>opcion;

         switch(opcion){
             case 0:
            cout<< "Saliste del menu "<<endl;
            break;
            case 1:
            cout<< "Ingresa el lado del cuadrado: "<<endl;
            cin>> lado;
            cout<< "El area del cuadrado es: "<< CalcularArea(lado)<< endl;
            break;
            case 2:
            cout<< "Ingresa la altura del rectangulo: "<<endl;
            cin>> altura;
            cout<< "Ingresa el ancho del rectangulo: "<<endl;
            cin>> ancho;
            cout<< "El area del rectangulo es: "<< CalcularArea(ancho,altura)<< endl;
            break;
            case 3:
            cout<< "Ingresa el radio del circulo: "<<endl;
            cin>> radio;
            cout<< "El area del circulo es: "<< CalcularArea(radio)<< endl;
            break;
            default:
            cout<< "Opcion no valida, escribe otra"<<endl;
            break;
        }
    } while(opcion!=0);
    return 0;
}

double CalcularArea (double x){
    double Area=0;
    Area=(x*x);
    return Area;
}
double CalcularArea (double a, double h){
    double AreaRec=0;
    AreaRec=a*h;
    return AreaRec;
}
double CalcularArea (float r, float pi){
    float AreaCir=0;
    AreaCir=((r*r)*pi);
    return AreaCir;
}