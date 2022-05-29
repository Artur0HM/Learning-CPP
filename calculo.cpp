/* Obtener (a-b)(a+b). */

#include <iostream>
using namespace std;
int main () {

    float ingrese_A;
    float ingrese_B;
    float resultado;

    cout << "************FORMULA*******************" << endl;
    cout << "*****       (a-b)(a+b)         *******" << endl;
    cout << "**************************************" <<endl;

    cout << "Ingrese A: ";
    cin >> ingrese_A;

    cout << "Ingrese B: ";
    cin >> ingrese_B;

    resultado = (ingrese_A - ingrese_B)*(ingrese_A + ingrese_B);

    cout << "El resultado de (a-b)(a+b) es: " << resultado;

    return 0;
}