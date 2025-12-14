/*Implemente una función para potencias enteras con recursividad. Definición
recursiva para elevar un número a una potencia: Un número elevado a la potencia
cero produce la unidad; la potencia de un número se obtiene multiplicándolo por
sí mismo elevando a la potencia menos uno.*/

#include <iostream>
using namespace std;

int potencia(int base, int exponente){
    if (exponente ==0){
        return 1;
    }
    return base*potencia(base, exponente-1);
}

int main () {
    int base, exponente;
    cout<<"ingrese la base ";
    cin>> base;

    cout<<"ingrese el exponenete ";
    cin>>exponente;

    cout<<"El resultado es "<<potencia(base, exponente)<<endl;
    return 0;
}