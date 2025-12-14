/*Simulación de un pequeño diccionario. Utilizaremos el HashMap para almacenar pares de
palabras (clave) y sus significados (valor).
El usuario podrá:
● Agregar nuevas palabras y sus significados.
● Buscar el significado de una palabra.
● Eliminar una palabra del diccionario.
● Ver todas las palabras en el diccionario.*/

#include <iostream>
#include <string>
#include "HashMapList.h"
using namespace std;

unsigned int hashstring(string clave){
    unsigned int hash = 0;
    for (char c : clave) {
        hash += c;
    }
    return hash;
}

int main(){
    unsigned int tamanio=11;
    HashMapList<string,string>diccionario(tamanio, hashstring);
    int opcion;
    string palabra, significado;
    do{
        cout<<" Elige una opcion para realizar en el diccionario: \n";
        cout<<"1. Agregar nueva palabra \n";
        cout<<"2. Buscar un significado \n";
        cout<<"3. Eliminar palabra \n";
        cout<<"4. Ver todas las palabras \n";
        cout<<"5. Salir \n";
        cin>>opcion;
   
    switch (opcion){
    case 1:
        cout<<"Ingrese la palabra "<<endl;
        cin>>palabra;
        cout<<"Ingrese el significado "<<endl;
        cin.ignore();
        getline(cin,significado);
        try{
            diccionario.put(palabra,significado);
            cout<<"Palabra ingresada exitosamente \n";
        } catch (int e) {
            if(e==409){
                cout<<"Ocurrio un error \n";
            }
        }
        break;
    case 2:
        cout<<"Ingrese la palabra a buscar "<<endl;
        cin>>palabra;
        try{
            significado=diccionario.get(palabra);
            cout<<"El significado de la palabra es: "<<significado<<endl;
        } catch (int e) {
            if(e==404){
                cout<<"Ocurrio un error \n";
            }
        }
        break;
    case 3:
        cout<<"Ingrese la palabra a eliminar "<<endl;
        cin>>palabra;
        try{
            diccionario.remove(palabra);
            cout<<"Palabra eliminada exitosamente \n";
        } catch (int e) {
            if(e==409){
                cout<<"Ocurrio un error \n";
            }
        }
        break;
    case 4:
        cout<<"Palabras del diccionario: \n";
        diccionario.print();
        break;
    case 5:
        cout<<"saliendo... \n";
        break;
    default:
        cout<<"Opcion invalida \n";
        break;
    } 
  } while (opcion!=5);
  return 0;
}