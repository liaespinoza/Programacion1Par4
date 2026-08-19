// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 18/08/2026
#include <iostream>
using namespace std;

int main (){
    int numero = 0;
    int suma = 0;
    int contador = 0;

    cout << "Ingresa cualquier numero entero positivo: " << endl;
    cin >> numero;
    while(numero!=0){
        int digito = numero%10;
        cout << digito << endl;
        numero=numero/10;
        suma+=digito;
        contador++;
    }
    cout << "La suma de los digitos es: "<<suma << endl;
    cout<< "La cantidad de digitos es: "<<contador<< endl;
    return 0;
}