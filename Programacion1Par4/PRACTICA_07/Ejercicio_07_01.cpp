// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 30/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
void GenerarVoltaje(vector <double> &v);
void GenerarTemperatura (vector <double> &t);
void GenerarCaracteres (vector <char> &a);
void GenerarAnios (vector <int> &n);
void GenerarVelocidades (vector <double> &ve);
void GenerarDistancias (vector <double> &d);


 int main(){

    srand (time(NULL));

    vector <double> voltajes (100);
    vector <double> temperaturas (50);
    vector <char> alfanumericos (30);
    vector <int> anios (100);
    vector <double> velocidades (32);
    vector <double> distancias (1000);
     
     GenerarVoltaje(voltajes);
     GenerarTemperatura (temperaturas);
     GenerarCaracteres (alfanumericos);
     GenerarAnios (anios);
     GenerarVelocidades (velocidades);
     GenerarDistancias (distancias);
      
     return 0;
 }



void GenerarVoltaje(vector <double> &v){
     cout << "Voltajes generados:" << endl;
    for (int i=0;i<100;i++){
         v[i]=(rand ()%(22000+1-2000)+2000)/100.0;
         cout << v[i] << " V" << endl;
    }
}


void GenerarTemperatura (vector <double> &t){
     cout << "Temperatura generada:" << endl;
    for (int i=0;i<50;i++){
         t[i]=(rand ()%(10000+1))/100.0; 
         cout << t[i] << endl;

    }
}


void GenerarCaracteres (vector <char> &a){
     cout << "Caracteres generados:" << endl;
    for (int i=0;i<30;i++){
         int x = rand() % 62;

        if(x < 10)
        {
            a[i] = '0' + x;
        }
        else if(x < 36)
        {
            a[i] = 'A' + (x - 10);
        }
        else
        {
            a[i] = 'a' + (x - 36);
        }  
        cout << a[i] << endl;
    }
}


void GenerarAnios (vector <int> &n){
     cout << "Fechas generadas:" << endl;
    for (int i=0;i<100;i++){
         n[i]=(rand ()%(2025+1-1990)+1990);
         cout << n[i] << endl;
    }
}


void GenerarVelocidades (vector <double> &ve){
     cout << "Velocidades generadas:" << endl;
    for (int i=0;i<32;i++){
         ve[i]=(rand ()%(30000+1-1000)+1000)/100.0;
         cout << ve[i] << endl;
    }
}


void GenerarDistancias (vector <double> &d){
     cout << "Distancias generadas:" << endl;
    for (int i=0;i<1000;i++){
         d[i]=(rand ()%(100000+1-100)+100)/100.0;
         cout << d[i] << endl;
    }
}
 