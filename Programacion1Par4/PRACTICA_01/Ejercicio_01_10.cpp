// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 18/08/2026
#include <iostream>
using namespace std;

int main (){
    int numero = 0;
     cout << "Los mesese del año son:" << endl;
     cout <<  "Enero\t"  << endl;
     cout<< "Febrero\t"<< endl;
     cout<< "Marzo\t"<< endl;
     cout<<"Abril\t"<<endl;
     cout<<"Mayo\t"<< endl;
     cout<< "Junio\t"<<endl;
     cout<<"Julio\t"<<endl;
     cout<<"Agosto\t"<<endl;
     cout<< "Septiembre\t"<<endl;
     cout<<"Octubre\t"<<endl;
     cout<<"Noviembre\t"<<endl;
     cout<<"Dieciembre\t"<<endl;
     cout << "Ingresa un numero entre 1 y 12:" << endl;
      cin >> numero;
      switch (numero){
        case 1: 
        cout << "Es el mes de Enero" << endl;
        break;

        case 2: 
        cout << "Es el mes de Febrero" << endl;
        break;

        case 3: 
        cout << "Es el mes de Marzo" << endl;
        break;

        case 4: 
        cout << "Es el mes de Abril" << endl;
        break;

        case 5: 
        cout << "Es el mes de Mayo" << endl;
        break;

        case 6: 
        cout << "Es el mes de Junio" << endl;
        break;

        case 7: 
        cout << "Es el mes de Julio" << endl;
        break;
        
        case 8: 
        cout << "Es el mes de Agosto" << endl;
        break;
        
        case 9: 
        cout << "Es el mes de Septiembre" << endl;
        break;
        
        case 10: 
        cout << "Es el mes de Octubre" << endl;
        break;
        
        case 11: 
        cout << "Es el mes de Noviembre" << endl;
        break;
        
        case 12: 
        cout << "Es el mes de Diciembre" << endl;
        break;
        
        default:
        cout << "ERROR" << endl;
        break;
    }
    return 0;
}