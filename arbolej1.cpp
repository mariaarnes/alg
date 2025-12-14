#include <iostream>
#include "ArbolBinario.h"
using namespace std;
int main() {
    // Crear el árbol binario
    ArbolBinario<int> biblioteca;

    // Insertar los libros en el sistema de gestión
    biblioteca.put(101);
    biblioteca.put(52);
    biblioteca.put(198);
    biblioteca.put(36);
    biblioteca.put(75);
    biblioteca.put(150);
    biblioteca.put(200);

    // Buscar el libro con ID 75
    try {
        int libro = biblioteca.search(75);
        cout << "El libro con ID 75 esta en la biblioteca: " << libro <<endl;
    } catch (int e) {
        if (e == 404) {//error para que el sistema no crashee
            cout << "El libro con ID 75 no esta en la biblioteca." <<endl;
        }
    }

    // Eliminar el libro con ID 52 (prestado)
    biblioteca.remove(52);
    cout << "El libro con ID 52 ha sido eliminado (prestado)." <<endl;

    // Imprimir la estructura del árbol después de la eliminación
    cout << "Estructura del sistema de libros despues de eliminar el ID 52:" <<endl;
    biblioteca.print(); // Imprime el árbol en orden (en este caso, por IDs de libros)

    return 0;
}