#include <iostream>

using namespace std;

int main()
{
    int numero1,numero2;
    cout << "Ingrese un numero:" << endl;
    cin >> numero1;
    cout << "ingrese otro numero:" << endl;
    cin >> numero2;
    if(numero1>numero2){
        cout << numero1 << numero2;
    }else{
        cout << numero2 << numero1;
    }

    return 0;
}
