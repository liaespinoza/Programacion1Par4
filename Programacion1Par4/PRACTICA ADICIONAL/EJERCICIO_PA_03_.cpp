#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Detector (vector <string> diccionario, string sufijo);



int main(){
    system("cls");
    vector <string> diccionario = {"cancion", "nacion", "corazon", "casa", "perro", "camion", "computadora", "accion", "mesa", "avion"};
    string sufijo;
    cout << "Ingrese el sufijo que desea buscar: " << endl;
    cin>> sufijo; // se usaria getline solamente si fuera una frase larga
    cout<< "Las palabras que coinciden son: "<< endl;
    Detector(diccionario, sufijo);
    return 0;
}


void Detector (vector <string> diccionario, string sufijo){
    for (int i=0; i<diccionario.size();i++){
        if (diccionario[i].substr(diccionario[i].size()-sufijo.size()) == sufijo ){ // tiene que ser diccionario[i] porque se esta refieriendo a una sola palabra si fuera solo diccionario no tendira sentido porque es un vector que contiene 10 palabras
            cout << diccionario [i]<< endl;
        }
    }
}
