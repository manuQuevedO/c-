#include <iostream>
using namespace std;

float precio,iva,precioF; 

int main (){
    cout << "Ingrese el precio del producto" <<endl;
    cin >> precio;

    iva = precio * 0.21;

    precioF= precio + iva;

    cout << "El precio aplicado el IVA es: "<<precioF <<endl;

    return 0;
}