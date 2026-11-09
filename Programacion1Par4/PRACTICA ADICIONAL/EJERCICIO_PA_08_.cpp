#include <iostream>
#include <vector>
#include<cstdlib>
#include<ctime>

using namespace std;

void LlenarMatrix(int matrix [100][100], int filas, int columnas);
void MostrarMatrix(int matrix [100][100], int filas, int columnas);
int GenerarNumeroAleatorio(int max, int min);
int PeorPromedio(int matrix [100][100], int filas, int columnas);
int MejorPromedio(int matrix [100][100], int filas, int columnas);
void IntercambiarColumnas(int matrix [100][100], int filas, int columnas, int bajo, int mayor);


int main() {
    srand(time(NULL));
    system ("cls");
    int matrix [100][100]; // tienen qu eestar definidas o sale error
    int fila=0;
    int columnas=0;
    cout<< "Ingrese el numero de filas: "<< endl;
    cin>> fila;
    cout<< "Ingrese el numero de columnas: "<< endl;
    cin>> columnas;
    cout<< endl;
    LlenarMatrix(matrix, fila, columnas);
    MostrarMatrix(matrix, fila, columnas);
    cout<< endl;
    int bajo=PeorPromedio(matrix, fila, columnas);
    cout << "El promedio mas bajo fue de la columna: "<< bajo+1 << endl;
    int mayor= MejorPromedio(matrix, fila, columnas);
     cout << "El promedio mas bajo fue de la columna: "<< mayor+1 << endl;
    IntercambiarColumnas(matrix, fila, columnas, bajo,mayor);
    cout<< "Matriz despues del intercambio: "<< endl;
    MostrarMatrix(matrix,fila,columnas);

    return 0;
}

void LlenarMatrix(int matrix [100][100], int filas, int columnas){
    for (int i =0;i<filas;i++){ 
        for (int j=0;j<columnas;j++){
            matrix[i][j]=GenerarNumeroAleatorio(100,1);
        }
    }

}

void MostrarMatrix(int matrix [100][100], int filas, int columnas){
    for (int i =0;i<filas;i++){ // se pone 5 porque el numero de filas y columnas ya es preestablecido 
        for (int j=0;j<columnas;j++){
            cout<< matrix[i][j]<< "\t";
        }
        cout << endl;
    }

}

int GenerarNumeroAleatorio(int max, int min){
    return rand()% (max -min+1)+min;
}


int PeorPromedio(int matrix [100][100], int filas, int columnas)
{
    int peor=9999;
    int PromedioBajo=0;
    for (int j=0; j<columnas; j++){
    int suma=0;
    for (int i=0; i<filas;i++){
        suma+=matrix[i][j];
    }
    int promedio=suma/filas; // filas porque no es un numero fijo
    if (promedio<peor){
        peor=promedio;
        PromedioBajo=j;
    }
  }
  return PromedioBajo;
}

int MejorPromedio(int matrix [100][100], int filas, int columnas){
    
    int mejor=0;
    int PromedioMayor=0;
    for (int j=0; j<columnas; j++){
    int suma=0;
    for (int i=0; i<filas;i++){
        suma+=matrix[i][j];
    }
    int promedio=suma/filas; // filas porque no es un numero fijo
    if (promedio>mejor){
        mejor=promedio;
        PromedioMayor=j;
    }
  }
  return PromedioMayor;
}


void IntercambiarColumnas(int matrix [100][100], int filas, int columnas, int bajo, int mayor){
    int aux=0;
    for (int i =0; i<filas; i++){
        aux = matrix[i][bajo];
        matrix[i][bajo]=matrix[i][mayor];
        matrix[i][mayor]=aux;
    }
}



