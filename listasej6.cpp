//Crea un programa que gestione una lista circular de contactos. Cada contacto contiene un
//nombre (cadena de caracteres) y un número de teléfono (cadena de caracteres).
#include <iostream>
#include "CircList.h"
#include <string>
using namespace std;
class Contacto {// Definición de la clase Contacto aquí
public:
    string nombre;
    string telefono;
    /*Constructores*/
    Contacto() : nombre(""), telefono("") {}
    Contacto(const string &n, const string &t) : nombre(n), telefono(t) {}
    // Sobrecarga del operador <<
    friend ostream& operator<<(ostream &os, const Contacto &c) {
        os << "Nombre: " << c.nombre << ", Telefono: " << c.telefono;
        return os;}
    bool operator==(const Contacto& other) const {
        return nombre == other.nombre;}
};
void mostrarContactos( CircList<Contacto> &lista) {// Función para mostrar todos los contactos
    if (lista.esVacia()) {
        cout << "La lista de contactos está vacía." << endl;
        return;}
    lista.imprimir();}
bool buscarContacto(CircList<Contacto> &lista, string &nombre) {// Función para buscar un contacto por nombre
    int tamanio = lista.getTamanio();
    for (int i = 0; i < tamanio; i++) {
        Contacto c = lista.getDato(i);
        if (c.nombre == nombre) {
            cout << "Contacto encontrado: " << c << endl;
            return true;}}
    cout << "Contacto no encontrado." << endl;
    return false;}
void eliminarContacto(CircList<Contacto> &lista, string &nombre) {// Función para eliminar un contacto por nombre
    int tamanio = lista.getTamanio();
    for (int i = 0; i < tamanio; i++) {
        Contacto c = lista.getDato(i);
        if (c.nombre == nombre) {
            // Suponiendo que implementarás eliminarPorValor en CircList
            lista.eliminarPorValor(c);
            cout << "Contacto eliminado: " << c << endl;
            return;}}
    cout << "Contacto no encontrado para eliminar." << endl;}

    int main() {
    CircList<Contacto> lista;
    // Agregar contactos a la lista
    lista.insertarUltimo(Contacto("Alice", "123456"));
    lista.insertarUltimo(Contacto("Bob", "654321"));
    lista.insertarUltimo(Contacto("Charlie", "789012"));
    lista.insertarUltimo(Contacto("Diana", "345678"));
    lista.insertarUltimo(Contacto("Eve", "901234"));
    cout << "Lista de contactos:" << endl;// Mostrar contactos
    mostrarContactos(lista);
    string nombreABuscar = "Eve";// Buscar contacto existente
    cout << "Buscando contacto con nombre " << nombreABuscar << ":" << endl;
    buscarContacto(lista, nombreABuscar);
    nombreABuscar = "Alejandro";// Buscar contacto no existente
    cout << "Buscando contacto con nombre " << nombreABuscar << ":" << endl;
    buscarContacto(lista, nombreABuscar);
    string nombreAEliminar = "Bob";// Eliminar contacto existente
    cout << "Eliminando contacto con nombre " << nombreAEliminar << ":" << endl;
    eliminarContacto(lista, nombreAEliminar);
    nombreAEliminar = "Matias";// Eliminar contacto no existente
    cout << "Eliminando contacto con nombre " << nombreAEliminar << ":" << endl;
    eliminarContacto(lista, nombreAEliminar);
    cout << "Lista de contactos despues de la eliminacion:" << endl;// Mostrar contactos después de eliminar
    mostrarContactos(lista);
    cout << "Numero de contactos en la lista: " << lista.getTamanio() << endl;// Contar contactos
    return 0;
}