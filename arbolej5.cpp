//Inserta los paquetes con los números de seguimiento: 1001, 5002, 3003,2004, 4500, 7005, 8006.
//Los paquetes con los números de seguimiento 2004 y 4500 fueron entregados, así que elimínalos. 
//Luego, un nuevo paquete con el número 3500 llega al sistema. 
//Verifica si el paquete con el número 1001 sigue en tránsito e imprime la lista de paquetes restantes.
#include <iostream>
#include "ArbolBinario.h"
using namespace std;
int main()
{
     ArbolBinario<int> paquetes;
    paquetes.put(1001);
    paquetes.put(5002);
    paquetes.put(3003);
    paquetes.put(2004);
    paquetes.put(4500);
    paquetes.put(7005);
    paquetes.put(8006);

    paquetes.remove(2004);
    paquetes.remove(4500);

    paquetes.put(3500);

    try{
        int paquete1001 = paquetes.search(1001);
        cout<<" El paquete 1001 sigue en transito"<<endl;
    }catch (int e){
        cout<<"El paquete 1001 ya fue entregado"<<endl;
    }
    cout<<"Paquetes restantes en transito: "<<endl;
    paquetes.print();
    return 0;
}