/*Crear un programa que pida al usuario un número entero positivo "n". Luego
implementar una función recursiva que cuente la cantidad de dígitos pares que
ocupan posiciones impares (identificándolas de izquierda a derecha) en "n"*/

#include <iostream>
using namespace std;

int paresenimpares(int n, int tamanio){
    if (n==0){
        return 0;
    }
    int digitoactual=n%10;
    if (tamanio % 2 != 0 && digitoactual % 2 == 0) {
        return 1 + paresenimpares(n / 10, tamanio - 1);
    } else {
        return paresenimpares(n / 10, tamanio - 1);
    }
}
int main (){
    int tamanio;
    unsigned int n;
    cout<<"Ingrese la cantidad de digitos ";
    cin>>tamanio;
    cout<<"Ingrese el numero ";
    cin>> n;
    cout<<"La cantidad de digitos pares en posiciones impares es: "<<paresenimpares(n, tamanio)<<endl;
    return 0;
}
