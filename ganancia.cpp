/* Un comerciante compra una cantidad de artículo a un costo dado. 
Determine el precio al cual debe venderlo si desea ganar el 15%. */

#include <iostream>
using namespace std;
int main (){

    float precioDelProductoComprado;
    const int ganancia = 15;
    float miGanacia;

    cout << "Precio del producto comprado: ";
    cin >> precioDelProductoComprado;

    miGanacia = (ganancia * precioDelProductoComprado) / 100;

    cout << "Para ganar el " << ganancia << "% deberas de vender el producto a " 
    << precioDelProductoComprado + miGanacia << endl;
    cout << "La ganancia de mi producto es de: " << miGanacia;

    return 0;
}