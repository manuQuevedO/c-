#include <iostream>
using namespace std;

int num;

int main(){
    cout << "Ingrese un numero para saber si es positivo o no:";
    cin >> num;

    if (num > 0)
    {
        /* code */
        cout << "el numero es positivo";
    }
    else{
        cout << "El numero es negativo";
    }
    return 0;
}