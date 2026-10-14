// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 14/10/2026

#include <iostream>
using namespace std;


void leerMatriz(int matriz[100][100], int row, int cols) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Ingrese un numero: ";
            cin >> matriz[i][j];
        }
    }
}

void intercambiarFilas(int matriz[100][100], int row, int cols) {
    int aux;

    for (int j = 0; j < cols; j++) {
        aux = matriz[0][j];
        matriz[0][j] = matriz[row - 1][j];
        matriz[row - 1][j] = aux;
    }
}

void mostrarMatriz(int matriz[100][100], int row, int cols) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int matriz[100][100];
    int n;

    cout << "Ingrese el orden de la matriz: ";
    cin >> n;

    if (n >= 1 && n <= 100) {
        leerMatriz(matriz, n, n);

        cout << "\nMatriz original:\n";
        mostrarMatriz(matriz, n, n);

        intercambiarFilas(matriz, n, n);

        cout << "\nMatriz resultante:\n";
        mostrarMatriz(matriz, n, n);
    } else {
        cout << "El orden debe estar entre 1 y 100." << endl;
    }
}
