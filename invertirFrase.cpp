/* Escribir un programa que pida al usuario que introduzca 
una frase en la consola y muestre por pantalla la frase invertida. */

#include <iostream>
#include <string>
using namespace std;
int main(){

    string frase;

    cout << "Ingrese frase a imvertir: ";
    cin >> frase;

    string reverse (frase.rbegin(), frase.rend());

    cout << "La frase que ingresaste es: " << frase << endl;
    cout << "La frase invertida es: " << reverse;

    return 0;
}
