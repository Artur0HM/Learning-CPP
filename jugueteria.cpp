/* Una juguetería tiene mucho éxito en dos de sus productos: payasos y muñecas. 
Suele hacer venta por correo y la empresa de logística les cobra por peso de 
cada paquete así que deben calcular el peso de los payasos y muñecas que 
saldrán en cada paquete a demanda. Cada payaso pesa 112 g y cada muñeca 75 g. 
Escribir un programa que lea el número de payasos y muñecas vendidos en el 
último pedido y calcule el peso total del paquete que será enviado. */

#include <iostream>
using namespace std;
int main () {

    int cantidadPayasos;
    int cantidadMuñecas;
    const int pesoPayasos = 112;
    const int pesoMuñecas = 75;
    int pesoTotalDeJuguetes;
    int pesoTotalDeJuguetesKilos;
    int pesoTotalDeJuguetesGramos;

    cout << "Cuantos juguetes de payasos compro: ";
    cin >> cantidadPayasos;

    cout << "Cuantos juguetes de muñecas compro: ";
    cin >> cantidadMuñecas;

    pesoTotalDeJuguetes = (cantidadPayasos * pesoPayasos) + (cantidadMuñecas * pesoMuñecas);
    pesoTotalDeJuguetesKilos = pesoTotalDeJuguetes / 1000;
    pesoTotalDeJuguetesGramos = pesoTotalDeJuguetes % 1000;

    cout << "El peso total en gramos de los juguetes es de: " << pesoTotalDeJuguetes << " gramos." << endl;
    cout << "El peso de los juguetes es de: " << pesoTotalDeJuguetesKilos << " kilos con " << pesoTotalDeJuguetesGramos << " gramos";

    return 0;
}