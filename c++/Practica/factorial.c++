#include <iostream>
using namespace std;

int num;

int contador;
int inver;

int i;


int main(){
    contador = 1;

    cout << "Ingrese un numero: \n" ;
    cin >> num;
    
    for ( i = 1; i <=num; i++)
    {
        /* code */
        contador = contador * i;
        cout <<contador <<endl;
    }

    cout << "Factorial : " << contador <<endl;
    
}