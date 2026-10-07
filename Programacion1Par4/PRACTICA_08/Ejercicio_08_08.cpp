// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 07/10/2026

#include <iostream>
#include <string>
using namespace std;

bool CompararFrases(string fraseA, string fraseB);

int main()
{
    string fraseA;
    string fraseB;

    cout << "Ingrese la primera frase: ";
    getline(cin, fraseA);

    cout << "Ingrese la segunda frase: ";
    getline(cin, fraseB);

    if (CompararFrases(fraseA, fraseB))
    {
        cout << "Hay sospecha de plagio." << endl;
    }
    else
    {
        cout << "No hay sospecha de plagio." << endl;
    }

    return 0;
}

bool CompararFrases(string fraseA, string fraseB)
{
    int coincidencias = 0;

    string palabraA = "";

    for (int i = 0; i <= fraseA.length(); i++)
    {
        if (fraseA[i] != ' ' && i != fraseA.length())
        {
            palabraA = palabraA + fraseA[i];
        }
        else
        {
            if (palabraA != "")
            {
                string palabraB = "";

                for (int j = 0; j <= fraseB.length(); j++)
                {
                    if (fraseB[j] != ' ' && j != fraseB.length())
                    {
                        palabraB = palabraB + fraseB[j];
                    }
                    else
                    {
                        if (palabraA == palabraB)
                        {
                            coincidencias++;
                        }

                        palabraB = "";
                    }
                }
            }

            palabraA = "";
        }
    }

    if (coincidencias > 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}