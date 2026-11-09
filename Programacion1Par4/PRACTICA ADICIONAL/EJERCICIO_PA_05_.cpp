#include <iostream>
#include <vector>
#include <string>

using namespace std;

void InvertirPalabra (vector <string>& mensaje);

int main(){
    system("cls");
    vector <string> mensaje = {"El", "color", "favorito", "de", "Julian", "es", "el", "rojo"};
    cout<< "El mensaje codificado es:"<< endl;
    InvertirPalabra(mensaje);
    return 0;
}

void InvertirPalabra (vector <string>& mensaje){
    for (int i =0; i< mensaje.size(); i++){
        for (int j=mensaje[i].size()-1; j>=0; j--){ // es menos uno al mensaje.size porque el size da el tamano total por ejemplo 4 pero al usarlo en un for este ciclo comienza en 0 por lo que hay que si o si restar 1 
            cout << mensaje[i][j];
        }
        cout <<" "; // si se  pone en el primer for separa a cada letra, aqui solo separa cada palabra
    }
}