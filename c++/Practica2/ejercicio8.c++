#include <iostream>
using namespace std;

int main() {
    int num, i, facto = 1, sum = 0;

    cout << "Ingrese de que numero quiere su factorial: ";
    cin >> num;

    for (i = 1; i <= num; i++) {
        facto = facto * i;
        sum = sum + facto;
    }

    cout << "La suma de los factoriales es " << sum << endl;
    return 0;
}