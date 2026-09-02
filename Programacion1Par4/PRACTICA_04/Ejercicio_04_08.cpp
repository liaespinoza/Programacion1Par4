// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;

int contadorDigitos (int n);

int main (){
    int numero=0;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    int digitos = contadorDigitos(numero);
    cout << "La cantidad de digitos del numero " << numero << " es de: " << digitos << endl;

}
int contadorDigitos (int n){
    int digito = 0;
    while(n > 0){
        digito++;
        n /= 10;
    }

    return digito;
}