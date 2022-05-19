/*SUMA DE DOS NÚMEROS EN C++*/

#include <iostream>
using namespace std;
int main (){

    float firstNumber;
    float secondNumber;
    float resultado;

    cout << "Ingresa el primer número: ";
    cin >> firstNumber;

    cout << "Ingresa el segundo número: ";
    cin >> secondNumber;

    resultado = firstNumber + secondNumber;

    cout << "LA SUMA DE LOS DOS NÚMEROS ES: " << resultado;

    return 0;
}