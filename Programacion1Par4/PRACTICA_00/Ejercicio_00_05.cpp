#include <iostream>
using namespace std;

int main (){
    int x,y,cam = 0;
    cout << "Escribe el valor de x: " << endl;
    cin >> x;
    cout << "Escribe el valor de y: " << endl;
    cin >> y;
    cam=x;
    x=y;
    y=cam;
    cout << "El nuevo valor de x es: " << x << endl;
    cout << "El nuevo valor de y es: " << y<< endl;
    return 0 ;
}


