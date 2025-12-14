//Un edificio cuenta con un sistema de control de accesos a través de tarjetas magnéticas. Cada vez que una persona entra o 
//sale del edificio, su tarjeta se registra en el sistema. Queremos implementar un programa que, utilizando una pila, 
//simule el movimiento de una persona dentro del edificio.
#include <iostream>
#include "Pila.h"
#include <string>
using namespace std;

void registrarDesplazamiento(Pila<string>& pilaMovimientos, const string& movimiento, const string& area) {
    if (movimiento == "in") {
        pilaMovimientos.push(area);
    } else if (movimiento == "out" && !pilaMovimientos.esVacia()) {
        pilaMovimientos.pop();
    }else{
        cout << "error" << endl;
    }
}

void mostrarRecorridoInverso(Pila<string>& pilaMovimientos) {
    cout << "Recorrido inverso del dia: " << endl;
    while (!pilaMovimientos.esVacia()) {
        cout << pilaMovimientos.pop() << endl;
    }
}

int main() {
    Pila<string> pilaMovimientos;

    registrarDesplazamiento(pilaMovimientos, "in", "Recepcion");
    registrarDesplazamiento(pilaMovimientos, "in", "Oficina");
    registrarDesplazamiento(pilaMovimientos, "in", "Sala de Reuniones");
    registrarDesplazamiento(pilaMovimientos, "out", "Sala de Reuniones");
    registrarDesplazamiento(pilaMovimientos, "in", "GYM");
    mostrarRecorridoInverso(pilaMovimientos);
    return 0;
}