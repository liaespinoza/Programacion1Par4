#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ContadorVotos (vector <string> partidos, vector <int>& votos, int e);



int main(){
    system("cls");
    vector <string> partidos = {"PDC", "MAS", "LIBRE", "UN"};
    vector <int> votos = {0,0,0,0};
    int e=0;
    cout << "Ingrese el numero de electores: " << endl;
    cin>> e;
    ContadorVotos (partidos, votos, e);



    return 0;
}


void ContadorVotos (vector <string> partidos, vector <int>& votos, int e ){
    int voto=0;
    int posicionMayor=0;
    int mayor=0;
    for(int i=0; i<e;i++){
        cout<< "Por quien es su voto: (0=PDC, 1=MAS, 2=LIBRE, 3=UN)" << endl;
        cin >> voto;
        votos[voto]++; // votos es el contador de los datos que registra la variable voto
    }
    for (int i=0; i<4; i++){
        if (votos[i]>mayor){
            mayor=votos[i];
            posicionMayor=i;
        }
    }
    cout<< "El partido ganador es:" << partidos[posicionMayor]<< endl; // si se pone solamente posicionMayor sale un numero en cambio si lo ubico dentro de partidos ya sale cual es el partido que gano no solo su posicion
    cout<< "Con la cantidad de votos de: "<< mayor<< endl;
}
