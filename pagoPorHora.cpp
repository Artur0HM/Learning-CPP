/* Escribir un programa que pregunte 
al usuario por el número de horas trabajadas 
y el coste por hora. Después debe mostrar 
por pantalla la paga que le corresponde. */

#include <iostream>
using namespace std;
int main () {

    int horasLaboradas;
    int pagoPorHora;
    int remuneracion;

    cout << "Cuantas horas trabajaste esta semana: ";
    cin >> horasLaboradas;

    cout << "Caunto te pagon por hora: ";
    cin >> pagoPorHora;

    remuneracion = horasLaboradas * pagoPorHora;

    cout << "Tu remuneracióm de esta semana es: " << remuneracion << " dolares.";

    return 0;
}