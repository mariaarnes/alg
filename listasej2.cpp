//Implementar una función que recibe una lista de números enteros y un número entero “n” y que modifique la lista 
//borrando todos los elementos de la lista que tengan el número “n”. Imprimir la lista antes de hacer el llamado a 
//la función y luego del llamado a la función para mostrar que la lista original cambió

#include <iostream>
#include "Lista.h"
using namespace std;

void eliminarnumero(Lista<int>& lista, int n){
    int tamanio = lista.getTamanio();
    for (int i = 0; i < tamanio;i++){
        if (lista.getDato(i)==n){
            lista.remover(i);
            tamanio=tamanio-1;//porque cuando remuevo un num el tamaño de la lista se modifica  
        } } }

int main() {
    Lista<int> Lista;
    int t, d, n;
    cout<<"Ingrese el tamanio de la Lista: ";
    cin>>t;
    for (int i = 0; i < t; i++) {
        cout<<"Ingrese el valor de la lista en la posicion: "<<i<<endl;
        cin>>d;
        Lista.insertarUltimo(d);
    }
    cout << "Lista original: ";
    Lista.print();
    cout<<"Ingrese el numero a eliminar de la Lista: "<<endl;
    cin>>n;
    eliminarnumero(Lista, n);
    cout << "Lista despues de eliminar al numero " << n << ": ";
    Lista.print();
    return 0;
}