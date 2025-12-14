/*Crear un programa que emplee recursividad para calcular el mayor de los
elementos de un vector de “n” tamaño dado por pantalla por el usuario.*/

#include <iostream>
#include <vector>
using namespace std;

int calcularmayor(const vector<int>& vect, int tamanio){
    if(tamanio==1){
        return vect[0];
    }
    if (vect[tamanio-1]>calcularmayor(vect, tamanio-1)){
        return vect[tamanio-1];
    } return calcularmayor(vect, tamanio-1);
}
int main (){
    int tamanio;
    cout<<"Ingrese el tamanio de vector ";
    cin>>tamanio;
    vector<int> vect(tamanio);
    cout<<"Ingrese los numeros del vector: ";
    for (int i=0; i<tamanio; i++){
        cin>>vect[i];
    }
    cout<<"El mayor elemento del vector es: "<<calcularmayor(vect, tamanio)<<endl;
}