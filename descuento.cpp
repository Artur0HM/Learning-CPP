/* En un almacén se descuenta 20% del precio al 
cliente si el valor a pagarse es mayor a $200. 
Dado un valor de precio, muestre lo que debe 
pagar el cliente. */

#include <iostream>

using namespace std;
int main () {

    float precioDelProducto;
    int descuento = 20;

    cout << "Ingrese el precio del producto: ";
    cin >> precioDelProducto;

    if (precioDelProducto >= 200)
    {
        cout << "Superaste los 200 dolares te corresponde un descuento del " << descuento << "%" << endl;
        cout << "Total a pagar es: " << (precioDelProducto - (descuento * precioDelProducto) / 100) << " dolares"; 

    }

    else {
        cout << "Total a pagar es de: " << precioDelProducto << " dolares.";
    }
    
    return 0;
}