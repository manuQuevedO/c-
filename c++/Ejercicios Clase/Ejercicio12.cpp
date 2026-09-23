#include <iostream>
using namespace std;

float num1 , num2, num3, num4;
int main (){

    cout << "Ingrese el primer numero: ";
    cin >> num1 ;

    cout << "Ingrese el segundo numero: ";
    cin >> num2 ;

    cout << "Ingrese el tercer numero: ";
    cin >> num3 ;

    cout << "ahora ingrese el cuarto numero: ";
    cin >> num4;

    if (num4 == num1 || num4 == num2 || num4 == num3 )
    {
        /* code */
        cout << "El numero coincide con alguno de los 3"<<endl;
    }else
    {
        /* code */
        cout << "El numero nu coincide con ninguno"<<endl;
    }
};