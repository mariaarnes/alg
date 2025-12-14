#include<iostream>
using namespace std;

// Función que marca un asiento como reservado
void marcarAsiento(bool* asiento) {
    *asiento = true;
}

// Función para mostrar el estado de los asientos
void mostrarAsientos(bool asientos[], int cantidad) {
    cout << "Estado de los asientos: ";
    for (int i = 0; i < cantidad; ++i) {
        cout << (asientos[i] ? "[X]" : "[ ]") << " ";
    }
    cout << endl;
}

int main() {
    const int TOTAL_ASIENTOS = 10;
    bool asientos[TOTAL_ASIENTOS] = { false }; // Todos los asientos están libres al principio

    // Mostrar estado inicial
    cout << "Asientos disponibles (inicial):" << endl;
    mostrarAsientos(asientos, TOTAL_ASIENTOS);

    // Pedir al usuario que elija un asiento
    int numero;
    cout << "Ingrese el número de asiento que desea reservar (0 a " << TOTAL_ASIENTOS - 1 << "): ";
    cin >> numero;

    // Validar entrada
    if (numero < 0 || numero >= TOTAL_ASIENTOS) {
        cout << "Número de asiento inválido." << endl;
        return 1;
    }

    // Marcar el asiento
    marcarAsiento(&asientos[numero]);

    // Mostrar estado final
    cout << "Asientos después de la reserva:" << endl;
    mostrarAsientos(asientos, TOTAL_ASIENTOS);

    return 0;
}
