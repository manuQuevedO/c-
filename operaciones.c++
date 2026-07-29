#include <iostream>
using namespace std;

int num1,num2;
int suma=0,resta=0,mult=0,divi=0;

int main(){
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    suma = num1+num2;
    resta = num1-num2;
    mult=num1*num2;
    divi=(num1/num2);

    cout << "Las operaciones son: ";
    cout << "\n suma: "<<suma;
    cout << "\n resta: "<<resta;
    cout <<"\n multiplicacion: "<<mult;
    cout << "\n divisi: "<<divi;

    return 0;
}
