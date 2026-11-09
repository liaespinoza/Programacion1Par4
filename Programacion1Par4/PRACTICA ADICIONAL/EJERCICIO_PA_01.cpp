#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> CorreoCorrecto (vector <string> correos);

int main(){
    system("cls");
    vector <string> correos ={ "ana@gmail.com", "juan@ucb.edu.bo", "maria@ucb.edu.bo", "pedro@ucb.edu.bo",
    "luis@hotmail.com", "sofia@ucb.edu.bo", "abc@ucb.edu.bo", "x@y.com", "carlos@ucb.edu.bo", "test@ucb.edu.bo"};
    cout << "Los correos validos son: " << endl;
    vector <string> resultado = CorreoCorrecto(correos);
    for(int i = 0; i < resultado.size(); i++)
    {
        cout << resultado[i] << endl;
    }

    return 0;
}

vector <string> CorreoCorrecto (vector <string> correos){
    vector <string> CorreosValidos; // el ejercicio pide que cree un nuevo vector para guardar los correos validos por eso se pone este nuevo vecto al inicio de la funcion
    for (int i=0; i<correos.size();i++){ // recorre cada email
        string correo= correos [i]; // no es completamente necesario pero es mas claro
        int contador=0; 
        bool validez=true;

        for (int j=0; j<correo.size();j++){ // recorre cada caracter de un email
            
            if (correo[j]=='@'){
                contador++;
            }
        } 
            if (contador!=1){
                validez=false;
            }
            if (contador==1){
                int posicionArroba=correo.find("@"); // En la posicion donde esta exactamente el unico arroba, te da un numero
                int posicionPunto=correo.find(".", posicionArroba +1 );// le pide al codigo que busque un punto exactamente en la posicion despues del arroba, por eso el +1
                if (posicionPunto==string::npos){
                    validez=false;
                }
                if (posicionPunto==posicionArroba+1){
                    validez=false;
                }
                if (correo.size()<11){
                    validez=false;
                }else{
               if (correo.substr(correo.size()-11) != "@ucb.edu.bo"){ // fijarse bien en los parentesis y se usar correo porque estas analizando los caracteres de ese email no de todos los emails de la lista
                        validez= false;
                    }
                }
            }
                if (validez){ // osea que si validez se mantiene en true
               CorreosValidos.push_back(correo);
            }
            } 
             return CorreosValidos;
    }

