#include <iostream>
using namespace std;

int main (){
    float a,b,c,d,e,f, resultado = 0;
    cout << "Escribe el valor de a: " << endl;
    cin >> a;
    cout << "Escribe el valor de b: " << endl;
    cin >> b;
    cout << "Escribe el valor de c: " << endl;
    cin >> c;
    cout << "Escribe el valor de d: " << endl;
    cin >> d;
    cout << "Escribe el valor de e: " << endl;
    cin >> e;
    cout << "Escribe el valor de f: " << endl;
    cin >> f;
    resultado= ((a+(b/c))/(d+(e/f)));
    cout.precision(2);
    cout << "\n El resultado de la operacion es:  "<< resultado << endl;
    return 0;
}
