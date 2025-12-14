//Implementar una función que intercambie los elementos entre 2 listas de números enteros que recibe como parámetros
//Si los tamaños de las listas son distintos, igual debe cambiar los datos y cambiarían los tamaños de cada lista.

#include <iostream>
#include "Lista.h"
using namespace std;
void intercambiarListas(Lista<int>& lista1, Lista<int>& lista2) {
    Lista<int> L1, L2;
    for (int i = 0; i < lista1.getTamanio(); i++) {
        L1.insertarUltimo(lista1.getDato(i));
    }
    for (int i = 0; i < lista2.getTamanio(); i++) {
        L2.insertarUltimo(lista2.getDato(i));
    }
    lista1.vaciar();
    lista2.vaciar();
    for (int i = 0; i < L2.getTamanio(); i++) {
        lista1.insertarUltimo(L2.getDato(i));
    }
    for (int i = 0; i < L1.getTamanio(); i++) {
        lista2.insertarUltimo(L1.getDato(i));
    }
}
int main(){
    Lista<int> lista1;
    Lista<int> lista2;
    int t1, t2, d, n;
    cout<<"Ingrese el tamanio de la Lista 1: ";
    cin>>t1;
    cout<<"Ingrese el tamanio de la Lista 2: ";
    cin>>t2;
    for (int i = 0; i < t1; i++) {
        cout<<"Ingrese el valor de la lista 1 en la posicion: "<<i<<endl;
        cin>>d;
        lista1.insertarUltimo(d);
    }
    for (int i = 0; i < t2; i++) {
        cout<<"Ingrese el valor de la lista 2 en la posicion: "<<i<<endl;
        cin>>d;
        lista2.insertarUltimo(d);
    }
    cout << "Lista 1 original: ";
    lista1.print();
    cout << "Lista 2 original: ";
    lista2.print();
    intercambiarListas(lista1, lista2);
    cout << "Lista 1 intecambiada " << n << ": ";
    lista1.print();
    cout << "Lista 2 intecambiada " << n << ": ";
    lista2.print();
    return 0;
}