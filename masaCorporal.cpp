/* Escribir un programa que pida al usuario su peso 
(en kg) y estatura (en metros), calcule el índice de 
masa corporal y lo almacene en una variable, y muestre 
por pantalla la frase Tu índice de masa corporal es <imc>. */

#include <iostream>
#include <math.h>
using namespace std;
int main () {

    float peso;
    int altura;
    float indiceMasaCorporal;

    cout << "Ingresa tu peso en KG: ";
    cin >> peso;

    cout << "Ingresa tu altura en METROS: ";
    cin >> altura;

    indiceMasaCorporal = peso / pow(altura,2);

    cout << "Tu IMC es: " << indiceMasaCorporal;;

    return 0;
}