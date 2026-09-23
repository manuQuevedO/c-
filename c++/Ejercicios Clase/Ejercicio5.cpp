#include <iostream>
using namespace std;

float num1 , num2;
int main (){

    cout << "Ingrese el primer numero: ";
    cin >> num1 ;

    cout << "Ingrese el segundo numero: ";
    cin >> num2 ;
    
    if (num1 > num2)
    {
        /* code */
        cout << "El numero mayor es: "<<num1 <<endl;
    }else{
        cout << "El numero mayor es: "<<num2 <<endl;
    }
}