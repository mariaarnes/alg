//Escriba un programa que introduzca una palabra y utilice una pila para imprimir la misma palabra invertida.

#include <iostream>
#include "Pila.h"  // Incluye la biblioteca de la pila
using namespace std;

 int main() {
    Pila<char> pila;
    char caracter;
    cout << "Ingrese una palabra o frase (termine con un punto): ";
 
    //Lee caracteres hasta que se ingrese un punto
    do {
        cin.get(caracter);
        if (caracter != '.') {//verifica que sea distinto a punto
             pila.push(caracter);//pone el caracter en la pila
         }
    } while (caracter != '.');
 
    cout << "Palabra o frase invertida: ";
 
    // Desapila cada caracter y lo imprime, invirtiendo así la palabra o frase
     while (!pila.esVacia()) {
         cout << pila.pop();//sacar el dato superior
     }
     cout << endl;
     return 0;
 }