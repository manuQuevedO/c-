#include <iostream>
using namespace std;


int main(){
    int num1,num2,aux;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    aux = num1 ;
    num1 = num2;
    num2 = aux;

    cout <<"\n Num1: " <<num1;
    cout <<"\n Num2: " <<num2;


    return 0;
}