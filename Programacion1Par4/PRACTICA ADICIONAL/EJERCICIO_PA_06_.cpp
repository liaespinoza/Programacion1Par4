#include <iostream>
#include <vector>
#include<cstdlib>
#include<ctime>

using namespace std;

void LlenarMatrix(int sala[5][5]);
void MostrarMatrix(int sala[5][5]);
bool DisponibilidadAsientos(int sala[5][5],int fila);
int GenerarNumeroAleatorio(int max, int min);


int main(){
    int sala [5][5];
    int fila=0;
    srand(time(NULL));
    system ("cls");
    LlenarMatrix(sala);
    MostrarMatrix(sala);
    cout<< "Ingrese el numero de fila que desea consultar: " << endl;
    cin>> fila;
    fila--; // para que sea de manera correcta la eleccion de filas se le debe restar 1 a la eleccion del usuario 
    bool condicion = DisponibilidadAsientos(sala, fila);
    if (condicion == true){
        cout << "Asientos juntos disponibles"<< endl;
    }
    else {
        cout<< "Asientos juntos no disponibles"<< endl;
    }


    return 0;
}

void LlenarMatrix(int sala[5][5]){
    for (int i =0;i<5;i++){ // se pone 5 porque el numero de filas y columnas ya es preestablecido 
        for (int j=0;j<5;j++){
            sala[i][j]=GenerarNumeroAleatorio(1,0);
        }
    }
}
void MostrarMatrix(int sala[5][5]){
    for (int i =0;i<5;i++){
        for (int j=0;j<5;j++){
            cout << sala[i][j]<< "\t";
        }
        cout << endl;
    }
}

int GenerarNumeroAleatorio(int max, int min){
    return rand()% (max -min+1)+min;
}

bool DisponibilidadAsientos(int sala[5][5],int fila){
    for (int k=0; k<4;k++){
        if (sala[fila][k]==0 && sala[fila][k+1]==0){
            return true;
        }
    }
    return false;
}
