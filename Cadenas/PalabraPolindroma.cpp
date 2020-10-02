#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    char palabra[30];
    char polif[30];

    cout<<endl;
    cout<<"SABER SI UNA PALABRA ES POLIFINDROMA O NO."<<endl;
    cout<<"Digita tu  palabra: ";cin.getline(palabra,30);

    strcpy(polif,palabra);
    strrev(polif);

    if (strcmp(polif,palabra) == 0)
    {
        cout<<"Tu palabra es polindroma.";
    }
    else {cout<<"Tu palabra no es polindroma.";}

    cout<<endl;
    cout<<endl;

    return 0;
}