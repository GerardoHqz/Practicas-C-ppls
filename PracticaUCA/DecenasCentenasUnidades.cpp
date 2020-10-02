#include <iostream>

using namespace std;

void pedir_datos();
void proceso(int,int&,int&,int&,int&);

int numero,unidades=0,decenas=0,centenas=0,millares=0;
int main()
{
    cout<<"TABLA DE VALORES DE UN NUMERO."<<endl;
    pedir_datos();
    proceso(numero,unidades,decenas,centenas,millares);
    cout<<"MOSTRANDO VALORES POSICIONALES"<<endl;
    cout<<"unidades: "<<unidades<<endl;
    cout<<"decenas: "<<decenas<<endl;
    cout<<"centenas: "<<centenas<<endl;
    cout<<"millares: "<<millares<<endl;
    return 0;
}
void pedir_datos(){

    cout<<"Introduzca un numero: ";cin>>numero;
}
void proceso(int numero,int& unidades,int& decenas,int& centenas,int& millares){
    millares = numero/1000;
    numero %= 1000;
    centenas = numero/100;
    numero %= 100;
    decenas = numero/10;
    unidades = numero % 10;
}
