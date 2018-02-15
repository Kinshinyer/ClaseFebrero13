#include <iostream>

using namespace std;

int main()
{
    float num1,num2,num3;
    cout << "MAYOR DE 3 NUMEROS" << endl;
    cout << "Ingrese el primer numero" << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;
    cout << "Ingrese el tercer numero" << endl;
    cin >> num3;
    if(num1>num2 && num1>num3){
        cout << "Numero mayor es:" << num1;
    }else if (num2>num1 && num2>num3){
        cout << "Numero mayor es:" << num2;
    }else{
        cout << "Numero mayor es:" << num3;
    }

    return 0;
}
