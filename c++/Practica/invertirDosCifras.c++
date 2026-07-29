#include <iostream>
using namespace std;

int num;

int decena;
int unidad;
int centena;
int inver;
int main(){
    cout << "Ingrese un numero de tres cifras \n" ;
    cin >> num;

    unidad = num % 10;
    decena = trunc ((num % 100)/10);
    centena = trunc(num/100) ;
    cout << unidad;
    inver = (unidad*100)+(decena * 10) + centena;
    
    cout << "Resultado = " << inver;
}