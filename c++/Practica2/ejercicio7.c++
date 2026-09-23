#include <iostream>
using namespace std;

float num;
int i,sum,facto;


int main(){
    cout << "Ingrese de que numero quiere su factorial: ";
    cin >> num;

    facto = 1;

    for ( i = 1; i <= num; i++)
    {
        /* code */
        facto = facto * i;
    }
    
    cout << "El factorial de "<<num<<" es: "<<facto;
    
}