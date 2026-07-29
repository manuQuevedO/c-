#include <iostream>
using namespace std;

int num;
int i;

int main(){
    cout << "Ingrese hasta que numero quiere imprimir: ";
    cin >> num ;

    for ( i = 1; i <= num; i++)
    {
        cout << "-." << i << endl;
    }
    
}