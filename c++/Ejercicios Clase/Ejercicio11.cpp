#include <iostream>
using namespace std;

int num1;
int main (){

    cout << "Ingrese el primer numero: ";
    cin >> num1 ;

    if (num1 > 17 & num1<26)
    {
        /* code */
        cout << "El numero esta dentro del rango"<<endl;
    }else
    {
        /* code */
        cout << "El numero esta fuera del rango"<<endl;
    }
};