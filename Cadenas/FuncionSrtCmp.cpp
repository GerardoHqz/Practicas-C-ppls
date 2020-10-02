#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    char cadena1[20];
    char cadena2[20];

    cout<<endl;
    cout<<"PROGRAMA PARA SABER SI SON IGUALES 2 PALABRAS"<<endl;
    cout<<"Digita la primera palabra: ";cin.getline(cadena1,20);
    cout<<"Digita la segunda palabra: ";cin.getline(cadena2,20);

    if(strcmp(cadena1,cadena2)==0)
    {
        cout<<"Ambas cadenas son iguales."<<endl;
    }
    else {cout<<"Ambas cadenas son diferentes."<<endl;}

    if(strcmp(cadena1,cadena2)<1)
    {
        cout<<cadena1<<" es menor alfabeticamente.";
    }
    else {cout<<cadena2<<" es mayor alfabeticamente.";}

    return 0;
}