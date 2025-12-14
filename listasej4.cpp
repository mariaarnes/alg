//Escribir un programa que pida al usuario una palabra o frase y la almacene en una Lista separando letra por letra, 
//luego pedirá al usuario una vocal que desee contar y, por último, se debe imprimir por pantalla la lista y el número
//de veces que aparece la vocal en la palabra o frase. Validar que la Lista no esté vacía y que la letra a contar que introduzca
//el usuario sea una vocal.
#include <iostream>
#include "Lista.h"
#include <string>
#include <cctype> // Para usar la función tolower
using namespace std;

bool esVocal(char c) {
    c = tolower(c);//lo hace minuscula 
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int contarVocal(Lista<char>& lista, char vocal) {
    int contador = 0;
    for (int i = 0; i < lista.getTamanio(); i++) {
        if (tolower(lista.getDato(i)) == tolower(vocal)) {
            contador++;
        }
    }
    return contador;
}
int main() {
    Lista<char> lista;
    string frase;
    char vocal;
    cout << "Ingrese una palabra o frase: ";
    getline(cin, frase);
    // Almacenar cada carácter en la lista
    for (int i = 0; i < frase.length(); ++i) {
        char c = frase[i];
        lista.insertarUltimo(c);
    }
    if (lista.esVacia()) {
        cout << "La lista está vacía. No hay nada que contar." << endl;
        return 0;
    }
    cout << "Ingrese una vocal para contar en la frase: ";
    cin >> vocal;
    if (!esVocal(vocal)) {
        cout << "El carácter ingresado no es una vocal." << endl;
        return 0;
    }
    cout << "Lista: ";
    lista.print();
    int cantidad = contarVocal(lista, vocal);
    cout << "La vocal '" << vocal << "' aparece " << cantidad << " veces en la lista." << endl;
    return 0;
}