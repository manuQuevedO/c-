#include <iostream>
using namespace std;

int a,b,c,n,i;

int main (){

    a=0;
    b=1;
    c=1;

    cout << "Ingrese el valor de n: ";
    cin >> n;
    
    cout << a <<endl;
    for ( i = 1; i < n; i++)
    {
        /* code */
        
        cout << c <<endl;
        c=a+b;
        a=b;
        b=c;
    }
    

}

