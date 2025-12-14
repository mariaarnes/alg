#include <iostream>
#include "ArbolBinario.h"
using namespace std;

int suma(int sumaActual, int n) {
    return sumaActual + n;
}

int sumaMultiplos3(int sumaActual, int n) {
    if (n % 3 == 0)
        return sumaActual + n;
    return sumaActual;
}

int main() {
    ArbolBinario<int> arbol;
    int n = -1;

    int sumaTotal = 0;
    int sumaMult3 = 0;

    cout << "Final Programacion 3" << endl;

    while (n != 0) {
        cout << "Ingrese un numero del arbol (finalice con 0): ";
        cin >> n;
        if (n != 0) {
            arbol.put(n);
            sumaTotal = suma(sumaTotal, n);
            sumaMult3 = sumaMultiplos3(sumaMult3, n);
        }
    }

    cout << "El arbol es:" << endl;
    arbol.print();

    cout << "La suma de todos los elementos es: " << sumaTotal << endl;
    cout << "La suma de los multiplos de 3 es: " << sumaMult3 << endl;

    return 0;
}
