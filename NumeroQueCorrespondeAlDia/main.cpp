#include <iostream>

using namespace std;

int main()
{
    int dia=0;
    cout << "Ingrese un numero del 1 al 7" << endl;
    cin >> dia;
    if(dia==1)
    {
        cout << "El dia correspondiente es: LUNES";
    }if(dia==2)
    {
        cout << "El dia correspondiente es: MARTES";
    }if(dia==3)
    {
        cout << "El dia correspondiente es: MIERCOLES";
    }if(dia==4)
    {
        cout << "El dia correspondiente es: JUEVES";
    }if(dia==5)
    {
        cout << "El dia correspondiente es: VIERNES";
    }if(dia==6)
    {
        cout << "El dia correspondiente es: SABADO";
    }if(dia==7)
    {
        cout << "El dia correspondiente es: DOMINGO";
    }
    return 0;
}
