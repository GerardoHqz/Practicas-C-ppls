#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
    char dato;
    Nodo *siguiente;
};

void agregarPilas(Nodo *&,char);
void sacarPilas(Nodo *&,char &);

int main()
{
    Nodo *pila = NULL;
    char dato;
    int eleccion;

    cout<<"Menu de opciones: \n";
    cout<<"1.Insertar caracter a la pila \n";
    cout<<"2.Sacar caracter de la pila \n";
    cout<<"3.Salir \n";

    do {
        cout<<"\nElija una opcion: ";cin>>eleccion;
        switch (eleccion){
        case 1:
        cout<<"Digita un caracter: ";cin>>dato;
        agregarPilas(pila,dato);
        break;

        case 2:
        cout<<"Sacando caracteres: \n";
        while(pila != NULL){
		  sacarPilas(pila,dato);
		
		  if(pila != NULL){
			cout<<dato<<" , ";
		    }
		  else{
			cout<<dato<<".";
		    }
	    }

        case 3:
        break;
    }
    }while (eleccion != 3);
    


    return 0;
}

void agregarPilas(Nodo *& pila,char n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;
    nuevo_nodo ->siguiente = pila;
    pila = nuevo_nodo;
}

void sacarPilas(Nodo *& pila,char &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}