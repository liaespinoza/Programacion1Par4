// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 07/10/2026

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> ExtraerHashtags(string texto);

int main()
{
    string texto;

    cout << "Ingrese la publicacion: ";
    getline(cin, texto);

    vector<string> hashtags = ExtraerHashtags(texto);

    cout << "Hashtags encontrados:" << endl;

    for (int i = 0; i < hashtags.size(); i++)
    {
        cout << hashtags[i] << endl;
    }

    return 0;
}

vector<string> ExtraerHashtags(string texto)
{
    vector<string> hashtags;
    string palabra = "";

    for (int i = 0; i < texto.length(); i++)
    {
        if (texto[i] != ' ')
        {
            palabra = palabra + texto[i];
        }
        else
        {
            if (palabra != "" && palabra[0] == '#')
            {
                hashtags.push_back(palabra);
            }

            palabra = "";
        }
    }

    if (palabra != "" && palabra[0] == '#')
    {
        hashtags.push_back(palabra);
    }

    return hashtags;
}