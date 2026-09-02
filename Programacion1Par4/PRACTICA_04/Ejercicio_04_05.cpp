// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
bool VerificacionParidad(int numero);
int main(){
    int numero1=0;
    cout<<"Ingrese un numero: "<< endl;
    cin>>numero1;
    bool paridad=VerificacionParidad(numero1);
    cout<< paridad << endl;
    return 0;
}


 bool VerificacionParidad(int numero)
  {
     if(numero % 2 == 0)
      {
        cout<<"Es par"<< endl;
        return true;
      }
     else
      {
        cout<<"Es impar"<<endl;
        return false;
      }
}