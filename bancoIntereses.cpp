/* Imagina que acabas de abrir una nueva cuenta de ahorros 
que te ofrece el 4% de interés al año. Estos ahorros debido 
a intereses, que no se cobran hasta finales de año, se te añaden 
al balance final de tu cuenta de ahorros. Escribir un programa 
que comience leyendo la cantidad de dinero depositada en la cuenta 
de ahorros, introducida por el usuario. Después el programa debe 
calcular y mostrar por pantalla la cantidad de ahorros tras el primer, 
segundo y tercer años. Redondear cada cantidad a dos decimales. */

#include <iostream>
#include <iomanip>
using namespace std;
int main () {

    float deposito;
    const int intereses = 4;
    float interesPrimerAño;
    float interesSegundoAño;
    float interesTercerAño;

    cout << "Cuanto vas a depositar: ";
    cin >> deposito;

    interesPrimerAño = (deposito + (intereses * deposito) / 100);
    interesSegundoAño = (interesPrimerAño + (intereses * interesPrimerAño) / 100);
    interesTercerAño = ( interesSegundoAño + (intereses * interesSegundoAño) / 100);

    cout << fixed << setprecision (2) << "El interes del primer año es de: " << interesPrimerAño << endl;
    cout << fixed << setprecision (2) << "El interes por el segundo año es de: " << interesSegundoAño << endl;
    cout << fixed << setprecision (2) << "El interes por el tercer año es de: " << interesTercerAño;

    return 0;
}