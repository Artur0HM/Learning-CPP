/*Una panadería vende barras de pan a 3.49€ cada una. 
El pan que no es el día tiene un descuento del 60%. 
Escribir un programa que comience leyendo el número de 
barras vendidas que no son del día. Después el programa debe 
mostrar el precio habitual de una barra de pan, el descuento 
que se le hace por no ser fresca y el coste final total*/

#include <iostream>

using namespace std;
int main () {

    string panDelDia;
    int barrasDePan;
    float precioDelPan = 3.49;
    const int descuento = 60;
    float total;

    cout << "Quieres comprar pan del dia [SI] - [NO]: ";
    cin >> panDelDia;

        if (panDelDia == "si" || panDelDia == "SI")
        {
            cout << "Cuantas barras de pan vas a comprar: ";
            cin >> barrasDePan;

                if (barrasDePan == 1)
                {
                    total = barrasDePan * precioDelPan;
                    cout << "El precio por " << barrasDePan << " barra de pan es de: " << total;
                }
                else if (barrasDePan > 1)
                {
                    total = barrasDePan * precioDelPan;
                    cout << "El precio por las " << barrasDePan << " barras de panes es de: " << total;
                }
        }

        else if (panDelDia == "no" || panDelDia == "NO" )
        {
            cout << "Cuantas barras de pan vas a comprar: ";;
            cin >> barrasDePan;

                if (barrasDePan == 1)
                {
                    total = barrasDePan * precioDelPan;
                    cout << "El precio normal de la barra de pan es de: " << precioDelPan << endl;
                    cout << "El descuento por " << barrasDePan << " barra de pan es de : " << ((descuento * total) / 100) << endl;
                    cout << "El precio total a pagar es de: " << (total - (descuento * total) / 100);
                }

                else if (barrasDePan > 1)
                {
                    total = barrasDePan * precioDelPan;
                    cout << "El precio normal de la barra de pan es de: " << precioDelPan << endl;
                    cout << "El descuento por las " << barrasDePan << " barras de panes es de : " << ((descuento * total) / 100) << endl;
                    cout << "El precio total a pagar es de: " << (total - (descuento * total) / 100);
                }
                
                
        }
        
    return 0;
}