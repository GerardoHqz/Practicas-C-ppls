#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void AgregarCola(Nodo *&, Nodo *&, int);
bool ColaVacia(Nodo *);
void SacarCola(Nodo *&, Nodo*&, int &);

int main ()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;

   cout<<"Digita un numero: ";cin>>dato;
   AgregarCola(frente,fin,dato);
   cout<<"Digita un numero: ";cin>>dato;
   AgregarCola(frente,fin,dato);
   cout<<"Digita un numero: ";cin>>dato;
   AgregarCola(frente,fin,dato);

    cout<<"\nSacando elementos de la cola: ";
    while(frente != NULL){
        SacarCola(frente,fin,dato);
        if(frente != NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<".";
        }
    }

    return 0;
}

void AgregarCola(Nodo *& frente, Nodo *& fin, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(ColaVacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;

    cout<<"Elemento agregado exitosamente.\n";
}
bool ColaVacia(Nodo *frente){
    return (frente == NULL)? true : false;
}

void SacarCola(Nodo *&frente, Nodo *&fin, int &n){
    n = frente->dato;
    Nodo *aux = frente;

    if(frente == fin){
        fin = NULL;
        frente = NULL;
    }
    else{
        frente = frente->siguiente;
    }

    delete aux;
}