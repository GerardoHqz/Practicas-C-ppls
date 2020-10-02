#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int cubo,exponer,valor,eleccion,resultado;

    cout<<endl;
    cout<<"Bienvenido, elije una opcion"<<endl;
    cout<<"1.Cubo de un numero"<<endl;
    cout<<"2.Numero par o impar"<<endl;
    cout<<"3.Salir"<<endl;
    cout<<"Tu opcion es: "; cin>>eleccion;

    switch(eleccion){
        case 1:
        cout<<"Dime el numero: ";cin>>cubo;
        exponer=pow(cubo,3);
        cout<<"El resultado al cubo es: "<<exponer;
        break;

        case 2:
        cout<<"Dime el numero:";cin>>valor;
        if (valor%2==0){
            cout<<"Tu numero es par";
        }
        else
        {
            cout<<"Tu numero es impar";
        }
        
        break;

        case 3:
        break;
    }

    return 0;
}