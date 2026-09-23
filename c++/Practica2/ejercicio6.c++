#include <iostream>
using namespace std;

int main() {
    int x, y;
    int resultado = 1;

    cout << "Ingrese x: ";
    cin >> x;

    cout << "Ingrese y: ";
    cin >> y;

    for (int i = 1; i <= y; i++) {
        resultado = resultado * x;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}