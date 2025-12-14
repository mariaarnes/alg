#include <iostream>
using namespace std;
int factorial (int n){
    if (n==0){
        return 1;
    } if (n<0){
        return -1;
    } return n*factorial(n-1);
}

int main() {
    int n;
    cout << "Final Programación 3 " << endl;
    cout << "Ingrese el numero para calcular su factorial"<<endl;
    cin>>n;
    int resultado = factorial(n);
    if (resultado==-1){
        cout<<"Numero invalido"<<endl;
    }else{
    cout<<"El factorial de "<<n<<" es "<<resultado;
    }
    return 0;
}
