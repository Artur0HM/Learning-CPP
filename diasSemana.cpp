/* INGRESE UN NÚMERO DEL 1 AL 7*/

#include <iostream>
using namespace std;
int main (){

    char diaSemana;


    cout << "Ingrese un número del 1 al 7: ";
    cin >> diaSemana;

    switch (diaSemana)
    {
        case '1':
            cout << "El único modo de hacer un gran trabajo es amar lo que haces - Steve Jobs";
            break;

        case '2':
            cout << "Nunca pienso en las consecuencias de fallar un gran tiro… cuando se piensa en las consecuencias se está pensando en un resultado negativo - Michael Jordan";
            break;
        
        case '3':
            cout << "El dinero no es la clave del éxito; la libertad para poder crear lo es - Nelson Mandela";
            break;

        case '4':
            cout << "Cuanto más duramente trabajo, más suerte tengo - Gary Player";
            break;

        case '5':
            cout << "La inteligencia consiste no sólo en el conocimiento, sino también en la destreza de aplicar los conocimientos en la práctica - Aristóteles";
            break;

        case '6':
            cout << "El trabajo duro hace que desaparezcan las arrugas de la mente y el espíritu - Helena Rubinstein ";
            break;
        
        case '7':
            cout << "Escoge un trabajo que te guste, y nunca tendrás que trabajar ni un solo día de tu vida - Confucio";
            break;

        default:
            cout << "Debes ingresar un número de la lista";
            break;
        }

        return 0;
}