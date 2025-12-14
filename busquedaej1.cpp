#include <iostream>
using namespace std;

// Función de búsqueda secuencial
int busquedaSecuencial(int arr[], int n, int clave) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == clave) {
            return i;  // Retorna la posición si se encuentra
        }
    }
    return -1;  // Retorna -1 si no se encuentra
}

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> n;

    // Crear el arreglo dinámicamente
    int* arr = new int[n];
    cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int clave;
    cout << "Ingrese el número que desea buscar: ";
    cin >> clave;

    // Llamar a la función de búsqueda
    int resultado = busquedaSecuencial(arr, n, clave);

    if (resultado == -1) {
        cout << "El número no se encontró en el arreglo.\n";
    } else {
        cout << "El número se encontró en la posición: " << resultado << endl;
    }

    // Liberar la memoria
    delete[] arr;
    return 0;
}
