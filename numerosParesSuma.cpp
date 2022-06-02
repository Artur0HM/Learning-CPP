/* Sumar todos los enteros pares desde 2 hasta n */

#include <iostream>
using namespace std;
int main (){

    int numeroEntero;
    int suma;

    cout << "Ingrese un número entero: ";
    cin >> numeroEntero;

    for (int i = 2; i <= numeroEntero; i += 2)
    {
        cout << "número pares es: " << i << endl;
        suma += i;
    }
        cout << "La suma de los pares es de: "<< suma;

    return 0;
}