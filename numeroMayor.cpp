/* INGRESA DOS NÚMEROS Y SEÑALA CUAL ES MAYOR Y LA SUMA DE LOS DOS */

#include <iostream>
using namespace std;
int main (){

    float primerNumero;
    float segundoNumero;
    float suma;

    cout << "INGRESA EL PRIMER NÚMERO: ";
    cin >> primerNumero;

    cout << "INGRESA EL SEGUNDO NÚMERO: ";
    cin >> segundoNumero;

    suma = primerNumero + segundoNumero;

        if (primerNumero > segundoNumero)
        {
            cout << "EL PRIMER NÚMERO ES EL MAYOR." << endl;
            cout << "LA SUMA DE LOS DOS NÚMEROS ES: " << suma;
        }
        
        else {
            cout << "EL SEGUNDO NÚMERO ES EL MAYOR." << endl;
            cout << "LA SUMA DE LOS DOS NÚMEROS ES: " << suma;
        }


    return 0;
}