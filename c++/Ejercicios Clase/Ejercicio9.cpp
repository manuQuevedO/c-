#include <iostream>
using namespace std;

char num1;
int main (){

    cout << "Ingrese una vocal: ";
    cin >> num1 ;

    if (num1 == 'a' || num1 == 'e' || num1 == 'i' || num1 == 'o' || num1 == 'u')
    {
        /* code */
        cout << "Es una vocal minuscula"<<endl;
    }else
    {
        /* code */
        cout << "No es una vocal minuscula"<<endl;
    }
    
}