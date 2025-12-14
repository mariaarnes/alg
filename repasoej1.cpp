#include<iostream>
using namespace std;
void intercambiarjugos (double &vaso1, double &vaso2);
int main(){
    double jugonaranja, jugomanzana;
    cout<<"Ingrese la cantidad de jugo de naranja (litros)";
    cin>>jugonaranja;
    cout<<"Ingrese la cantidad de jugo de manzana (litros)";
    cin>>jugomanzana;

cout<<"Antes del intercambio:\n";
cout<<"Jugo de naranja: "<<jugonaranja<<" litros\n";
cout<<"Jugo de manzana: "<<jugomanzana<<" litros\n";

intercambiarjugos(jugonaranja,jugomanzana);

cout<<"Despues del intercambio:\n";
cout<<"Jugo de naranja: "<<jugonaranja<<" litros\n";
cout<<"Jugo de manzana: "<<jugomanzana<<" litros\n";

return 0;
}
void intercambiarjugos (double &vaso1, double &vaso2){//el & es para que siga intercambiado al salir de la funcion, que sea permanente
    double temp=vaso1;
    vaso1=vaso2;
    vaso2=temp;
}