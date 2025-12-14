#include <iostream>
#include "Cola.h"  // Incluye la biblioteca de la Cola
using namespace std;

bool sonIguales(Cola<char> &cola1, Cola<char> &cola2) {
    while (!cola1.esVacia() && !cola2.esVacia()) {
        if (cola1.peek() != cola2.peek()) {//ver cual es el primero sin sacarlo
            return false;
        }
        cola1.desencolar();//sacar el primero
        cola2.desencolar();
    }
    // Si ambas colas están vacías al mismo tiempo, son iguales
    return cola1.esVacia() && cola2.esVacia();
}

int main() {
    Cola<char> cola1;
    Cola<char> cola2;

    cout << "Ingrese caracteres para la primera cola (ingrese '.' para terminar): " << endl;
    char input;
    while (cin >> input && input != '.') {
        cola1.encolar(input);//poner al ultimo
    }

    cout << "Ingrese caracteres para la segunda cola (ingrese '.' para terminar): " << endl;
    while (cin >> input && input != '.') {
        cola2.encolar(input);
    }

    if (sonIguales(cola1, cola2)) {
        cout << "Las colas son iguales." << endl;
    } else {
        cout << "Las colas son diferentes." << endl;
    }return 0;
}