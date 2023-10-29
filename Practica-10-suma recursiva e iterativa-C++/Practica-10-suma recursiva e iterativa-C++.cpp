//hazel yorelly perez hernandez
// maquina 11

#include<conio.h>
#include <iostream>

using namespace std;

int SumaIterativa(int n) {
    int suma = 0;

    while (n > 9) {
        suma += n % 10;
        n /= 10;
    }
    return (suma + n);
}

int SumaRecursiva(int n) {
    if (n <= 9)
        return n;
    else
        return SumaRecursiva(n / 10) + n % 10;
}
// en esta parte se unen las dos operaciones que tenemos anteriormente 
int main() {
    int lasopciones;
    int operacion;
    int salir;

    do {

        cout << "____________________________________________________  \n";
        cout << " :) Ejercicos de las sumas recursivas e iterativa :) \n ";
        cout << "____________________________________________________  \n";
        cout << "presione 1 para la suma recursiva, 2 para la suma iterativa o 3 para salir. \n ";
        cout << "1.-La suma Recursiva. \n ";
        cout << "2.-La suma Iterativa. \n ";
        cout << "3.-salir........ \n ";
        cout << "Ingrese una opcion : \n";

        cin >> lasopciones;
        // se utiliza el switch para hacer un menu y asi meter las dos sumas que tenemos 
        switch (lasopciones) {
        case 1:
            cout << "Ingrese un numero para la respectiva suma recursiva: "; cin >> operacion;
            cout << "Suma recursiva: " << SumaRecursiva(operacion) << endl;
            break;
        case 2:
            cout << "Ingrese un numero para la respectiva suma iterativa: "; cin >> operacion;
            cout << "Suma iterativa: " << SumaIterativa(operacion) << endl;
            break;
        case 3:
            cout << "fin del programa :) "; cin >> salir;
            break;
        default:
            cout << "error con la opcion :(" << endl;
            break;
        }
      
    } while (lasopciones != 3);
    return 0;
}