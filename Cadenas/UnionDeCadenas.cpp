#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    char cadena1[] = "Hola que tal ";
    char cadena2[12];

    cout<<endl;
    cout<<"EJEMPLO DE UNION DE CADENAS."<<endl;
    cout<<"Dime tu nombre: "; cin.getline(cadena2,12);
    
    strcat(cadena1,cadena2);

    cout<<cadena1;

    return 0;
}