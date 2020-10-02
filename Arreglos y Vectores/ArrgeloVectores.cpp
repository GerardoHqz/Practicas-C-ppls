#include <iostream>

using namespace std;

int main ()
{
    int  numeros[5] = {1,2,3,4,9}, mayor=0, suma=0;
    cout<<"PROGRAMA DE VECTORES SI HAY ALGUNO QUE HAGA LA SUMA DE LOS DEMAS."<<endl;

    for (int i=0; i<5; i++)
    {
        suma+=numeros[i];
        if (numeros[i]>mayor)
        {
            mayor = numeros[i];
        }
    }

    if (mayor == suma-mayor)
    {
        cout<<"El numero "<<mayor<<" es la suma del resto de elemetos del vector.";
    }
    else {cout<<"No hay un numero en el vector que del resto de los elementos.";}

    return 0;
}    