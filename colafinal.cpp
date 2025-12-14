#include <iostream>
#include "Cola.h" 
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrarCola(Cola<int>& cola) {
    Cola<int> aux;
    while (!cola.esVacia()) {
        int dato = cola.peek();      // Leemos el dato sin eliminar
        cout << dato << " ";         // Mostramos
        aux.encolar(cola.desencolar()); // Lo pasamos a aux (y lo eliminamos de original)
    }
    while (!aux.esVacia()) {
        cola.encolar(aux.desencolar()); // Restauramos la cola original
    }
    cout << endl;
}

Cola<int> extraerNegativos (Cola<int>cola){
    Cola<int>colaneg;
    while (!cola.esVacia()) {
    int dato=cola.peek();
    if (dato<0){
        colaneg.encolar(dato);
    }
    cola.desencolar();
  }
  return colaneg;
}
int main(){
    srand(time(nullptr));
    Cola<int> cola;
    // Llenar la cola con 100 números aleatorios entre -25 y 25
    for (int i = 0; i < 100; ++i) {
        int numero = rand() % 51 - 25; // [0,50] - 25 => [-25,25]
        cola.encolar(numero);
    }
    cout << " Cola original: "<< endl;
    mostrarCola(cola);
    
    Cola<int> colaneg = extraerNegativos(cola);
    cout << "Cola de negativos: "<<endl;
    mostrarCola(colaneg);
return 0;
} 