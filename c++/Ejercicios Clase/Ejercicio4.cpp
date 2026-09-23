#include <iostream>
using namespace std;


int edad,opcion;
string genero;
float altura;

int main (){

    do
    {
        /* code */
        cout << "-------Opciones-------"<<endl;
        cout <<"1. Ingresar edad " <<endl;
        cout <<"2. Ingresar genero "<<endl;
        cout <<"3. Ingresar altura "<<endl;
        cout << "4. Salir "<<endl;

        cout <<"Ingrese la opcion: "<<endl;
        cin >> opcion;
    } while (opcion > 0 && opcion<5);

    switch (opcion)
    {
    case 1:
        /* code */
        cout <<"Ingrese su edad: "<<endl;
        cin >> edad;
        cout << "Edad: "<<edad <<endl;
        break;
    case 2:
        /* code */
        cout << "Ingrese su genero: "<<endl;
        cin >> genero;
        cout << "Sexo: "<<genero <<endl;
        break;
    case 3:
        /* code */
        cout << "Ingrese su altura: "<<endl;
        cin >> altura;
        cout << "Altura: "<<altura <<endl;
        break;
    
    default:
        cout <<"Hasta luego";
        break;
    }
    
    
    
    
}