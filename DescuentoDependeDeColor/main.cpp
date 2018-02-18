#include <iostream>

using namespace std;

int main()
{
    float precio;
    char  color;
    cout << "Ingrese el valor a pagar:" << endl;
    cin >> precio;
    cout << "Ingrese la inicial del color en INGLES" << endl;
    cin >> color;
    if(color=='w')
    {
        cout << "No tiene descuento" ;
    }
    if(color=='g')
    {
        precio=precio-precio*0.10;
        cout << "Su descuento es:" << precio;
    }
    return 0;
}
