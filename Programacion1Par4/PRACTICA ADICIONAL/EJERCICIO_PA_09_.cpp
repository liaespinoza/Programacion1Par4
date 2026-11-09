#include <iostream>
#include <vector>
using namespace std;

void MostrarMedallas(vector<string> paises, int medallas[5][3]);
void BuscarPais(vector<string> paises, int medallas[5][3], string pais);
void MayorOro(vector<string> paises, int medallas[5][3]);


int main(){

    vector<string> paises = { "Bolivia", "Brasil", "Argentina", "Chile", "Peru"};

    int medallas[5][3] = {
        {2, 1, 3},
        {5, 3, 2},
        {4, 2, 5},
        {1, 4, 2},
        {3, 2, 1}
    };

    string pais;

    cout << "Ingrese pais a buscar: ";
    cin >> pais;

    BuscarPais(paises, medallas, pais);

    MayorOro(paises, medallas);

    return 0;
}

void MostrarMedallas(vector<string> paises, int medallas[5][3]){
    for(int i = 0; i < 5; i++){
        cout << paises[i] << ": ";
        cout << "Oro = " << medallas[i][0];
        cout << ", Plata = " << medallas[i][1];
        cout << ", Bronce = " << medallas[i][2] << endl;
    }
}

void BuscarPais(vector<string> paises, int medallas[5][3], string pais){
    for(int i = 0; i < 5; i++){
        if(paises[i] == pais){
            int total = medallas[i][0] + medallas[i][1] + medallas[i][2];

            cout << "Pais: " << paises[i] << endl;
            cout << "Oro: " << medallas[i][0] << endl;
            cout << "Plata: " << medallas[i][1] << endl;
            cout << "Bronce: " << medallas[i][2] << endl;
            cout << "Total: " << total << endl;
        }
    }
}

void MayorOro(vector<string> paises, int medallas[5][3]){
    int mayor = medallas[0][0];
    int posicion = 0;

    for(int i = 1; i < 5; i++){
        if(medallas[i][0] > mayor){
            mayor = medallas[i][0];
            posicion = i;
        }
    }

    cout << "Pais con mas medallas de oro: "
         << paises[posicion] << endl;
    cout << "Cantidad de oro: " << mayor << endl;
}
