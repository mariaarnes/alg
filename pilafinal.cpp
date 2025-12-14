#include <iostream>
#include "Pila.h" 
using namespace std;

bool soniguales (Pila<int>pila1, Pila<int>pila2){
    Pila<int>aux1;
    Pila<int>aux2;

    while (!pila1.esVacia() && !pila2.esVacia()){
    int valor1=pila1.pop();
    int valor2=pila2.pop();
        if (valor1!=valor2){
        return false;
    }
    aux1.push(valor1);
    aux2.push(valor2);
    }
  while (!aux1.esVacia()&&!aux2.esVacia()) {
        pila1.push(aux1.pop());
        pila2.push(aux2.pop());
    }
    return true;
}

int main(){
    Pila<int>pila1;
    Pila<int>pila2;
    char n;

    cout<<"Ingrese un numero de la pila 1, finalice con . "<<endl;
    while (cin >> n && n != '.'){
      pila1.push(n);
    }
    cout<<"Ingrese un numero de la pila 2, finalice con . "<<endl;
    while (cin>>n && n !='.'){
      pila2.push(n);
    }
    if (soniguales(pila1, pila2)){
        cout<<"Las pilas son iguales";
    }
    else {
        cout << "Las pilas son diferentes";
    }return 0;

}