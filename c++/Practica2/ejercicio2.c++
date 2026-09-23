#include <iostream>
using namespace std;

float num;
int i;
int main(){
    cout << "Ingrese un numero del 1 al 10"<<endl;
    cin >> num;

    for ( i = 1; i < 11; i++)
    {
        /* code */
        cout << num << "x" << i << "=" << num * i << endl;
    }
    
}