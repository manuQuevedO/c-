#include <iostream>
using namespace std;

int main(){
    float practica,teoria,participacion;

    cout << "Ingrese el primer nota: ";
    cin >> practica;
    cout << "Ingrese el segundo nota: ";
    cin >> teoria;
    cout << "Ingrese el tercera nota: ";
    cin >> participacion;

    practica *= 0.30;
    teoria *= 0.60;
    participacion *= 0.10;

    cout << "La nota final es: " << practica+teoria+participacion; 
}