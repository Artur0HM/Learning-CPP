/* Desarrolle el código fuente de un programa que permita ingresar 
como datos el apellido y la edad de un estudiante. Si la edad del 
estudiante es mayor a 18 y menor a 25 debe mostrar como mensaje 
“ESTUDIANTE BECADO”, en caso contrario debe mostrar “ESTUDIANTE SIN BECA”. */

#include <iostream>
using namespace std;
int main (){

    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    int edad;

    cout << "Ingresa tu nomrbe: ";
    cin >> nombre;

    cout << "Ingresa apellido patermo: ";
    cin >> apellidoPaterno;

    cout << "Ingrese apellido materno: ";
    cin >> apellidoMaterno;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad == 18 && edad == 25)
    {
        cout << "becado";
    }
    
    


    return 0;
}