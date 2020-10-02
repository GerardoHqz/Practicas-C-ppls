#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void Agregar_lista(Nodo *&,int);
void Mostrar_lista(Nodo *);
void Promedio_lista(Nodo *,int);

int main()
{
    Nodo *lista = NULL;
    int dato;
    char opcion;

    do{
        cout<<"Digite un elemento: "; cin>>dato;
        Agregar_lista(lista,dato);

        cout<<"\nPara agregar mas elementos escriba -> s <- : ";cin>>opcion;

    }while((opcion == 's') || (opcion == 'S'));

    cout<<"\nElementos de la lista: ";
    Mostrar_lista(lista);
    Promedio_lista(lista,dato);

    return 0;
}

void Agregar_lista(Nodo *&lista,int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL) && (aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == NULL){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;

    cout<<"\tElemento agregado correctamente.";
}

void Mostrar_lista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;

    while(actual != NULL){
        cout<<actual->dato<<" -> ";
        actual = actual->siguiente;
    }
 
}

void Promedio_lista(Nodo *lista, int n){
    float promedio = 0;
    int contador = 0;

    while(lista != NULL){
        promedio += lista->dato;
        lista = lista->siguiente;
        contador ++;
    }
    promedio /= contador;
    cout<<"\nEl promedio de los elementos de la lista es: "<<promedio;
}