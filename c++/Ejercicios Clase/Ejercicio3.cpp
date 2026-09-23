#include <iostream>
using namespace std;


int edad;
string sexo;
float altura;

int main (){
    cout <<"Ingrese su edad: "<<endl;
    cin >> edad;

    cout << "Ingrese su Sexo (M/F)"<<endl;
    cin >> sexo;
    
    cout <<"Ingrese su altura: "<<endl;
    cin >> altura;

    cout << "---Datos personales---" <<endl;
    cout << "Edad: "<<edad <<endl;
    cout << "Sexo: "<<sexo <<endl;
    cout << "Altura: "<<altura <<endl;
}