/* Escribir un programa que pregunte el nombre del usuario 
en la consola y un número entero e imprima por pantalla en 
líneas distintas el nombre del usuario tantas veces 
como el número introducido. */

#include <iostream>
using namespace std;
int main () {

    char nombres [50];
    int ingreseNumero;

    cout << "Ingresa tu nombrescompletos: ";
    cin.getline (nombres, 50);

    cout << "Cuantas veces vas a reproducir tu nombres: ";
    cin >> ingreseNumero;

    for (int i = 1; i <= ingreseNumero; i++)
    {
        cout << i << " " << nombres << endl;
    }
    
    return 0;
}