#include <iostream>
#include <vector>
#include<cstdlib>
#include<ctime>

using namespace std;

void LlenarMatrix(double tiempo[4][5]);
void MostrarMatrix(double tiempo[4][5]);
double GenerarNumeroAleatorio(double max, double min);
void MejorTiempo(double tiempo[4][5]);
void MejorPromedio(double tiempo[4][5]);


int main(){
    double tiempo [4][5];
    srand(time(NULL));
    system ("cls");
    LlenarMatrix(tiempo);
    MostrarMatrix(tiempo);
    MejorTiempo(tiempo);
    MejorPromedio(tiempo);


    return 0;
}

void LlenarMatrix(double tiempo[4][5]){
    for (int i =0;i<4;i++){ // se pone 5 porque el numero de filas y columnas ya es preestablecido 
        for (int j=0;j<5;j++){
            tiempo[i][j]=GenerarNumeroAleatorio(50.00,20.00);
        }
    }
}
void MostrarMatrix(double tiempo[4][5]){
    for (int i =0;i<4;i++){
        for (int j=0;j<5;j++){
            cout << tiempo[i][j]<< "\t";
        }
        cout << endl;
    }
}

double GenerarNumeroAleatorio(double max, double min){
    return rand()% ((5000 -2000+1)+2000)/100.0;
}

void MejorTiempo(double tiempo[4][5]){
    for (int i=0; i<4; i++){
        double menor=tiempo [i][0];
        double TiempoGanador=0;
        for (int j =0; j<5; j++){
            double menorTiempo=tiempo [i][j];
            if (menorTiempo<menor){
                menor=menorTiempo;
            }
        }
         cout << "El mejor tiempo en cada estilo fue: "<< i+1<< " " << menor<< endl;
    } 
}

void MejorPromedio(double tiempo[4][5]){

        double mejor=9999;
        double PromedioGanador=0;

    for (int j=0; j<5; j++){
         double suma=0;

        for (int i =0; i<4; i++){
            suma+=tiempo [i][j];
        }
        double promedio=suma/4;
        
        if (promedio<mejor){
            mejor=promedio;
            PromedioGanador=j;
            }
        }
        cout << "El promedio ganador del nadador "<< PromedioGanador <<" fue de: "<< mejor<< endl; 
}
