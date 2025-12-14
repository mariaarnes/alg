#include <iostream>
#include "Cola.h"
using namespace std;

void eliminarMayor(Cola<int> &cola, int limite) {
    Cola<int> colaAux;  // Cola auxiliar para mantener los elementos menores o iguales a "n"
    while (!cola.esVacia()) {
        int dato = cola.desencolar();
        if (dato <= limite) {
            colaAux.encolar(dato);  // Solo se agregan los elementos menores o iguales a "n"
        }
    }

    while (!colaAux.esVacia()) {  // Transferir los elementos de la cola auxiliar a la cola original
        cola.encolar(colaAux.desencolar());
    }
}

int main() {

    Cola<int> cola;
    int limite;

    cout << "Ingrese numeros para la cola (ingrese -1 para terminar): " << endl;
    int input;
    while (cin >> input && input != -1) {
        cola.encolar(input);
    }

    cout << "Ingrese el limite: ";
    cin >> limite;
    eliminarMayor(cola, limite);

    cout << "Cola depurada: ";
    while (!cola.esVacia()) {
        cout << cola.desencolar() << " ";
    }
    cout << endl;
    return 0;
}