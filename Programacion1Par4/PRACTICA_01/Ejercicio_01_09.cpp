// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 18/08/2026
#include <iostream>
using namespace std;

int main (){
    int numero, digito=0;
    cout<< "Ingresa un numero entero positivo"<< endl;
    cin>>numero;
    while(numero!=0){
        digito=numero%10;
        cout<< "Cuadricula de"<< digito<< "x"<< digito << ":"<< endl;
        for (int i = 0; i < digito; i++){
            for (int j = 0; j < digito; j++){
                cout << "* ";
            }
            cout << endl;
        }
        numero = numero / 10;
    }

    return 0;
}
