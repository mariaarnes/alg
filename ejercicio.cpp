#include <iostream>
#include "Cola.h"
using namespace std;

void sumarn(Cola<int>&cola, int n){
    Cola<int>aux;
    while (!cola.esVacia()){
    aux.encolar(cola.desencolar()+n);
    }
    while (!aux.esVacia()) { 
        cola.encolar(aux.desencolar());
    }
}
void imprimirCola(Cola<int> cola) {
    while (!cola.esVacia()) {
        cout << cola.desencolar() << " ";
    }
    cout << endl;
}
int main() {
    Cola<int> cola;
    int n, cantidad, num;

    cout << "Ingrese cuántos numeros quiere ingresar: ";
    cin >> cantidad;

    cout << "Ingrese los numeros:" << endl;
    for (int i = 0; i < cantidad; i++) {
        cin >> num;
        cola.encolar(num);
    }

    cout << "Ingrese el numero a sumar a cada posicion: ";
    cin >> n;

    sumarn(cola, n);

    cout << "La cola después de sumarle n es: ";
    imprimirCola(cola);

    return 0;
}


