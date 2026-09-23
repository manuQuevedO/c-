#include <iostream>
using namespace std;

float num,mayor,menor,sum,temp;
int i;

int main(){
    sum = 0;
    for ( i = 1; i < 7; i++)
    {
        /* code */
        cout << "Ingrese la temperatura "<<i<<" :";
        cin >> temp;

        if (i == 1)
        {
            /* code */
            mayor = temp;
            menor = temp;
        }

        if (temp > mayor)
        {
            /* code */
            mayor = temp;
        }
        if (temp < menor)
        {
            /* code */
            menor = temp;
        }
        
        sum = sum + temp;
        
    }
    
    cout << "La temperatura mayor es: "<<mayor<<endl;
    cout << "La temperatura menor es: "<<menor<<endl;
    cout << "La temperatura media del dia es: "<<sum/6<<endl;
}