// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 07/10/2026
// Muchos sitios web requieren que las contraseñas cumplan con ciertas políticas de
//seguridad. Escribe un programa que utilice una función que reciba un string (la
//contraseña) y devuelva un valor booleano indicando si es segura.
//Requisitos para ser segura: Debe tener al menos 8 caracteres de longitud, contener al
//menos una letra mayúscula, una letra minúscula, un número y un carácter especial.
// Entrada: "HolaMundo123" -> Salida: Contraseña segura
// Entrada: "holamundo" -> Salida: Contraseña vulnera

#include <iostream>
#include <string>
#include <cctype>

using namespace std;


bool SeguridadClave (string clave);

int main(){
    string contrasena;
    cout << "Puedes ingresar tu clave: "<< endl;
    cin>> contrasena;
    SeguridadClave(contrasena);
    if (SeguridadClave(contrasena))
    {
        cout << "Clave segura" << endl;
    }
    else
    {
        cout << "Clave vulnerable" << endl;
    }
    
    
    return 0;
}


bool SeguridadClave (string clave)
{
    if (clave.length() < 8)
    {
        return false;
    }

    bool mayuscula = false;
    bool minuscula = false;
    bool numero = false;
    bool especial = false;

    for (int i = 0; i < clave.length(); i++)
    {
        if (isupper(clave[i]))
        {
            mayuscula = true;
        }

        if (islower(clave[i]))
        {
            minuscula = true;
        }

        if (isdigit(clave[i]))
        {
            numero = true;
        }

        if (!isalpha(clave[i]) && !isdigit(clave[i]))
        {
            especial = true;
        }
    }

    if (mayuscula && minuscula && numero && especial)
    {
        return true;
    }

    return false;
}