#include <iostream>
using namespace std;
int main () {

    float numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "Ingresaste un número positivo.";
    }

    else if (numero < 0)
    {
        cout << "Ingresaste un número negativo.";
    }
    
    else {
        cout << "Ingresaste el número " << numero << " se considera neutro.";
    }

    return 0;
}