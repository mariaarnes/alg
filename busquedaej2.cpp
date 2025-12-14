#include <iostream>
using namespace std;

// Función de búsqueda binaria
int busquedaBinaria(int arr[], int izquierda, int derecha, int clave) {
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        // Si el elemento está en el medio
        if (arr[medio] == clave)
            return medio;

        // Si el elemento es menor que el del medio, está en el lado izquierdo
        if (arr[medio] > clave)
            derecha = medio - 1;
        else
            izquierda = medio + 1;
    }
    return -1;// Si no se encuentra
}

int main() {
    int n, clave;
    cout << "Ingrese el tamaño del arreglo (debe estar ordenado): ";
    cin >> n;
    // Crear arreglo dinámicamente
    int* arr = new int[n];
    cout << "Ingrese los elementos del arreglo (en orden ascendente):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Ingrese el número que desea buscar: ";
    cin >> clave;

    int resultado = busquedaBinaria(arr, 0, n - 1, clave);
    if (resultado == -1) {
        cout << "El número no se encontró en el arreglo.\n";
    } else {
        cout << "El número se encontró en la posición: " << resultado << endl;
    }

    // Liberar la memoria
    delete[] arr;
    return 0;
}
