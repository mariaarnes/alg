#include <iostream>
#include "ArbolBinarioAVL.h"
using namespace std;
int main() {
    // Crear el árbol binario
    ArbolBinarioAVL<int> prueba;

    // Insertar los libros en el sistema de gestión
    prueba.put(1);
    prueba.put(2);
    prueba.put(3);
    prueba.put(4);
    prueba.put(5);
    prueba.put(6);
    prueba.put(7);

    prueba.print();
}