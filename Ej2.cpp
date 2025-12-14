#include <iostream>
#include "Pila.h"
using namespace std;

void clasificar(int n, Pila<int>& pila1, Pila<int>& pila2) {
    if (n >= 0)
        pila1.push(n);
    else
        pila2.push(n);
}

void suma(Pila<int>& pila1, Pila<int>& pila2, Pila<int>& pila3) {
    while (!pila1.esVacia() && !pila2.esVacia()) {
        int valor1 = pila1.pop();
        int valor2 = pila2.pop();
        pila3.push(valor1 + valor2);
    }
}

void imprimirPila(Pila<int>& pila) {
    Pila<int> aux;
    while (!pila.esVacia()) {
        int dato = pila.pop();
        cout << dato << " ";
        aux.push(dato);
    }
    cout << endl;
    while (!aux.esVacia()) {
        pila.push(aux.pop());
    }
}

int main() {
    cout << "Final Programación 3 " << endl;

    Pila<int> pila1; // positivos
    Pila<int> pila2; // negativos
    Pila<int> pila3; // sumas

    int n, tamanio;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> tamanio;

    for (int i = 0; i < tamanio; i++) {
        cout << "Ingrese un numero (positivo o negativo): ";
        cin >> n;
        clasificar(n, pila1, pila2);
    }

    suma(pila1, pila2, pila3);

    cout << "Pila de positivos: ";
    imprimirPila(pila1);

    cout << "Pila de negativos: ";
    imprimirPila(pila2);

    cout << "Pila de sumas: ";
    imprimirPila(pila3);

    return 0;
}
