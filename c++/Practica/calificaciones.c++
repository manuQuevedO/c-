#include <iostream>
using namespace std;

int nota,i,suma;
float promedio;


int main(){
    for ( i = 0; i < 3; i++)
    {
        /* code */
        cout << "Ingrese la nota ",i;
        cin >> nota;

        suma=suma+nota;

    }
    
    cout << "El promedio es: ",suma/3;

    

}