/* Identifica si es mayor de edad */
#include <iostream>
using namespace std;
int main (){

    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad > 17)
    {
        cout << "Eres mayor de edad.";
    }

    else {
        cout << "Eres menor de edad.";
    }
    

    return 0;
}