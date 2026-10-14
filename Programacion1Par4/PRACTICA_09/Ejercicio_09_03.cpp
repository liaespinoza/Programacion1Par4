// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 14/10/2026
#include <iostream>
using namespace std;


void generarMatriz(int matriz[100][100], int row, int cols) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            matriz[i][j] = 2 * i + j + 1;
        }
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
        generarMatriz(matriz, n, n);

        cout << "\nMatriz generada:\n";
        mostrarMatriz(matriz, n, n);
    } else {
        cout << "El orden debe estar entre 1 y 100." << endl;
    }
}
