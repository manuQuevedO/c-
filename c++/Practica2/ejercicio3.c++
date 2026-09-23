#include <iostream>
using namespace std;

float num;
int i,sum;


int main(){
    num = 1;

    while (num != 0)
    {
        cout << "Ingrese un numero diferente de 0: ";
        cin >> num;

        if (num > 0)
        {
            /* code */
            sum = sum + 1;
        }
        

    }
    
    cout << "--Se ingresaron "<<sum<<" mayores a 0--";
    
}