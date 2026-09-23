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
    }else if (num1 == 'A' || num1 == 'E' || num1 == 'I' || num1 == 'O' || num1 == 'U')
    {
        /* code */
        cout << "Es una vocal mayuscula"<<endl;
    }else{
        /* code */
        cout << "No es una vocal"<<endl;
    }
    
}