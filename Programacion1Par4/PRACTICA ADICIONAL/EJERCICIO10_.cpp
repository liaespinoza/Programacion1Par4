#include <iostream>
#include <vector>
#include<cstdlib>
#include<ctime>

using namespace std;

void LlenarMatrix(int matrix [6][3]);
void MostrarMatrix(int matrix [6][3]);
int GenerarNumeroAleatorio(int max, int min);
void BuscarDestino(vector<string> destinos, int matrix[6][3], string codigo);
void AerolineaMasBarata(vector<string> destinos, int matrix[6][3]);



int main() {
    srand(time(NULL));
    system ("cls");
    char d ;


    int matrix [6][3]; // tienen qu eestar definidas o sale error
    vector <string> destinos ={"Miami", "Madrid", "Bogotá", "Chile", "Francia", "España"};
    LlenarMatrix(matrix);

    cout << "Precios de los pasajes: "<< endl;
    MostrarMatrix(matrix);
    cout<< endl;

    string codigo;
    cout<< "Ingrese las primeras tres letras de su destino: "<< endl;
    cin>> codigo;

    BuscarDestino(destinos, matrix, codigo);

    cout << endl;

    AerolineaMasBarata(destinos, matrix);

    return 0;
}

void LlenarMatrix(int matrix [6][3]){
    for (int i =0;i<6;i++){ 
        for (int j=0;j<3;j++){
            matrix[i][j]=GenerarNumeroAleatorio(1200,300);
        }
    }

}

void MostrarMatrix(int matrix [6][3]){
    for (int i =0;i<6;i++){ // se pone 6 porque el numero de filas y columnas ya es preestablecido 
        for (int j=0;j<3;j++){
            cout<< matrix[i][j]<< "\t";
        }
        cout << endl;
    }

}

int GenerarNumeroAleatorio(int max, int min){
    return rand()% (max -min+1)+min;
}


void BuscarDestino(vector<string> destinos, int matrix[6][3], string codigo){

    bool encontrado = false;
    for(int i = 0; i < 6; i++){

        if(destinos[i].substr(0, 3) == codigo){

            cout << "Destino: " << destinos[i] << endl;

            cout << "BOA: $" << matrix[i][0] << endl;
            cout << "Avianca: $" << matrix[i][1] << endl;
            cout << "Copa: $" << matrix[i][2] << endl;

            encontrado = true;
        }
    }

    if(encontrado == false){
        cout << "Destino no encontrado" << endl;
    }
}



void AerolineaMasBarata(vector<string> destinos, int matrix[6][3]){
     for(int i = 0; i < 6; i++){

        int menor = matrix[i][0];
        int posicion = 0;

        for(int j = 1; j < 3; j++){

            if(matrix[i][j] < menor){

                menor = matrix[i][j];
                posicion = j;

            }
        }

        cout << destinos[i] << ": ";

        if(posicion == 0){
            cout << "BOA";
        }
        else if(posicion == 1){
            cout << "Avianca";
        }
        else{
            cout << "Copa";
        }

        cout << " - $" << menor << endl;

    }
}
