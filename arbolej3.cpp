#include <iostream>
#include "ArbolBinario.h"
using namespace std;
int main()
{
    // Crear el árbol binario para almacenar los números de socio
    ArbolBinario<int> gimnasio;

    // Inscribir a los socios
    gimnasio.put(500);
    gimnasio.put(250);
    gimnasio.put(750);
    gimnasio.put(100);
    gimnasio.put(300);
    gimnasio.put(600);
    gimnasio.put(800);

    std::cout << "Lista de socios antes de las modificaciones:" <<endl;
    gimnasio.print(); // Imprimir lista de socios

    // Eliminar el socio con número 250 (se dio de baja)
    gimnasio.remove(250);

    // Verificar si el socio con número 300 está activo
    try{
        int socio300 = gimnasio.search(300);
        cout << "El socio con número 300 está activo." <<endl;
    } catch (int e){
        cout << "El socio con número 300 no está en el sistema." <<endl;
    }

    // Verificar si el socio con número 750 está activo
    try{
        int socio750 = gimnasio.search(750);
        cout << "El socio con número 750 está activo." <<endl;
    }catch (int e)
    {
        cout << "El socio con número 750 no está en el sistema." <<endl;
    }
    // Imprimir la lista de socios actualizada
    cout << "Lista de socios después de las modificaciones:" <<endl;
    gimnasio.print();
    return 0;
}