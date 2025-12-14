/*Implementar una función recursiva que dado un número entero lo muestre de
forma invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de
números negativos y mostrar primero el número a invertir y después el número
invertido.*/
#include <iostream>
using namespace std;

int invertido(int numero, int & inv){
    if (numero==0){
        return 0;
    }
    inv=inv*10+numero%10;
    invertido(numero/10, inv);
}
int main(){
    int numero;
    cout<<"ingrese el numero ";
    cin>>numero;
    if (numero<0){
        cout<<"Numero negativo no valido";
        return 1;
    }
    cout<<"Numero antes de invertir "<<numero<<endl;
    int resultado=0;
    invertido(numero, resultado);
    cout<<"Numero invertido "<<resultado<<endl;
    return 0;
}