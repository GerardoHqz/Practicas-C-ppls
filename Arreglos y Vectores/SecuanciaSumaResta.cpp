#include <iostream>

using namespace std;

int main()
{
    int n, suma=0;
    cout<<"PRGRAMA DE SECUENCIA DE SUMAS Y RESTAS."<<endl;
    cout<<"Digite el numero de elementos a sumar: ";cin>>n;

    for(int i=1; i<=n; i++){
        suma = n + i;
    }
    cout << "El resultado es: "<<suma;

    return 0;
}