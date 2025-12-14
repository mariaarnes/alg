/*Implementar una función recursiva que determine la suma de los “n” primeros
números naturales ej: para n=5 mostrar por pantalla 1+2+3+4+5 y luego el
resultado de la suma.*/
#include <iostream>
using namespace std;

int suma (int numero){
    if (numero==0){
        cout<<numero;
        return 0;
    }
    cout << numero << " + ";
    return numero + suma(numero-1);
}

int main(){
    int numero;
    cout<<"Ingrese el numero ";
    cin>>numero;
    cout<<"El resultado de la suma ";
    int resultado = suma(numero);
    cout<<" = "<< resultado<< endl;
    return 0;
}