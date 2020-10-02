#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char cadena1[20];
    char cadena2[20];

    cout<<endl;
    cout<<"COPIAR UNA CADENA A OTRA VACIA."<<endl;
    cout<<"Digita tu palabra: "; cin.getline(cadena1,20);

    strcpy(cadena2,cadena1);

    cout<<cadena2;

    return 0;
}