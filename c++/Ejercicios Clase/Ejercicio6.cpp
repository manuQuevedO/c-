#include <iostream>
using namespace std;

float num1 , num2, num3;
int main (){

    cout << "Ingrese el primer numero: ";
    cin >> num1 ;

    cout << "Ingrese el segundo numero: ";
    cin >> num2 ;

    cout << "Ingrese el tercer numero: ";
    cin >> num3 ;
    
    if (num1 > num2 && num1>num3)
    {
        /* code */
        cout << "El numero mayor es: "<<num1 <<endl;
    }else if (num2 > num1 && num2 > num3)
    {
        /* code */
        cout << "El numero mayor es: "<<num2 <<endl;
    }else{
        cout << "El numero mayor es: "<<num3 <<endl;
    }
    
}