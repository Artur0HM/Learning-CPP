/* Permita introducir una medida expresada en centímetros la convierta en pulgadas (1pulgada = 2,54 centímetros) */

#include <iostream>
using namespace std;
int main () {

    int centimetros;
    float pulgadaCentimetros = 2.54;
    float pulgadas;

    cout << "Ingresa una distancia en centimetros: ";
    cin >> centimetros;

    pulgadas = centimetros * pulgadaCentimetros;


cout << "La distancia ingresada es de: " << centimetros << " centimetros" << endl;
    
    cout << "La distancia en pulgadas es de: " << pulgadas;

    return 0;
}