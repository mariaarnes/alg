/*Biblioteca digital Objetivo: Gestionar una colección de libros usando un sistema de hash.
● La clave será el ISBN del libro y el valor será el título del libro.
● Crea funciones para:
● Agregar nuevos libros a la biblioteca.
● Buscar un libro por su ISBN.
● Eliminar libros del sistema.
● Imprimir todos los libros registrados.
Desafíos:
● Implementar la resolución de colisiones.
● Verificar que no se repitan libros con el mismo ISBN.*/

#include <iostream>
#include "HashMap.h"
#include <string>
using namespace std;

unsigned int hashint (int ISBN){
    return ISBN;
}

int main(){
    int tamanio=11;
    HashMap<int, string>biblioteca(tamanio,hashint);
    int ISBN, opcion;
    string titulo;

do{
    cout<<" Elige una opcion para realizar en la biblioteca: \n";
    cout<<"1. Agregar nuevo libro \n";
    cout<<"2. Buscar un libro por su ISBN \n";
    cout<<"3. Eliminar libro \n";
    cout<<"4. Ver todas los libros \n";
    cout<<"5. Salir \n";
    cin>>opcion;

    switch (opcion){
    case 1:
        cout<<"Ingrese el ISBN del libro \n";
        cin>>ISBN;
        cout<<"Ingrese el titulo del libro \n";
        cin.ignore();
        getline(cin, titulo);
        try{ 
            biblioteca.put(ISBN, titulo);
            cout<<"Libro ingresado exitosamente";
        } catch (int e){
            if(e==409){
                cout<<"Ocurrió un error";
            }
        } break;
    case 2:
        cout<<"Ingrese el ISBN del libro a buscar \n";
        cin>>ISBN;
        try{ 
            titulo=biblioteca.get(ISBN);
            cout<<"El titulo del libro es: "<<titulo;
        } catch (int e){
            if(e==404){
                cout<<"Ocurrió un error";
            }
        } break;
    case 3:
        cout<<"Ingrese el ISBN del libro a eliminar \n";
        cin>>ISBN;
        try{ 
            biblioteca.remove(ISBN);
            cout<<"Libro eliminado exitosamente";
        } catch (int e){
            if(e==409){
                cout<<"Ocurrió un error";
            }
        } break;
        case 4:
        cout<<"Todos los libros de la biblioteca: \n";
        biblioteca.print();
        break;
    case 5:
        cout<<"Saliendo... \n";
        break;
    default:
        cout<<"Opcion invalida";
        break;
    }
}while (opcion!=5);
return 0;
}