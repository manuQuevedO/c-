#include <iostream>
using namespace std;

string nombre;
int edad;

int main(){
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout <<"Ingrese su edad: ";
    cin >>edad;
    cout << "Mi nombre es " << nombre << " y tengo " << edad << " anios";
}