#include <iostream>

using namespace std;

void PedirDatos();
void al_Cuadrado(float x);

float num1;
int main ()
{
    cout<<endl;
    cout<<"Numero al Cuadrado."<<endl;

    PedirDatos();
    al_Cuadrado(num1);
    cout<<endl<<endl;

    return 0;
}
void PedirDatos(){
    cout<<"Digite un numero: ";cin>>num1;
}
void al_Cuadrado(float x){
    float cuadrado = x * x;

    cout<<"Tu numero al cuadrado es: "<<cuadrado;
}