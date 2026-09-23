#include <iostream>
using namespace std;

float num;
int i,sum;


int main(){
    num = 1;

    while (num > 0 && num < 20 || num > 30)
    {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num > 0 && num < 20 || num > 30)
        {
            /* code */
            sum = sum + num;
        }
        

    }
    
    cout << "--La suma de los valores ingresados es: "<<sum;
    
}