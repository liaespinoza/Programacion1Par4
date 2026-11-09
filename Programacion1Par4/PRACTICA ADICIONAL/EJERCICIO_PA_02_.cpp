#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> Username (vector <string> nombres, vector <string> apellidos);

int main(){
    system("cls");
    vector <string> nombres = {"Juan", "Marco", "Polo", "Hernan", "Julian"};
    vector <string> apellidos= {"Alvarez", "Melgarejo", "Perez", "Hormachea", "Justiniano"};
    cout << "Los nombres de usuario son: : " << endl;
    vector <string> resultado = Username(nombres,apellidos);
    for(int i = 0; i < resultado.size(); i++)
    {
        cout << resultado[i] << endl;
    }

    return 0;
}
vector <string> Username (vector <string> nombres, vector <string> apellidos){
    vector <string> NombreUsuario;
    for (int i=0; i<nombres.size();i++){ 
        string usuario; // utilizado para guardar texto osea el nombre del usuario
        usuario+=tolower(nombres[i][0]);// i es por cada nombre de la lista y 0 porque solo se usa la inicial y tolower para que sea siempre en minusculas
        for (int j=0; j<apellidos[i].size();j++){
            usuario +=tolower(apellidos[i][j]);// i significa la posicion del apellido que se esta tomando en cuenta y j es para transformar a minusculas cada caracter del apellido
        }
        NombreUsuario.push_back(usuario);
    }

    return NombreUsuario;
}