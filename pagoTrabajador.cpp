/* A un trabajador le pagan según sus horas trabajadas y la tarifa está a un valor por hora. Si la cantidad de horas trabajadas es mayor a 40 horas, la tarifa por hora se incrementa en un 50% para las horas extras. Calcular el salario del trabajador dadas las horas trabajadas y la tarifa */

#include <iostream>
using namespace std;
int main (){

    int horasTrabajadas;
    int pagoPorHora;

    cout << "Cuantas horas trabajaste esta semana: ";
    cin >> horasTrabajadas;

    cout << "Cuanto es el pago por hora: ";
    cin >> pagoPorHora;

    if (horasTrabajadas >= 40)
    {
        cout << "Esta semana trabajaste " << horasTrabajadas << " horas" <<endl;
        cout << "Tu pago es de: " << horasTrabajadas * pagoPorHora << " dolares";
    }
    
    else {
        cout << "Esta semana trabajaste " << horasTrabajadas << " horas" <<endl;
        cout << "Tu pago es de: " << horasTrabajadas * pagoPorHora << " dolares";        
    }

    return 0;
}