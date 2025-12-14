/*Crear un programa que pida al usuario un número entero positivo "n" y un dígito
"d". Luego crear una función recursiva que determine si “d” está en “n”. Si está, la
función debe retornar verdadero y si no está debe retornar falso.*/

#include <iostream>
using namespace std;

bool esta(int n, int d){
    if (n==0){
    return false;
    }if (n%10 ==d){
        return true;
    }
    return esta (n/10, d);
}
int main (){
    int n,d;
    cout<<"Ingrese el numero n ";
    cin>>n;
    cout<<"Ingrese el digito d para ver si esta en n ";
    cin>>d;
    bool resultado =esta(n, d);
    if (resultado){
        cout<<"El digito "<<d<<" si esta en el numero "<<n<<endl;
    }else {
        cout<<"El digito "<<d<<" no esta en el numero "<<n<<endl;
    }
    return 0;
}